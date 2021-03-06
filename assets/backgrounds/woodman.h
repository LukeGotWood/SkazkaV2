// ///////////////////////
// //                   //
// //  File Attributes  //
// //                   //
// ///////////////////////

// Filename: woodman.png
// Pixel Width: 160px
// Pixel Height: 144px

// /////////////////
// //             //
// //  Constants  //
// //             //
// /////////////////

const int woodman_tile_map_size = 0x0168;
const int woodman_tile_map_width = 0x14;
const int woodman_tile_map_height = 0x12;

const int woodman_tile_data_size = 0x0B50;
const int woodman_tile_count = 0xB5;

// ////////////////
// //            //
// //  Map Data  //
// //            //
// ////////////////

const unsigned char woodman_map_data[] ={
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x03,0x04,0x05,
  0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x08,
  0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x0F,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,0x1F,0x20,0x21,0x22,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x23,0x24,0x25,0x26,0x27,0x28,0x29,
  0x2A,0x2B,0x2C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2D,0x2E,0x2F,0x30,
  0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x38,0x39,0x3A,0x3B,0x3C,0x3D,0x3B,0x3B,0x3B,0x3E,0x3F,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x40,0x41,0x42,0x3B,0x43,0x44,0x45,0x3B,0x46,0x47,0x48,0x00,
  0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4A,0x4B,0x4C,0x4D,0x4E,0x4F,0x50,
  0x51,0x52,0x53,0x00,0x54,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x56,0x57,0x58,0x59,
  0x5A,0x5B,0x5C,0x5D,0x5E,0x5F,0x60,0x61,0x62,0x63,0x64,0x00,0x00,0x00,0x00,0x00,
  0x65,0x66,0x67,0x68,0x69,0x0B,0x6A,0x6B,0x6C,0x6D,0x6E,0x6F,0x0B,0x70,0x71,0x72,
  0x00,0x00,0x00,0x00,0x73,0x74,0x75,0x76,0x77,0x78,0x79,0x3B,0x7A,0x7B,0x7C,0x0B,
  0x0B,0x7D,0x3B,0x7E,0x00,0x00,0x00,0x00,0x7F,0x80,0x81,0x82,0x3B,0x83,0x3B,0x3B,
  0x84,0x85,0x86,0x0B,0x87,0x88,0x3B,0x3B,0x00,0x00,0x89,0x8A,0x8B,0x0B,0x0B,0x8C,
  0x3B,0x8D,0x3B,0x3B,0x8E,0x8F,0x0B,0x90,0x91,0x3B,0x3B,0x3B,0x92,0x93,0x94,0x95,
  0x0B,0x0B,0x0B,0x96,0x97,0x3B,0x3B,0x98,0x99,0x9A,0x9B,0x9C,0x3B,0x3B,0x3B,0x3B,
  0x9D,0x9E,0x0B,0x9F,0xA0,0xA1,0xA2,0xA3,0xA4,0x3B,0x3B,0xA5,0x0B,0x85,0xA6,0xA7,
  0xA8,0xA9,0x3B,0x3B,0xAA,0x0B,0x0B,0x0B,0x0B,0xAB,0x0B,0xAC,0xAD,0xAE,0xAF,0xB0,
  0x0B,0xB1,0xB2,0x0B,0x0B,0xB3,0xB4,0x3B
};

// /////////////////
// //             //
// //  Tile Data  //
// //             //
// /////////////////

