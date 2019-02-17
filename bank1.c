#include "SkazkaV2.h"

// Include background assets
#include "assets/backgrounds/titlescreen.h"
#include "assets/backgrounds/stepmother.h"
#include "assets/backgrounds/babayaga.h"
#include "assets/backgrounds/maincharacter.h"

// Background memory offset
UBYTE backgroundOffset = 0x80u;

// Procedure to load background image into VRAM and map it to the screen
void _setBkg(background bkg) {
    switch(bkg) {
        case titlescreen:
            set_bkg_data(backgroundOffset, titlescreen_tile_count, titlescreen_tile_data);
            set_bkg_tiles(0x00, 0x00, titlescreen_tile_map_width, titlescreen_tile_map_height, titlescreen_map_data);
            break;
        case stepmother:
            set_bkg_data(backgroundOffset, stepmother_tile_count, stepmother_tile_data);
            set_bkg_tiles(0x00, 0x00, stepmother_tile_map_width, stepmother_tile_map_height, stepmother_map_data);
            break;
        case babayaga:
            set_bkg_data(backgroundOffset, babayaga_tile_count, babayaga_tile_data);
            set_bkg_tiles(0x00, 0x00, babayaga_tile_map_width, babayaga_tile_map_height, babayaga_map_data);
            break;
        case maincharacter:
            set_bkg_data(backgroundOffset, maincharacter_tile_count, maincharacter_tile_data);
            set_bkg_tiles(0x00, 0x00, maincharacter_tile_map_width, maincharacter_tile_map_height, maincharacter_map_data);
            break;
    }
}