#include <genesis.h>
#include "col.h"
#include "mpad.h"

int main(void)
{
	u16 i;
	VDP_init();
	col_init();
	col_puts(0,0,"Hello world. Is this text drawing function particularly slow? It should wrap at the 80 column line, but it does not recognize that it is breaking in the middle of a word.");
	for (;;)
	{
		VDP_waitVSync();
	}
	return (0);	
}

/* vim: set noet: */