const unsigned char woodman_tile_data[] ={
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x0E,0x0F,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x7F,0xF0,0xFF,0x00,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x1C,0xE7,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xF0,0x1C,0xFC,0x03,0xFF,0x00,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xE0,0xE0,
  0x00,0x00,0x00,0x00,0x01,0x01,0x0B,0x0B,0x0C,0x0F,0x38,0x3F,0x30,0x3F,0x60,0x7F,
  0x38,0x3F,0x60,0x7F,0x80,0xFF,0x00,0xFF,0x01,0xFF,0x03,0xFF,0x0E,0xFF,0x0D,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x60,0xFF,0xF0,0xFF,0x70,0xFF,0xFE,0xFF,0xFF,0x8F,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x30,0xFF,0x0C,0xFF,0x03,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x06,0xFF,
  0x30,0xF0,0x0C,0xFC,0x03,0xFF,0x81,0xFF,0x40,0xFF,0x30,0xFF,0x08,0xFF,0x04,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x60,0xE0,0x30,0xF0,0x10,0xF0,0x08,0xF8,
  0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x07,0x07,0x0F,0x0F,
  0xC0,0xFF,0x80,0xFF,0xE0,0xFF,0x40,0xFF,0xB1,0xFF,0xB0,0xFF,0xA1,0xFF,0xC5,0xFF,
  0x19,0xFF,0x3F,0xFF,0x5F,0xFE,0x9F,0xFC,0x7F,0xF8,0xFF,0xF0,0xFF,0xE0,0x7F,0xC0,
  0xFF,0x83,0xFF,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xC1,0x3E,
  0xE2,0xFF,0xF9,0xFF,0xFE,0x1F,0xFD,0x03,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0xFF,0x80,0xFF,0x60,0xFF,0xF8,0xFF,0x7E,0xFF,0xDF,0x3F,0xF7,0x0F,0xFF,0x03,
  0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0xFF,0xE0,0xFF,0xF8,0xFF,
  0x03,0xFF,0x80,0xFF,0x40,0xFF,0x30,0xFF,0x08,0xFF,0x04,0xFF,0x03,0xFF,0x00,0xFF,
  0x1C,0xFC,0x8C,0xFC,0x8E,0xFE,0x66,0xFE,0x37,0xFF,0x1B,0xFF,0x0B,0xFF,0x85,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,
  0x0E,0x0F,0x0F,0x0F,0x0F,0x0F,0x1F,0x1F,0x1D,0x1F,0x1D,0x1F,0x1B,0x1F,0x3F,0x3F,
  0x8A,0xFF,0x95,0xFF,0xAB,0xFF,0xDE,0xFF,0x9C,0xFF,0xBD,0xFE,0x7B,0xFC,0x7B,0xFC,
  0xBF,0xC0,0x3F,0xC0,0x7F,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFC,0x03,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0x8F,0x70,0xBF,0x40,0x87,0x78,0x00,0xFF,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x1F,0xE0,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFC,0xFF,0xDB,0xFF,0xDD,0x7F,0xEF,0x3F,0xF7,0x1F,0xFB,0x0F,0xFD,0x0B,0xFE,0x05,
  0x02,0xFF,0x01,0xFF,0xC0,0xFF,0x60,0xFF,0xB6,0xFF,0xFA,0xFF,0xEB,0xFF,0xFD,0xFF,
  0x0D,0xFF,0x04,0xFF,0x84,0xFF,0x44,0xFF,0x46,0xFF,0x22,0xFF,0x12,0xFF,0x89,0xFF,
  0x80,0x80,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x60,0xE0,0x60,0xE0,0x60,0xE0,
  0x36,0x3F,0x34,0x3F,0x3C,0x3F,0x3D,0x3F,0x3B,0x3F,0x3B,0x3F,0x37,0x3F,0x7F,0x7F,
  0xD7,0xF8,0xEF,0xF0,0xEF,0xF0,0xCF,0xF0,0xEF,0xF1,0xDF,0xE0,0xDF,0xE0,0xDF,0xE0,
  0xFF,0x1F,0xFF,0x7F,0xFF,0xFF,0xF1,0xFF,0xCF,0xF0,0xFF,0x00,0xFF,0x00,0xFF,0xFF,
  0xFF,0xFE,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0x3F,0xFF,0xC1,0x3E,0xFF,0x00,0xFF,0xE1,
  0xFF,0x10,0xFF,0x11,0xFF,0x13,0xFF,0x1B,0xF9,0x0F,0xFC,0x03,0xFF,0x00,0xFF,0x80,
  0xFF,0xFF,0xFF,0xFF,0xFC,0xFF,0xF9,0xFE,0xE3,0xFC,0x0F,0xF0,0xFF,0x03,0xFF,0x1F,
  0xFF,0xFE,0xFF,0xC1,0x7F,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xF8,0xFF,0xFF,
  0x7C,0xFF,0xBE,0x7F,0xDF,0xBF,0xFF,0x7F,0xFF,0x0F,0xF7,0x0F,0xF9,0x07,0xFC,0x03,
  0xA9,0xFF,0xF9,0xFF,0x75,0xFF,0xFB,0xFF,0xFB,0xFF,0xFD,0xFF,0xFD,0xFF,0xFF,0xFF,
  0x60,0xE0,0x60,0xE0,0x60,0xE0,0x60,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xFC,0xEC,
  0x03,0x03,0x03,0x02,0x07,0x06,0x07,0x04,0x07,0x04,0x07,0x04,0x07,0x04,0x07,0x04,
  0xFF,0xFF,0xFF,0x3F,0xFE,0x3F,0xFE,0x3F,0xFE,0x3F,0xFE,0x3F,0xFC,0x3F,0x78,0xBF,
  0xDF,0xE1,0xDF,0xE1,0x9F,0xE1,0x9F,0xE1,0xFF,0xC0,0xFF,0xC0,0xFF,0xC0,0x7F,0xE0,
  0x9F,0x9F,0x0F,0x0F,0x0F,0x0F,0x80,0x80,0xFF,0xFF,0x00,0xFF,0xFE,0x01,0xFF,0x00,
  0x3F,0x30,0x1F,0x19,0x1F,0x19,0x7F,0x7D,0xDF,0xF9,0x07,0xF9,0x1F,0xE3,0xDF,0x22,
  0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xF1,0x31,0xE1,0x21,0xF0,0x70,0x9C,0x7C,0xC3,0x3F,0xE0,0x1F,0xFF,0x00,0xFF,0x00,
  0xF1,0xF1,0xE0,0xE0,0x00,0x00,0x01,0x01,0xFF,0xFF,0x0F,0xF0,0xFF,0x00,0xFF,0x00,
  0xFC,0x83,0xFE,0x81,0xFF,0x80,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x3F,0xFF,0x3F,0xFF,0x0F,0xFF,0x1F,0xFF,0x9F,0x7F,0x9D,0x7F,0x9F,0x7F,0xDF,0x3E,
  0xFE,0xF6,0xFE,0xE2,0xFE,0xC2,0xFE,0x82,0xFE,0x82,0xFE,0x02,0xEE,0x12,0xEC,0x14,
  0x07,0x04,0x07,0x06,0x03,0x02,0x03,0x02,0x03,0x02,0x03,0x02,0x03,0x02,0x03,0x03,
  0x78,0x9F,0x78,0x9F,0x3A,0xCF,0xBA,0x4F,0xAE,0x5F,0xAE,0x57,0x8E,0x77,0xDE,0x3F,
  0x7F,0xE0,0x3F,0xE0,0x7F,0xF0,0x3F,0xF0,0x3F,0xF0,0x1F,0xF8,0x1F,0xFC,0x1F,0xFC,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xDF,0x22,0xDF,0x22,0xFF,0x02,0xFD,0x02,0xFD,0x02,0xF9,0x06,0xFB,0x04,0xF3,0x0C,
  0xFF,0x00,0xAF,0x50,0x87,0x78,0xDF,0x20,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xF7,0x3E,0xE3,0x3E,0xE3,0x3E,0xE7,0x7E,0xC3,0x7E,0xC3,0x7E,0xC7,0xFE,0x87,0xFE,
  0xEC,0x14,0xCC,0x34,0x1E,0xE6,0x3C,0xCC,0x38,0xC8,0xF8,0x18,0xF0,0x50,0xF0,0xF0,
  0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xDE,0x3F,0xFF,0x97,0xFF,0xDF,0x7F,0x69,0x3F,0x21,0x1F,0x11,0x1F,0x1B,0x0F,0x0F,
  0x0F,0xFC,0x0F,0xFE,0x07,0xFE,0x07,0xFE,0x8F,0xFE,0x8F,0xFE,0x87,0xFF,0x87,0xFF,
  0xF3,0x0C,0xF3,0x0C,0xFF,0x1C,0xF7,0x0E,0xFB,0x07,0xFE,0x01,0xFC,0x03,0xF8,0x1F,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x01,0xFF,0x83,0xFE,0xFF,0x30,0xFF,0x00,0xFF,
  0xFF,0x00,0x8F,0x70,0xEF,0xF0,0xFF,0xC0,0xFF,0x80,0xFF,0xC0,0x7F,0xF0,0x1F,0xFC,
  0xFF,0x01,0xFF,0x01,0xFF,0x03,0xFF,0x03,0xFF,0x03,0xFE,0x07,0xFE,0x0F,0xFC,0x1F,
  0x87,0xFF,0x87,0xFE,0x87,0xFF,0x8F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,
  0xE0,0xA0,0xE0,0xE0,0xC0,0xC0,0x80,0x80,0x80,0x80,0x80,0x80,0xC0,0xC0,0xC0,0xC0,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x02,
  0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x7F,0x7F,0x7F,0x7F,
  0x87,0xFF,0x83,0xFF,0x83,0xFF,0xC1,0xFF,0xC1,0xFF,0xC0,0xFF,0xC0,0xFF,0xC0,0xFF,
  0xFF,0x80,0xFF,0x80,0xFF,0xC1,0xFF,0xE1,0xFF,0xF3,0xFF,0xFF,0x15,0xFF,0x03,0xFF,
  0xF0,0x3F,0xE0,0xFF,0x81,0xFF,0x07,0xFF,0xFF,0xFE,0xFF,0xFC,0xFF,0xC0,0xFF,0x00,
  0x00,0xFF,0x00,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0x38,0xFF,0x00,0xFF,0x00,0xFF,0x7F,
  0x07,0xFF,0x01,0xFF,0x00,0xFF,0x80,0xFF,0xE0,0xFF,0xFF,0x3F,0xFF,0x01,0xFF,0x00,
  0xFF,0x00,0xFF,0xC0,0x7F,0xF0,0x1F,0xFC,0x0F,0xFF,0x07,0xFF,0xC0,0xFF,0xE0,0x7F,
  0xFC,0x1F,0xF8,0x3F,0xF8,0x7F,0xF0,0x7F,0xE0,0xFF,0xA0,0xFF,0x00,0xFF,0x00,0xFF,
  0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x1F,0xFF,0x1A,0xFF,0x3A,0xFF,
  0xC0,0xC0,0x80,0x80,0x80,0x80,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,
  0x03,0x03,0x05,0x05,0x08,0x0C,0x18,0x1F,0x10,0x1F,0x20,0x3F,0x20,0x3F,0x40,0x7F,
  0x00,0x00,0x00,0x80,0x80,0x80,0xE0,0xE0,0x60,0x60,0x30,0x30,0x18,0x98,0x1C,0x9C,
  0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x03,0x03,0x02,0x03,
  0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xCF,0xFF,0xC6,0xFF,0xC4,0xFF,0x84,0xFF,0x88,0xFF,
  0xC0,0xFF,0xF0,0xFF,0xF0,0xFF,0xF0,0xFF,0xF0,0xFF,0xBC,0xFF,0xBC,0xFF,0x7C,0xFF,
  0x03,0xFE,0x07,0xFE,0x07,0xFE,0x03,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0x07,0xFF,0x1C,0xFF,0x00,0xFF,0x80,0xFF,0x80,0xFF,0xC0,0x7F,0xF0,0x3F,0xF0,
  0xFF,0x81,0xFF,0x00,0xC3,0x3C,0xFF,0x00,0xFF,0x1C,0xF3,0x3F,0xE1,0x7F,0xC0,0x7F,
  0xFF,0xF0,0xFF,0x18,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0xFF,0x83,
  0xE0,0x3F,0xF0,0x1F,0xF8,0x1F,0xF8,0x1F,0xF0,0x1F,0xE0,0x7F,0xC0,0xFF,0x80,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFF,0x03,0xFF,0x03,0xFF,0x07,0xFF,
  0x32,0xFF,0x62,0xFF,0x62,0xFF,0xE0,0xFF,0xE0,0xFF,0xE0,0xFF,0xE0,0xFF,0xE0,0xFF,
  0xC0,0xC0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0x20,0xE0,0x20,0xE0,0x30,0xF0,0x10,0xF0,
  0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x03,0x03,0x02,0x03,0x04,0x07,0x0C,0x0F,
  0x40,0x7F,0x80,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x0E,0xCE,0x06,0xE6,0x03,0xFB,0x01,0xFD,0x00,0xFC,0x00,0xFE,0x00,0xFF,0x00,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xC0,0xC0,0xE0,0xE0,0x70,0xF0,0x38,0xF8,
  0x06,0x07,0x06,0x07,0x04,0x07,0x04,0x07,0x04,0x07,0x04,0x07,0x04,0x07,0x04,0x07,
  0x88,0xFF,0x08,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x7F,0xFF,0x1F,0xFF,0x1F,0xFF,0x1F,0xFF,0x1F,0xFF,0x1F,0xFF,0x3B,0xFF,0x33,0xFF,
  0x00,0xFF,0x00,0xFF,0x80,0xFF,0xC0,0xFF,0x60,0xFF,0x3C,0xFF,0x3E,0xC7,0x3F,0xC3,
  0x1F,0xFA,0x0E,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xC0,0xFF,
  0x7E,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x07,0xFF,0x1F,0xFC,0x7F,0xF0,0xFF,0xC0,
  0x0F,0xFF,0x3F,0xFF,0x7F,0xFF,0xFF,0x9F,0xF9,0x1F,0xF8,0x1F,0xF8,0x1F,0xF8,0x1F,
  0xE0,0xFF,0xE0,0xFF,0xC0,0xFF,0xC0,0xFF,0xC0,0xFF,0xC0,0xFF,0x70,0xFF,0x18,0xFF,
  0x10,0xF0,0x10,0xF0,0x10,0xF0,0x10,0xF0,0x10,0xF0,0x18,0xF8,0x08,0xF8,0x09,0xF9,
  0x08,0x0F,0x10,0x1F,0x10,0x1F,0x20,0x3F,0x60,0x7F,0x40,0x7F,0x80,0xFF,0x80,0xFF,
  0x00,0xFF,0x00,0xFF,0x03,0xFC,0x07,0xF8,0x07,0xF8,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,
  0x1C,0xFC,0x1E,0xEE,0xFF,0x03,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x80,0x80,0xC0,0xC0,0xE0,0xE0,0xF0,0x30,0xF8,0x18,0xFE,0x06,
  0x04,0x07,0x0C,0x0F,0x08,0x0F,0x08,0x0F,0x08,0x0F,0x08,0x0F,0x08,0x0F,0x08,0x0F,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFF,0x03,0xFF,0x06,0xFF,0x0C,0xFF,0x18,0xFF,
  0x23,0xFF,0x43,0xFF,0xC3,0xFF,0x83,0xFF,0x03,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,
  0x3F,0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,0xC0,
  0xFA,0x7F,0xFF,0x1F,0xFF,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0xFF,0x00,0xFF,0x77,0xFF,0xFF,0xDC,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x07,0xFF,0xFF,0xFC,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xF8,0x1F,0xF0,0x1F,0xF0,0x1F,0xF0,0x1F,0xF0,0x1F,0xF0,0x1F,0xF0,0x1F,0xF0,0x1F,
  0x0E,0xFF,0x03,0xFF,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x09,0xF9,0x0B,0xFF,0x8A,0xFB,0xEE,0xFF,0x3E,0xFF,0x04,0xFF,0x08,0xFF,0x08,0xFF,
  0x3F,0xC0,0x3F,0xC0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,
  0xFF,0x02,0xFF,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x08,0x0F,0x18,0x1F,0x10,0x1F,0x10,0x1F,0x11,0x1F,0x13,0x1F,0x1E,0x1F,0x7C,0x7F,
  0x30,0xFF,0x60,0xFF,0xC0,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x01,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x00,0xFF,0x00,0xFF,
  0x3F,0xC0,0xBF,0xC0,0xBF,0xC0,0x9F,0xE0,0x9F,0xE0,0x8F,0xF0,0x8F,0xF0,0x8F,0xF0,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xF3,0x8F,0x7F,0xFE,
  0xF0,0x1F,0xF0,0x3F,0xE0,0x3F,0xE0,0x3F,0xE0,0x3F,0xE0,0x3F,0xE0,0x3F,0xE0,0x3F,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFF,
  0x10,0xFF,0x10,0xFF,0x20,0xFF,0x60,0xFF,0x40,0xFF,0xC0,0xFF,0x80,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x1E,0xE1,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x07,0xF8,
  0x0F,0xF0,0x07,0xF8,0x03,0xFC,0x03,0xFC,0x81,0x7E,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x07,0x07,0x1F,0x1F,0x3C,0x3F,
  0x01,0x01,0x07,0x07,0x1F,0x1F,0xFE,0xFF,0xF0,0xFF,0x80,0xFF,0x00,0xFF,0x01,0xFF,
  0xF4,0xFF,0xF8,0xFF,0x98,0xFF,0x30,0xFF,0x20,0xFF,0x40,0xFF,0x80,0xFF,0x00,0xFF,
  0x8F,0xF0,0xC7,0xF8,0xC7,0xF8,0xC7,0xF8,0xC7,0xF8,0xC7,0xF8,0x47,0xF8,0x43,0xFC,
  0x81,0x7E,0xC3,0x3C,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xE0,0x7F,0xC0,0x7F,0xC0,0x7F,0xC0,0x7F,0xC0,0x7F,0xC0,0x7F,0xC0,0xFF,0xC0,0xFF,
  0x01,0xFF,0x02,0xFF,0x06,0xFF,0x04,0xFF,0x08,0xFF,0x18,0xFF,0x10,0xFF,0x20,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x07,0xF8,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x0F,0xF0,
  0x07,0xF8,0x07,0xF8,0x0F,0xF0,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x03,
  0x00,0x00,0x03,0x03,0x07,0x07,0x1E,0x1F,0x38,0x3F,0x70,0x7F,0xE0,0xFF,0xC0,0xFF,
  0x70,0x7F,0xC0,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x03,0xFF,0x02,0xFF,0x04,0xFF,0x0C,0xFF,0x18,0xFF,0x10,0xFF,0x20,0xFF,0x60,0xFF,
  0x43,0xFC,0x63,0xFC,0x63,0xFC,0x23,0xFC,0x33,0xFC,0x31,0xFE,0x10,0xFF,0x18,0xFF,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x80,0x7F,0x80,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFE,0x03,
  0x80,0xFF,0x80,0xFF,0x80,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x3C,0xFF,0x1F,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0xF8,0xFF,0x0F,0xFF,0x01,0xFF,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x0F,0xF0,0x07,0xF8,0xE7,0x18,0xFF,0xC0,0xFF,0xE0,0x3F,0xF8,0x0F,0xFC,0x07,0xFE,
  0x07,0x07,0x0F,0x0F,0x1F,0x1F,0x3E,0x3F,0x7E,0x7F,0xFC,0xFF,0xFC,0xFF,0xF8,0xFF,
  0x80,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x40,0xFF,0x61,0xFF,0x7F,0xFF,0x7F,0xFF,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0x88,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x80,0xFF,0xF0,0xFF,0xFF,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,
  0x00,0xFF,0x00,0xFF,0x20,0xFF,0xE0,0xFF,0xC0,0xFF,0xC0,0xFF,0x80,0xFF,0x00,0xFF,
  0x18,0xFF,0x08,0xFF,0x0C,0xFF,0x0E,0xFF,0x06,0xFF,0x07,0xFF,0x07,0xFF,0x07,0xFF,
  0x3F,0xC0,0x3F,0xC0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x0F,0xF0,0x07,0xF8,0x83,0xFC,
  0xFE,0x03,0xFE,0x07,0xFC,0x07,0xFC,0x07,0xFC,0x0F,0xFC,0x0F,0xFC,0x0F,0xFC,0x1F,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFF,0x0F,0xFF,0x3E,0xFF,0xFC,0xFF,
  0x03,0xFF,0x00,0xFF,0x1C,0xFF,0x78,0xFF,0xE0,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0x80,0xFF,0x80,0xFF,0xE0,0x3F,0xF0,0x1F,0xFC,0x07,0xFE,0x07,0xFF,0x01,0xFF,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xC0,
  0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0xE8,0xFF,
  0x1E,0xFF,0x1E,0xFF,0x3C,0xFF,0x3C,0xFF,0x78,0xFF,0x78,0xFF,0xF0,0xFF,0xF0,0xFF,
  0x07,0xFF,0x07,0xFF,0x07,0xFF,0x07,0xFF,0x03,0xFF,0x03,0xFF,0x03,0xFF,0x03,0xFF,
  0xE3,0xFC,0xF1,0xFE,0xF8,0xFF,0xFE,0x7F,0xFF,0x0F,0xFF,0x80,0xFF,0x80,0xBF,0x80,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0x1F,0xE0,0xC2,0xFD,0xFE,0x7F,0xFF,0x03,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xC1,0x3E,0x1F,0xEF,0xFF,0xF9,0xFF,0x01,
  0xFC,0x1F,0xFC,0x3F,0xFC,0x3F,0xFC,0x7F,0xFC,0xFF,0xFC,0xFF,0xFE,0xFF,0xFF,0xFF,
  0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFC,0xFF,0xFC,0xFF,0x7C,0xFF,0x3C,0xFF,0x1C,0xFF,0x0E,0xFF,0x0E,0xFF,0x07,0xFF,
  0x7F,0xE0,0x3F,0xF0,0x1F,0xF8,0x0F,0xF8,0x07,0xFE,0x03,0xFF,0x01,0xFF,0x10,0xFF,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0xFF,0xE0
};
