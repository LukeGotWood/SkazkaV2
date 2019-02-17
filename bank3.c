#include "SkazkaV2.h"

// Include background assets
#include "assets/backgrounds/flowerjar.h"
#include "assets/backgrounds/goat.h"
#include "assets/backgrounds/handwithteeth.h"
#include "assets/backgrounds/jar.h"
#include "assets/backgrounds/teethout.h"
#include "assets/backgrounds/teethsack.h"

// Procedure to load background image into VRAM and map it to the screen
void _setBkg(background bkg) {
    switch(bkg) {
        case flowerjar:
            set_bkg_data(0x00, flowerjar_tile_count, flowerjar_tile_data);
            set_bkg_tiles(0x00, 0x00, flowerjar_tile_map_width, flowerjar_tile_map_height, flowerjar_map_data);
            break;
        case goat:
            set_bkg_data(0x00, goat_tile_count, goat_tile_data);
            set_bkg_tiles(0x00, 0x00, goat_tile_map_width, goat_tile_map_height, goat_map_data);
            break;
        case handwithteeth:
            set_bkg_data(0x00, handwithteeth_tile_count, handwithteeth_tile_data);
            set_bkg_tiles(0x00, 0x00, handwithteeth_tile_map_width, handwithteeth_tile_map_height, handwithteeth_map_data);
            break;
        case jar:
            set_bkg_data(0x00, jar_tile_count, jar_tile_data);
            set_bkg_tiles(0x00, 0x00, jar_tile_map_width, jar_tile_map_height, jar_map_data);
            break;
        case teethout:
            set_bkg_data(0x00, teethout_tile_count, teethout_tile_data);
            set_bkg_tiles(0x00, 0x00, teethout_tile_map_width, teethout_tile_map_height, teethout_map_data);
            break;
        case teethsack:
            set_bkg_data(0x00, teethsack_tile_count, teethsack_tile_data);
            set_bkg_tiles(0x00, 0x00, teethsack_tile_map_width, teethsack_tile_map_height, teethsack_map_data);
            break;
    }
}