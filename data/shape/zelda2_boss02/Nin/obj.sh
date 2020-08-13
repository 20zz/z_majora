#! /bin/tcsh -f
rcp guest@idg7:/usr/people/imamura/SRD/ZELDA/obj_01.mdl .
rcp guest@idg7:/usr/people/imamura/SRD/ZELDA/obj_hahen.mdl .
cnvmdl obj_01.mdl -O
cnvmdl obj_hahen.mdl -O
