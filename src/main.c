#include <genesis.h>
#include "resources.h"

int main() {
    VDP_init();
    SYS_disableInts();
    VDP_setEnable(0);
    VDP_setPalette(PAL0, PAL_Sasami.data);
    VDP_loadTileSet(&TS_Sasami, TILE_USERINDEX, 1);
    VDP_fillTileMapRectInc(PLAN_A, TILE_USERINDEX, 0, 0, 40, 28); 
    VDP_setEnable(1);
	SYS_enableInts();
    while(1) VDP_waitVSync();
	return 0;
}
