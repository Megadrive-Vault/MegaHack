#include <genesis.h>
#include "col.h"
#include "mpad.h"

int main(void)
{
	u16 i;
	VDP_init();
	col_init();
	
	col_puts(0,0,"  ---------------\n  |.............|             ---------\n  |....{......$.|             |.......|\n  |.............|            #.....{..|\n  |.............|          ###|.....=.|\n  -.--.---.------#############...<....|\n   #@  ###########       ###  |.......|\n    #    #  #  #         #    ---------\n  ############# #\n  +\n\n\n\n\n\n\n\n\nMoffitt the Aspirant         St:11 Dx:9 Co:18 In:8 Wi:18 Ch:11  Chaotic\nDlvl:1  $:0  HP:14(14) Pw:6(6) AC:7  Exp:1\n");
	for (;;)
	{
		VDP_waitVSync();
	}
	return (0);	
}
