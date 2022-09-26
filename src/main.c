#include <genesis.h>
#include "resources.h"

int main() {
	VDP_drawImage(BG_B, &IMG_Sasami, 0, 0);
    while(1) {
		VDP_waitVSync();
	}
	return 0;
}
