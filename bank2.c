#include "SkazkaV2.h"

// Include background assets
#include "assets/backgrounds/bridge.h"
#include "assets/backgrounds/woodman.h"
#include "assets/backgrounds/drowning.h"
#include "assets/backgrounds/flower.h"

void _setBkg(background bkg) {
    switch(bkg) {
        case bridge:
            set_bkg_data(0x00, bridge_tile_count, bridge_tile_data);
            set_bkg_tiles(0x00, 0x00, bridge_tile_map_width, bridge_tile_map_height, bridge_map_data);
            break;
        case woodman:
            set_bkg_data(0x00, woodman_tile_count, woodman_tile_data);
            set_bkg_tiles(0x00, 0x00, woodman_tile_map_width, woodman_tile_map_height, woodman_map_data);
            break;
        case drowning:
            set_bkg_data(0x00, drowning_tile_count, drowning_tile_data);
            set_bkg_tiles(0x00, 0x00, drowning_tile_map_width, drowning_tile_map_height, drowning_map_data);
            break;
        case flower:
            set_bkg_data(0x00, flower_tile_count, flower_tile_data);
            set_bkg_tiles(0x00, 0x00, flower_tile_map_width, flower_tile_map_height, flower_map_data);
            break;
    }
}