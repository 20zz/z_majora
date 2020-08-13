#!/usr/bin/perl -w

$zroot = $ENV{ZELDA_ROOT};
$data_o = "$zroot/data/nes_do_action_idx.o";
$data_zh_o = "$zroot/data/nes_do_action_idx.zh.o";
$texture_path = "$zroot/i10n/assets/zh/do_action";
$out = `mips-linux-readelf -S $data_o |grep " \.data"`;
$out =~ /.*PROGBITS\s+[0-9a-f]+\s+([0-9a-f]+)\s+.*/;
$data_offset = hex($1);
`rm -f $data_zh_o`;
`cp $data_o $data_zh_o`;
`chmod u+w $data_zh_o`;

while (glob("$texture_path/*.{ia,i,inta,rgba,rgb}")) {
    /.*\/([^\/]+)\.(ia|inta|i|rgba|rgb)/;
    $format = "ia";
    $bpp = 4;
    $name = $1;
    $ext = $2;

    $out = `mips-linux-readelf -s $data_o |grep "$name"_txt`;
    die "Oh Shit!!!: $name" if $out eq "";
    $out =~ /(:\s*)([0-9a-fA-F]+)(\s+)(\d+)/;
    $offset = hex($2) + $data_offset;
    $size = $4;

    `./rgb2bin.pl $texture_path/$name.$ext $format $bpp > /dev/null 2>&1`;

    printf "$name: bpp=$bpp off=%08x size=%08x\n", $offset, $size ;
    `./replace.pl $data_zh_o $texture_path/$name.bin $offset $size`;

 #   `rm $texture_path/$name.bin`;
 #   `rm $texture_path/$name.h`;
}
