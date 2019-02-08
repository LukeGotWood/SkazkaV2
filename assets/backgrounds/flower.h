// ///////////////////////
// //                   //
// //  File Attributes  //
// //                   //
// ///////////////////////

// Filename: flower.png
// Pixel Width: 160px
// Pixel Height: 144px

// /////////////////
// //             //
// //  Constants  //
// //             //
// /////////////////

const int flower_tile_map_size = 0x0168;
const int flower_tile_map_width = 0x14;
const int flower_tile_map_height = 0x12;

const int flower_tile_data_size = 0x0D90;
const int flower_tile_count = 0xD9;

// ////////////////
// //            //
// //  Map Data  //
// //            //
// ////////////////

const unsigned char flower_map_data[] ={
  0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x00,0x00,0x00,0x00,0x00,0x03,0x04,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x06,0x07,0x00,0x00,0x00,0x08,0x09,
  0x0A,0x0B,0x00,0x0C,0x0D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x0F,0x10,0x11,
  0x00,0x00,0x12,0x13,0x14,0x11,0x00,0x15,0x16,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,0x1F,0x00,0x00,0x03,0x20,0x21,0x22,0x00,
  0x00,0x00,0x00,0x00,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x2A,0x2B,0x00,0x2C,0x2D,
  0x2E,0x2F,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,
  0x38,0x39,0x3A,0x3B,0x3C,0x3D,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x3F,0x40,0x41,
  0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x4B,0x4C,0x4D,0x4E,0x4F,0x50,0x51,0x52,0x53,0x54,0x55,0x56,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x57,0x58,0x59,0x5A,0x5B,0x5C,0x5D,0x5E,0x5F,0x60,0x61,0x62,0x63,
  0x64,0x00,0x00,0x00,0x00,0x00,0x00,0x65,0x66,0x67,0x68,0x69,0x6A,0x6B,0x6C,0x6D,
  0x6E,0x6F,0x70,0x71,0x72,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x73,0x74,0x75,
  0x76,0x77,0x78,0x79,0x7A,0x6D,0x7B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,
  0x7D,0x7E,0x7F,0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x00,0x00,0x00,0x00,
  0x00,0x89,0x8A,0x8B,0x8C,0x8D,0x8E,0x8F,0x90,0x91,0x92,0x93,0x94,0x95,0x96,0x97,
  0x98,0x00,0x00,0x00,0x00,0x99,0x9A,0x9B,0x9C,0x9D,0x9E,0x9F,0xA0,0xA1,0xA2,0xA3,
  0xA4,0xA5,0xA6,0xA7,0xA8,0xA9,0x00,0x00,0xAA,0xAB,0xAC,0xAD,0xAE,0xAF,0xB0,0xB1,
  0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0x00,0x00,0x00,0x00,0xBC,0xBD,
  0xBE,0xBF,0xC0,0xC1,0xC2,0xC3,0x00,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0xCB,0xCC,0xCD,0xCE,0x00,0x00,0x00,0xCF,0xD0,0xD1,
  0xD2,0xD3,0xD4,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD5,0xD6,0xD7,0xD8,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

// /////////////////
// //             //
// //  Tile Data  //
// //             //
// /////////////////

const unsigned char flower_tile_data[] ={
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFC,0xFF,0xFC,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0x7F,0xFF,0x7F,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFF,
  0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0xF0,0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,
  0x7F,0xFF,0x7F,0xFF,0x3F,0xFF,0x3F,0xFF,0x3F,0xFF,0x3F,0xFF,0x3F,0xFF,0x3F,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFC,0xFF,0xFC,0xFF,0xFC,0xFF,
  0xEF,0xFF,0xE7,0xFF,0xC7,0xFF,0xC7,0xFF,0xC7,0xFF,0xC7,0xFF,0xE7,0xFF,0xE7,0xFF,
  0xF8,0xFF,0xF0,0xFF,0xE1,0xFF,0xC3,0xFF,0x07,0xFF,0x1F,0xFF,0x3F,0xFF,0xFF,0xFF,
  0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xF9,0xFF,0xF9,0xFF,0xF9,0xFF,0xF0,0xFF,0xC0,0xFF,0x80,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0xFF,0x1F,
  0xFE,0xFF,0xFE,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,
  0x78,0xFF,0x38,0xFF,0x1C,0xFF,0x0C,0xFF,0x86,0xFF,0x82,0xFF,0xC0,0xFF,0xC0,0xFF,
  0x3F,0xFF,0x3E,0xFF,0x38,0xFF,0x70,0xFF,0x70,0xFF,0x61,0xFF,0x61,0xFF,0x43,0xFF,
  0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xBC,0xFF,0x9C,0xFF,0x9C,0xFF,0x1C,0xFF,0x1C,0xFF,0x9C,0xFF,0x8E,0xFF,0x8E,0xFF,
  0xE7,0xFF,0xE7,0xFF,0xFC,0xFF,0x78,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0xFF,
  0xFF,0xFF,0x00,0xFF,0x47,0xFF,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,0xFF,0x03,0xFF,
  0xFF,0xE0,0xFF,0xF0,0xFF,0xF9,0xFF,0xF9,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFC,0xFF,0xFC,0xFF,0xFE,0xFF,0xFE,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xE0,0xFF,0x70,0xFF,0x7C,0xFF,0x3F,0xFF,0x0F,0xFF,0x07,0xFF,0x83,0xFF,0x80,0xFF,
  0x07,0xFF,0x07,0xFF,0x0F,0xFF,0x1F,0xFF,0x3E,0xFF,0x7C,0xFF,0x78,0xFF,0x70,0xFF,
  0xFF,0xFF,0xDF,0xFF,0x9F,0xFF,0x3F,0xFF,0x3F,0xFF,0x7F,0xFF,0x7F,0xFF,0x77,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0xFC,0xFF,
  0xFB,0xFF,0xF9,0xFF,0xF9,0xFF,0xF9,0xFF,0xF9,0xFF,0xF8,0xFF,0xFC,0xFF,0xFC,0xFF,
  0x8E,0xFF,0x8F,0xFF,0xCF,0xFF,0xC7,0xFF,0xC7,0xFF,0xE7,0xFF,0xEF,0xFF,0xFE,0xFF,
  0x60,0xFF,0xC0,0xFF,0x87,0xFF,0xFC,0xFF,0xF1,0xFF,0xC0,0xFF,0x03,0xFF,0x1F,0xFF,
  0x07,0xFF,0x7F,0xFF,0xFF,0xFF,0x0F,0xFF,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFC,0xFF,0xF8,0xFF,0xF8,0xFF,0x78,0xFF,
  0xFF,0xFF,0xF3,0xFF,0xE2,0xFF,0xE4,0xFF,0xC8,0xFF,0xC9,0xFF,0x9F,0xFF,0xB0,0xFF,
  0xFF,0xFF,0xBF,0xFF,0x3F,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xE1,0xFF,0xF0,0xFF,0xF0,0xFF,0xF0,0xFF,0xF8,0xFF,0xF8,0xFF,
  0xC0,0xFF,0xE0,0xFF,0xE0,0xFF,0x70,0xFF,0x38,0xFF,0x1E,0xFF,0x07,0xFF,0x03,0xFF,
  0x60,0xFF,0x40,0xFF,0x41,0xFF,0x03,0xFD,0x06,0xFD,0x07,0xF8,0x0F,0xF0,0x9F,0xF8,
  0xE3,0xFF,0xC7,0xFF,0x87,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x9F,0x7F,0x1F,0xFF,
  0xFE,0xFF,0xFE,0xFF,0xFE,0xFF,0xFE,0xFF,0xFE,0xFF,0xFF,0xFF,0xFB,0xFF,0xF9,0xFF,
  0x7C,0xFF,0x3E,0xFF,0x1E,0xFF,0x0F,0xFF,0x07,0xFF,0x07,0xFF,0x83,0xFF,0xC3,0xFF,
  0x78,0xFF,0x79,0xFF,0x3F,0xFF,0x3F,0xFF,0x3F,0xFF,0xBE,0xFF,0xB8,0xFF,0xF1,0xFF,
  0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0xFF,0x80,0xFF,0x07,0xFF,0x3F,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFC,0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,
  0xFE,0xFF,0xFC,0xFF,0xFC,0xFF,0xFC,0xFF,0xF8,0xFF,0xF8,0xFF,0x78,0xFF,0x7B,0xFF,
  0x79,0xFF,0x79,0xFF,0x71,0xFF,0x7D,0xFF,0x7C,0xFF,0x70,0xFF,0x70,0xFF,0xFF,0xFF,
  0x00,0xFF,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0xFF,0x07,0xFF,0x07,0xFF,0xFF,0xFF,
  0xFC,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFC,0xFF,
  0x01,0xFF,0x00,0xFF,0x00,0xFF,0xC0,0xFF,0xE0,0xFF,0xFC,0xFF,0x3F,0xFF,0x07,0xFF,
  0x9A,0xFD,0x92,0xFD,0x10,0xFF,0x00,0xFF,0x00,0xFF,0xC0,0xFF,0xC0,0xFF,0xC1,0xFF,
  0x1D,0xFF,0x3D,0xFF,0x39,0xFF,0x71,0xFF,0x61,0xFF,0x41,0xFF,0xC1,0xFF,0x83,0xFF,
  0xF8,0xFF,0xF8,0xFF,0xFC,0xFF,0xFC,0xFF,0xFE,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xE1,0xFF,0x30,0xFF,0x38,0xFF,0x0F,0xFF,0x07,0xFF,0x03,0xFF,0x01,0xFF,0x81,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xF0,0xFF,0xC0,0xFF,0xC0,0xFF,0xC0,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xE1,0xFF,0x01,0xFF,0x07,0xFF,0x1F,0xFF,0x7F,0xFF,0xE0,0xFF,
  0xFF,0xF7,0xFF,0xE3,0xFF,0x80,0xFF,0x80,0xFF,0xE1,0xFF,0xE3,0xFF,0xF7,0xFF,0xF7,
  0xFE,0xFF,0xFE,0xFF,0xFE,0xFF,0xFC,0xFF,0xCC,0xFF,0xCC,0xFF,0xCC,0xFF,0xCC,0xFF,
  0x78,0xFF,0x78,0xFF,0x70,0xFF,0x70,0xFF,0x71,0xFF,0x78,0xFF,0xFA,0xFF,0xF9,0xFF,
  0x7F,0xFF,0xF4,0xFF,0xE0,0xFF,0xDE,0xFF,0xBF,0xFF,0x7F,0xFF,0xFF,0xFF,0x80,0xFF,
  0x01,0xFF,0x00,0xFF,0x00,0xFF,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0xFF,
  0xFF,0xFF,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x80,0xFF,0xC0,0xFF,0xE0,0xFF,0xF8,0xFF,0xFC,0xFF,0xFF,0xFF,
  0xC1,0xFF,0x03,0xFF,0x03,0xFF,0x06,0xFF,0x06,0xFF,0x06,0xFF,0x04,0xFF,0x00,0xFF,
  0x83,0xFF,0x83,0xFF,0x03,0xFF,0x07,0xFF,0x07,0xFF,0x06,0xFF,0x0F,0xFF,0x0C,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFC,0xFF,0x3C,0xFF,0x3D,0xFF,0x3E,0xFF,0x3E,0xFF,
  0xC0,0xFF,0xC0,0xFF,0xE0,0xFF,0x30,0xFF,0x18,0xFF,0x0F,0xFF,0x07,0xFF,0x07,0xFF,
  0xFF,0xFF,0xFC,0xFF,0xF0,0xFF,0xE0,0xFF,0xC0,0xFF,0x80,0xFF,0x81,0xFF,0x87,0xFF,
  0x00,0xFF,0x00,0xFF,0x01,0xFF,0x07,0xFF,0x0F,0xFF,0x3F,0xFF,0xFF,0xFF,0xF5,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF3,0xFF,0xF3,0xFF,
  0x8C,0xFF,0x8C,0xFF,0x8C,0xFF,0x8C,0xFF,0x8C,0xFF,0x8C,0xFF,0x8F,0xFF,0x8E,0xFF,
  0xFA,0xFF,0xF4,0xFF,0x6C,0xFF,0x4F,0xFF,0x9F,0xFF,0xBC,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0xFF,0x00,0xFF,0x07,0xFF,
  0x07,0xFF,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xF8,0xFF,0xF8,0xFF,0xFC,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0x0F,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0xFF,0xC0,0xFF,
  0xA8,0xFF,0xF8,0xFF,0x3C,0xFF,0x0E,0xFF,0x02,0xFF,0x03,0xFF,0x01,0xFF,0x01,0xFF,
  0x18,0xFF,0x18,0xFF,0x10,0xFF,0x30,0xFF,0x60,0xFF,0xE0,0xFF,0x80,0xFF,0x80,0xFF,
  0x7F,0xFF,0x7F,0xFF,0x7F,0xFF,0x7D,0xFF,0x79,0xFF,0x79,0xFF,0x71,0xFF,0x60,0xFF,
  0x03,0xFF,0x01,0xFF,0x81,0xFF,0x80,0xFF,0x90,0xFF,0xD0,0xFF,0x68,0xFF,0x20,0xFF,
  0x9F,0xFF,0xFE,0xFF,0xF0,0xFF,0xC0,0xFF,0x80,0xFF,0x00,0xFF,0x01,0xFF,0x03,0xFF,
  0xE1,0xFF,0x07,0xFF,0x0F,0xFF,0x1F,0xFF,0x7F,0xFF,0xFF,0xFF,0xE7,0xFF,0x87,0xFF,
  0xE3,0xFF,0xE3,0xFF,0xE3,0xFF,0xE3,0xFF,0xE3,0xFF,0xE3,0xFF,0xE3,0xFF,0xC3,0xFF,
  0x8E,0xFF,0x8C,0xFF,0x89,0xFF,0x9B,0xFF,0xD3,0xFF,0xF0,0xFF,0xE0,0xFF,0xE0,0xFF,
  0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xFF,0x00,0xFF,0x00,0xFF,0x0F,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1F,0xFF,0x1F,0xFF,0x7F,0xFF,0xFF,0xFF,
  0xFF,0xF7,0xFF,0xF7,0xFF,0xE3,0xFF,0xE3,0xFF,0xC3,0xFF,0xC1,0xFF,0x80,0xFF,0x00,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,
  0xE0,0xFF,0xF8,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0xFF,0xC0,0xFF,0x80,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0xC0,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x40,0xFF,0x01,0xFF,0x01,0xFF,0x03,0xFF,0x07,0xFF,0x03,0xFF,0x03,0xFF,
  0xC1,0xFF,0xC1,0xFF,0x81,0xFF,0x81,0xFF,0x83,0xFF,0x03,0xFF,0x03,0xFF,0x07,0xF9,
  0x18,0xFF,0x0F,0xFF,0x0E,0xFF,0x87,0xFF,0xF3,0xCF,0xFB,0xE7,0xE0,0xFF,0xF0,0xFF,
  0x0F,0xFD,0x9E,0x7D,0xF2,0x3D,0xC8,0xBF,0x20,0xFF,0x03,0xFF,0x07,0xFF,0x1F,0xFE,
  0x0F,0xFF,0x1F,0xFC,0x3F,0xF8,0x7F,0xE0,0xFF,0xC0,0xFF,0x80,0xFF,0x00,0xFF,0x00,
  0xC3,0xFF,0xE3,0xFE,0xE3,0xFE,0xE3,0xFF,0xE2,0x7F,0xE2,0x7F,0xF0,0x7F,0xFD,0x7F,
  0xDF,0x7F,0xBF,0x5F,0xFF,0xB3,0x78,0xB7,0x40,0xFF,0x80,0xFF,0x00,0xFF,0xC7,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xC3,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFF,0x3F,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBF,0xFF,0xBF,0xFF,0x1F,0xFF,0x0F,
  0xFF,0xC0,0xFF,0xC3,0xFF,0xE3,0xFF,0xF7,0xFF,0xF7,0xFF,0xF7,0xFF,0xF7,0xFF,0xFF,
  0xFE,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x80,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x1F,0xFF,0xFE,0xFF,0xE0,0xFF,0x00,0xFF,0x00,0xFF,
  0x03,0xFF,0x31,0xFF,0xF9,0xFF,0xF8,0xFF,0x04,0xFF,0x00,0xFF,0x02,0xFF,0x00,0xFF,
  0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0xC7,0x38,0xEF,0x98,0x7F,0xD8,0x7F,0xF8,
  0xF8,0xFF,0xFF,0x3F,0xFF,0x0F,0xFF,0x07,0xFF,0x07,0xFF,0x03,0xFF,0x01,0xFF,0x01,
  0x7F,0xFC,0xFF,0xF8,0xFF,0xF0,0xFF,0xE0,0xDF,0xE0,0xDF,0xE0,0xDF,0xE0,0xDF,0xE0,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFB,0x7F,0xF7,0x3F,0xE4,0x3F,0xE8,0x3F,0xC0,0x3F,0xC3,0x3F,0xFF,0x7F,0xFF,0x7F,
  0xFF,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x0F,0xFF,0xFF,0xF8,0xFF,0x80,0xFF,0x00,
  0xFF,0xFF,0x1F,0xFF,0x1F,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0x1F,0xFF,0x00,0xFF,0x00,
  0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0x0F,0xFF,0x1F,0xFF,0x1F,0xFF,0xBF,0xFF,0xBF,0xFF,0xBF,0xFF,0xFF,0xFF,0xFF,
  0xF0,0xFF,0xE0,0xFF,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0xFF,0xF0,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,
  0x03,0xFC,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x0F,0xFF,0x01,0xFF,0x00,0xFF,
  0x3F,0xFC,0x1F,0xFC,0x9F,0xFE,0xCF,0xFE,0xE7,0xFE,0xE7,0xFE,0xFF,0xFF,0x7F,0xFF,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,
  0xDF,0xE1,0xDF,0xE0,0xDE,0xE7,0xCF,0x72,0xEF,0x32,0xEF,0x32,0xCF,0x32,0xCF,0x32,
  0xFF,0x00,0x3F,0xF0,0x7F,0xB0,0x7F,0xB8,0x7F,0xB8,0x7F,0xA2,0x7F,0xA3,0x7F,0xA3,
  0xFF,0x7C,0xFF,0x78,0xF7,0x78,0xF3,0xFC,0xE3,0xFC,0xC3,0x7C,0xC3,0xFC,0x81,0xFE,
  0xFF,0x00,0xFF,0x01,0xFF,0x03,0xFF,0x03,0xFF,0x07,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFC,0xFF,0xFF,0xFF,0x03,0xFF,
  0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0xFF,0xFF,0xFF,
  0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,0xFF,0x01,0xFF,0x00,0xFF,0x03,0xFF,0xFF,0xFF,
  0x01,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFC,0xFF,0xF8,0xFF,0xF0,0xFF,0xE0,0xFF,0xC0,
  0xFF,0xC0,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xF9,0x7E,0xF8,0x07,0xF9,0x07,0xFC,0x03,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xFE,0x01,
  0xCF,0x32,0x47,0xBA,0x07,0xFA,0x82,0xFF,0x42,0xFF,0x26,0xFD,0x04,0xFF,0x04,0xFF,
  0x7F,0xA2,0x7F,0xA2,0x7F,0xA2,0x7F,0xA5,0xFC,0x27,0xC4,0x3F,0xC4,0x7F,0xCF,0x7B,
  0x80,0xFF,0x80,0x7F,0x80,0xFF,0x03,0xFF,0x0F,0xFC,0x3F,0xF0,0x7F,0xC0,0xFF,0x80,
  0xFF,0x00,0x3F,0xC0,0x1F,0xE0,0xFF,0xE0,0xFF,0x38,0xFF,0x0F,0xFF,0x07,0xFE,0x03,
  0xFF,0x1F,0xFF,0x3F,0xFF,0x7F,0xFF,0x7F,0xF0,0xFF,0xC0,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFB,0xFF,0x01,0xFF,0xC7,0x3F,0x7F,0xBF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0xFE,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFC,0xFF,0x0E,0xFF,0x01,0xFF,0x00,0xFF,
  0xE0,0xFF,0xF0,0xFF,0xFF,0xFF,0x1F,0xFF,0x00,0xFF,0x00,0xFF,0xF0,0xFF,0x7F,0xFF,
  0x00,0xFF,0x00,0xFF,0x80,0xFF,0xFF,0xFF,0x1F,0xFF,0x0F,0xFF,0x07,0xFF,0xFC,0xFF,
  0x1F,0xFF,0x01,0xFF,0x00,0xFF,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,
  0xFF,0xFF,0xFF,0xFF,0x7E,0xFF,0xFC,0xFF,0xCC,0xFF,0x88,0xFF,0x08,0xFF,0x18,0xFF,
  0xFF,0x80,0x7F,0x80,0x7F,0xC0,0x7F,0xFF,0x7C,0xFF,0x7C,0xFF,0x7C,0xFF,0x7C,0xFF,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFC,0xFF,0x1F,0xFC,0x3F,0xFE,0x3F,0xFE,0x7F,0xFF,
  0xFE,0x01,0xFF,0x00,0xF0,0xEF,0x18,0xFF,0x9E,0x7F,0xD8,0x37,0xFF,0x30,0xFF,0x20,
  0x04,0xFF,0x00,0xFF,0x10,0xEF,0x12,0xFF,0x00,0xFF,0xFC,0x03,0xFE,0x01,0xFF,0x00,
  0x7F,0xFE,0x3F,0xF0,0x7F,0x80,0x3F,0xC0,0x80,0xFF,0x63,0xDC,0x38,0xFF,0x3C,0xDF,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x80,0x0F,0xF0,0x7F,0xF0,0x3F,0xF8,
  0xFE,0x03,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x07,0xFE,0x3F,0xFF,0xFF,0xFC,0xBF,0xFF,0x80,0xFF,0x80,0xFF,0x80,0x7F,0xFF,0x7F,
  0xFF,0x3F,0xFF,0xFF,0xF0,0x7F,0x00,0xFF,0x00,0xFF,0x07,0xFF,0xFF,0xFF,0xC0,0xFF,
  0xFF,0xFF,0xFF,0xFF,0x0F,0xFF,0x03,0xFF,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,0xFF,
  0xFF,0xFF,0x83,0xFF,0x80,0xFF,0xC0,0xFF,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xC0,0xFF,0xF8,0xFF,0xFE,0xFF,0x1F,0xFF,0x07,0xFF,0x06,0xFF,0xFE,0xFF,0xFC,0xFF,
  0x3F,0xFF,0x1F,0xFF,0x1E,0xFF,0xFC,0xFF,0xFC,0xFF,0x38,0xFF,0x38,0xFF,0x30,0xFF,
  0xFC,0xFF,0xF8,0xFF,0x78,0xFF,0x71,0xFF,0x71,0xFF,0x61,0xFF,0xE1,0xFF,0xE1,0xFF,
  0xFC,0xFF,0xFC,0xFF,0xF8,0xFF,0xF8,0xFF,0xF0,0xFF,0xF0,0xFF,0xF0,0xFF,0xF0,0xFF,
  0x10,0xFF,0x30,0xFF,0x30,0xFF,0x71,0xFF,0x71,0xFF,0x71,0xFF,0xF5,0xFF,0xF7,0xFF,
  0xFC,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0xFF,0xE0,0xFF,0x80,0xFF,0x80,0xFF,
  0xFF,0xDF,0xFF,0x1F,0xE0,0xFF,0x10,0xEF,0x20,0xDF,0x00,0xFF,0x01,0xFF,0x3F,0xFF,
  0xFF,0xA0,0xFF,0xE0,0xFF,0xC0,0x7F,0xC0,0x7F,0xC0,0x7F,0xC0,0xFF,0xC0,0xFF,0xC0,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x0F,
  0xF8,0x0F,0xF8,0x0F,0xF8,0x1F,0xF0,0x1F,0xF0,0x3F,0xF0,0x7F,0xF0,0xFF,0xF0,0xFF,
  0x3F,0xFC,0x33,0xFF,0x21,0xFF,0x21,0xFF,0x21,0xFF,0x39,0xF7,0x79,0xF7,0x7D,0xE3,
  0xFF,0x00,0xFF,0x00,0xFF,0x80,0xFF,0xC0,0xFF,0xF0,0xFF,0xF8,0xC7,0xFC,0xC3,0xFF,
  0xFE,0x3F,0xF8,0x3F,0xE0,0x3F,0xE0,0x3F,0xCF,0x3F,0xFF,0x3F,0xC0,0x3F,0xF0,0x3F,
  0x00,0xFF,0x00,0xFF,0x07,0xFF,0x7F,0xFF,0xF8,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x07,0xFF,0x7F,0xFF,0xFF,0xFF,0xF8,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x03,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1F,0xFF,0x1F,0xFF,0x3F,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFC,0xFF,0xF8,0xFF,0xF8,0xFF,0xFE,0xFF,0xFF,0xFF,
  0xF0,0xFF,0x80,0xFF,0x00,0xFF,0x01,0xFF,0x01,0xFF,0x03,0xFF,0x1F,0xFF,0xFF,0xFF,
  0x1C,0xFF,0x1C,0xFF,0x78,0xFF,0xF8,0xFF,0xF0,0xFF,0xF0,0xFF,0xF1,0xFF,0xF1,0xFF,
  0x30,0xFF,0x61,0xFF,0x61,0xFF,0xE1,0xFF,0xE3,0xFF,0xE3,0xFF,0xE3,0xFF,0xE7,0xFF,
  0xE3,0xFF,0xE3,0xFF,0xE3,0xFF,0xE3,0xFF,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF9,
  0xE1,0xFF,0xE1,0xFF,0xE3,0xFF,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFE,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFE,0xFF,0xFE,0xFF,
  0x07,0xFF,0xFF,0xFF,0xFC,0xFF,0xE0,0xFF,0x00,0xFF,0x00,0xFF,0x07,0xFF,0x3E,0xFF,
  0xFF,0xFF,0xE0,0xFF,0x00,0xFF,0x00,0xFF,0x0F,0xFF,0xFF,0xFF,0xC3,0xFF,0x03,0xFF,
  0xFF,0xC0,0xFF,0xC0,0xFF,0xC0,0xFF,0xE0,0xFF,0xE3,0xFF,0xE3,0xFF,0xE7,0xCF,0xFF,
  0xFF,0x1F,0xFF,0x3F,0xFF,0x7F,0xFF,0xFD,0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0x7F,0xF8,0x6F,0xF8,0xFF,0xF8,0xFF,
  0x7F,0xC1,0x7D,0xE3,0x7D,0xE3,0x78,0xF7,0x78,0xF7,0x70,0xFF,0x70,0xFF,0x70,0xFF,
  0xC3,0xFF,0xC3,0xFF,0xC3,0xFF,0xC3,0xFF,0xC3,0xFF,0xC3,0xFF,0xC1,0xFF,0xC1,0xFF,
  0xBF,0xFF,0xBE,0xFF,0x9C,0xFF,0x9F,0xFF,0x8F,0xFF,0x8E,0xFF,0x8E,0xFF,0x86,0xFF,
  0xFF,0xFF,0x00,0xFF,0x00,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0x7E,0xFF,0x7E,0xFF,
  0xFF,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xF0,0xFF,0xFF,0xFF,0x7F,0xFF,0x3F,0xFF,
  0xFF,0xFF,0x1F,0xFF,0x07,0xFF,0x07,0xFF,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xE1,0xFF,0xF3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xF9,0xFF,0xF9,0xFF,0xF0,0xFF,0xE0,0xFF,0xF0,0xFF,0xF9,0xFF,0xF9,0xFF,0xF9,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFC,0xFF,0xF8,0xFF,0xF8,0xFF,0xFF,0xFF,
  0xF0,0xFF,0xC0,0xFF,0x80,0xFF,0x01,0xFF,0x07,0xFF,0x1F,0xFF,0xFE,0xFF,0xF0,0xFF,
  0x07,0xFF,0x3F,0xFF,0x7F,0xFF,0xFE,0xFF,0xFE,0xFF,0xFE,0xFF,0x3E,0xFF,0x3E,0xFF,
  0xCF,0xFF,0xC7,0xFF,0xC3,0xFF,0x43,0xFF,0x61,0xFF,0x21,0xFF,0x21,0xFF,0x30,0xFF,
  0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x70,0xFF,0x70,0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0xFC,0xFF,0xFC,0xFF,0xFE,0xFF,
  0xC1,0xFF,0xC1,0xFF,0xE1,0xFF,0xE1,0xFF,0xE1,0xFF,0xE1,0xFF,0xE1,0xFF,0xF1,0xFF,
  0xC6,0xFF,0xC6,0xFF,0xC2,0xFF,0xC2,0xFF,0xE3,0xFF,0xE1,0xFF,0xF1,0xFF,0xF1,0xFF,
  0x3F,0xFF,0x30,0xFF,0x18,0xFF,0x18,0xFF,0x08,0xFF,0x08,0xFF,0x80,0xFF,0x84,0xFF,
  0x0F,0xFF,0x83,0xFF,0x40,0xFF,0x60,0xFF,0x30,0xFF,0x38,0xFF,0x1C,0xFF,0x1F,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0x3F,0xFF,0x1F,0xFF,0x0F,0xFF,0x07,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xF8,0xFF,0xF0,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xC0,0xFF,0x00,0xFF,0x03,0xFF,0x0F,0xFF,0x3F,0xFF,0xFF,0xFF,0xF0,0xFF,0xC1,0xFF,
  0x7E,0xFF,0xFE,0xFF,0xFE,0xFF,0xE7,0xFF,0xE7,0xFF,0xE3,0xFF,0xE3,0xFF,0xF3,0xFF,
  0x30,0xFF,0x30,0xFF,0x18,0xFF,0x18,0xFF,0x1E,0xFF,0x0F,0xFF,0x0F,0xFF,0x8F,0xFF,
  0xF1,0xFF,0xF9,0xFF,0xF9,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xF9,0xFF,0xF9,0xFF,0xF9,0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xC2,0xFF,0xC2,0xFF,0xE3,0xFF,0xF1,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x1F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x87,0xFF,0xCF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x03,0xFF,0xC1,0xFF,0xE1,0xFF,0xF0,0xFF,0xF8,0xFF,0xFC,0xFF,0xFE,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0x7F,0xFF,0x7F,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFE,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x07,0xFF,0x1F,0xFF,0x7C,0xFF,0xF8,0xFF,0xF0,0xFF,0xF0,0xFF,0xF0,0xFF,0xF8,0xFF,
  0xF1,0xFF,0xF1,0xFF,0xF1,0xFF,0xF8,0xFF,0xF8,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x8F,0xFF,0x8F,0xFF,0xCF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
};
