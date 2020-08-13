#! /bin/tcsh -f
rcp guest@idg7:/usr/people/imamura/SRD/ZELDA/minibus.mdl .
rcp guest@idg7:/usr/people/imamura/SRD/ZELDA/minibus.str .

rcp guest@idg7:/usr/people/imamura/SRD/ZELDA/minibus_mdl.c .
rcp guest@idg7:/usr/people/imamura/SRD/ZELDA/minibus_mdl.h .

rcp guest@idg7:/usr/people/imamura/SRD/ZELDA/minibus_swim.c .

cnvmdl minibus.mdl
