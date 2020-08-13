#!/usr/bin/perl -w

$zroot = $ENV{ZELDA_ROOT};
$data_o = "$zroot/data/nes_file_name.o";
$data_zh_o = "$zroot/data/nes_file_name.zh.o";
$texture_path = "$zroot/i10n/assets/zh/title/file_name/";
$out = `mips-linux-readelf -S $data_o |grep " \.data"`;
$out =~ /.*PROGBITS\s+[0-9a-f]+\s+([0-9a-f]+)\s+.*/;
$data_offset = hex($1);
`rm -f $data_zh_o`;
`cp $data_o $data_zh_o`;
`chmod u+w $data_zh_o`;

while (glob("$texture_path/*/*.{ia,i,rgba,rgb}")) {
    /(ia|i|rgba|rgb)(\d+)(\/)(.*)(\.)(ia|i|rgba|rgb)/;
    $format = $1;
    $bpp = $2;
    $name = $4;
    $ext = $6;

    `./rgb2bin.pl $texture_path$format$bpp/$name.$ext $format $bpp > /dev/null 2>&1`;

    $out = `mips-linux-readelf -s $data_o |grep "$name"_txt`;
    $out =~ /(:\s*)([0-9a-fA-F]+)(\s+)(\d+)/;
    $offset = hex($2) + $data_offset;
    $size = $4;

    printf "$name: bpp=$bpp off=%08x size=%08x\n", $offset, $size ;
    `./replace.pl $data_zh_o $texture_path$format$bpp/$name.bin $offset $size`;

    `rm $texture_path$format$bpp/$name.bin`;
    `rm $texture_path$format$bpp/$name.h`;
}
