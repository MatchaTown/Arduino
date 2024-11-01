// Define the BongoCatBitMap

const unsigned char bongoCat_idle [1024] PROGMEM = {
// '00001', 128x64px
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x99, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x99, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7e, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7e, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7f, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7f, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x81, 0xff, 0xff, 0x80, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x81, 0xff, 0xff, 0x80, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0x81, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xf8, 0x7e, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0x81, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xf8, 0x7e, 0x7f, 0xff, 
0xff, 0xff, 0xfe, 0x7e, 0x67, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xfe, 0x7e, 0x67, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xf9, 0x9f, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xf9, 0x9f, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xe7, 0xf9, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xe7, 0xf9, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xe7, 0xff, 0xe7, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xe1, 0x87, 0xe7, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xe1, 0x87, 0xe7, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xe7, 0x87, 0xe7, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0x1f, 0xff, 0xe7, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0x1f, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0x3c, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xe0, 0x1f, 0xe7, 0xff, 0xff, 0xff, 0xff, 0x3c, 0x3f, 0xfe, 0x1f, 0xe0, 0x7f, 0xf9, 0xff, 0xff, 
0xe0, 0x1f, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xcf, 0x3e, 0x1f, 0xe0, 0x7f, 0xf9, 0xff, 0xff, 
0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xcf, 0x3e, 0x1f, 0x9f, 0x9f, 0xf9, 0xff, 0xff, 
0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xfe, 0x1f, 0x9f, 0x9f, 0xf9, 0xff, 0xff, 
0xff, 0xff, 0xe0, 0x01, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xfe, 0x67, 0xe7, 0xe7, 0xff, 0xff, 
0xff, 0xff, 0xe0, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x67, 0xe7, 0xe7, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xfe, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xe7, 0xf9, 0xff, 0xff, 
0xff, 0xff, 0x8f, 0xfe, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xfe, 0x67, 0xf9, 0xff, 0xff, 
0xff, 0xff, 0x00, 0xff, 0xfe, 0x01, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x42, 0x79, 0xf9, 0xff, 0xff, 
0xff, 0xfe, 0x20, 0x0f, 0xfe, 0x01, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x43, 0xf9, 0xf9, 0xff, 0xff, 
0xff, 0xfc, 0x7e, 0x00, 0xff, 0xfe, 0x01, 0xff, 0xff, 0xff, 0xf9, 0xc3, 0xf9, 0xfe, 0x7f, 0xff, 
0xff, 0xf8, 0xff, 0xe0, 0x0f, 0xfe, 0x01, 0xff, 0xff, 0xff, 0xf9, 0xc3, 0xf9, 0xfe, 0x7f, 0xff, 
0xff, 0xf1, 0xff, 0xfe, 0x00, 0xff, 0xfe, 0x01, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xe3, 0xff, 0xff, 0xe0, 0x0f, 0xfe, 0x01, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xc7, 0xff, 0xff, 0xfe, 0x00, 0xff, 0xfe, 0x01, 0xff, 0xf9, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xff, 0x8f, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xfe, 0x01, 0xff, 0xf9, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xff, 0x1f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0xff, 0xfe, 0x01, 0xf9, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xfe, 0x01, 0xf9, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0xff, 0xfe, 0x01, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xe0, 0x0f, 0xfe, 0x01, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xfe, 0x00, 0xff, 0xfe, 0x01, 0xff, 0xff, 0xe7, 0xff, 
0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xe0, 0x0f, 0xfe, 0x01, 0xff, 0xff, 0xe7, 0xff, 
0xc7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xfe, 0x00, 0xff, 0xfe, 0x01, 0xff, 0xe7, 0xff, 
0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff, 0xff, 0xe0, 0x0f, 0xfe, 0x01, 0xff, 0xe7, 0xff, 
0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xfe, 0x00, 0xff, 0xfe, 0x01, 0xe7, 0xff, 
0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xfe, 0x01, 0xe7, 0xff, 
0x7f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0xff, 0xfe, 0x00, 0x7f, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xfe, 0x00, 0x7f, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xff, 0xff, 0x80, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xff, 0xff, 0x80, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x88, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1c, 0xff, 0xff, 0xff};

const unsigned char bongoCat_rightBtn [1024] PROGMEM = {
// '00002', 128x64px
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x99, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x99, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7e, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7e, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7f, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7f, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x81, 0xff, 0xff, 0x80, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x81, 0xff, 0xff, 0x80, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0x81, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xf8, 0x7e, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0x81, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xf8, 0x7e, 0x7f, 0xff, 
0xff, 0xff, 0xfe, 0x7e, 0x67, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xfe, 0x7e, 0x67, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xf9, 0x9f, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xf9, 0x9f, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xe7, 0xf9, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xe7, 0xf9, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xe7, 0xff, 0xe7, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xe1, 0x87, 0xe7, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xe1, 0x87, 0xe7, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xe7, 0x87, 0xe7, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0x1f, 0xff, 0xe7, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0x1f, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0x3c, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xe0, 0x1f, 0xe7, 0xff, 0xff, 0xff, 0xff, 0x3c, 0x3f, 0xfe, 0x1f, 0xff, 0xff, 0xf9, 0xff, 0xff, 
0xe0, 0x1f, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xcf, 0x3e, 0x1f, 0xff, 0xff, 0xf9, 0xff, 0xff, 
0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xcf, 0x3e, 0x1f, 0xff, 0xff, 0xf9, 0xff, 0xff, 
0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xfe, 0x1f, 0xff, 0xff, 0xf9, 0xff, 0xff, 
0xff, 0xff, 0xe0, 0x01, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 
0xff, 0xff, 0xe0, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xfe, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xf9, 0xff, 0xff, 
0xff, 0xff, 0x8f, 0xfe, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xf9, 0xff, 0xff, 
0xff, 0xff, 0x00, 0xff, 0xfe, 0x01, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xf9, 0xff, 0xff, 
0xff, 0xfe, 0x20, 0x0f, 0xfe, 0x01, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xf9, 0xff, 0xff, 
0xff, 0xfc, 0x7e, 0x00, 0xff, 0xfe, 0x01, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xf8, 0xff, 0xe0, 0x0f, 0xfe, 0x01, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xf1, 0xff, 0xfe, 0x00, 0xff, 0xfe, 0x01, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xe3, 0xff, 0xff, 0xe0, 0x0f, 0xfe, 0x01, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xc7, 0xff, 0xff, 0xfe, 0x00, 0xff, 0xfe, 0x01, 0xff, 0x9f, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xff, 0x8f, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xfe, 0x01, 0xff, 0x9f, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xff, 0x1f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x07, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x61, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 
0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x01, 0xff, 0xff, 0xf0, 0x7f, 0xe7, 0xff, 
0xc7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xf0, 0x1f, 0xe7, 0xff, 
0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x1f, 0xff, 0xff, 0x9f, 0x83, 0xe7, 0xff, 
0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x1f, 0xff, 0xff, 0x9f, 0xc3, 0xe7, 0xff, 
0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xfe, 0x7f, 0xf8, 0xe7, 0xff, 
0x7f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xfe, 0x7f, 0xf8, 0x00, 0x7f, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf0, 0x3f, 0xfe, 0x00, 0x7f, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf0, 0x03, 0xff, 0xff, 0x80, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x01, 0xff, 0xff, 0x80, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x01, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0xff, 0xff, 0xff};

const unsigned char bongoCat_leftBtn [1024] PROGMEM = {
// '00003', 128x64px
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x99, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x99, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7e, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7e, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7f, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7f, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x81, 0xff, 0xff, 0x80, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x81, 0xff, 0xff, 0x80, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xf8, 0x7e, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xf8, 0x7e, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0x1f, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0x1f, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xff, 0x3c, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xe0, 0x0f, 0xff, 0xcf, 0xff, 0xff, 0xff, 0x3c, 0x3f, 0xfe, 0x1f, 0xe0, 0x7f, 0xf9, 0xff, 0xff, 
0xe0, 0x0f, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xc3, 0xcf, 0x3e, 0x1f, 0xe0, 0x7f, 0xf9, 0xff, 0xff, 
0xff, 0xf0, 0x07, 0x1f, 0xff, 0xff, 0xff, 0xc3, 0xcf, 0x3e, 0x1f, 0x9f, 0x9f, 0xf9, 0xff, 0xff, 
0xff, 0xf0, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xfe, 0x1f, 0x9f, 0x9f, 0xf9, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xfe, 0x67, 0xe7, 0xe7, 0xff, 0xff, 
0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xfe, 0x67, 0xe7, 0xe7, 0xff, 0xff, 
0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xe7, 0xf9, 0xff, 0xff, 
0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xf9, 0xfe, 0x67, 0xf9, 0xff, 0xff, 
0xff, 0xff, 0x01, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xf8, 0x42, 0x79, 0xf9, 0xff, 0xff, 
0xff, 0xfe, 0x03, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xf8, 0x43, 0xf9, 0xf9, 0xff, 0xff, 
0xff, 0xfc, 0x03, 0xff, 0xff, 0xf8, 0x41, 0xff, 0xff, 0xff, 0xf9, 0xc3, 0xf9, 0xfe, 0x7f, 0xff, 
0xff, 0xf8, 0x07, 0xff, 0xff, 0xf8, 0xc1, 0xff, 0xff, 0xff, 0xf9, 0xc3, 0xf9, 0xfe, 0x7f, 0xff, 
0xff, 0xf0, 0x0f, 0xff, 0xff, 0xf9, 0xfe, 0x01, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xe0, 0x0f, 0xff, 0xff, 0xe3, 0xfe, 0x01, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xc0, 0x0f, 0xff, 0xff, 0xe0, 0xff, 0xfe, 0x01, 0xff, 0xf9, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xff, 0x80, 0x1f, 0xff, 0xff, 0xc0, 0x0f, 0xfe, 0x01, 0xff, 0xf9, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xff, 0x00, 0x1f, 0xff, 0xff, 0x80, 0x00, 0xff, 0xfe, 0x01, 0xf9, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xfe, 0x00, 0x1f, 0xff, 0xff, 0x00, 0x00, 0x0f, 0xfe, 0x01, 0xf9, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xfc, 0x00, 0x1f, 0xff, 0xfe, 0x00, 0x00, 0x00, 0xff, 0xfe, 0x01, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xf8, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x01, 0xe0, 0x0f, 0xfe, 0x01, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xf0, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x03, 0xfe, 0x00, 0xff, 0xfe, 0x01, 0xff, 0xff, 0xe7, 0xff, 
0xe0, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x0f, 0xfe, 0x01, 0xff, 0xff, 0xe7, 0xff, 
0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xfe, 0x00, 0xff, 0xfe, 0x01, 0xff, 0xe7, 0xff, 
0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xe0, 0x0f, 0xfe, 0x01, 0xff, 0xe7, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xfe, 0x00, 0xff, 0xfe, 0x01, 0xe7, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xfe, 0x01, 0xe7, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0xff, 0xfe, 0x00, 0x7f, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xfe, 0x00, 0x7f, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xff, 0xff, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xff, 0xff, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x88, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1c, 0xff, 0xff, 0xff};

const unsigned char bongoCat_bothBtn [1024] PROGMEM  = {
// '00004', 128x64px
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x99, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x99, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7e, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7e, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7f, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7f, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x81, 0xff, 0xff, 0x80, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x81, 0xff, 0xff, 0x80, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xf8, 0x7e, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xf8, 0x7e, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xe3, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xe3, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0x1f, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0x1f, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0x3c, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xe0, 0x1f, 0xff, 0x1f, 0xff, 0xff, 0xff, 0x3c, 0x3f, 0xfe, 0x1f, 0xff, 0xff, 0xf9, 0xff, 0xff, 
0xe0, 0x1f, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xc3, 0xcf, 0x3e, 0x1f, 0xff, 0xff, 0xf9, 0xff, 0xff, 
0xff, 0xe0, 0x07, 0x3f, 0xff, 0xff, 0xff, 0xc3, 0xcf, 0x3e, 0x1f, 0xff, 0xff, 0xf9, 0xff, 0xff, 
0xff, 0xe0, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xfe, 0x1f, 0xff, 0xff, 0xf9, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 
0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 
0xff, 0xff, 0xc8, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xf9, 0xff, 0xff, 
0xff, 0xff, 0x81, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xf9, 0xff, 0xff, 
0xff, 0xff, 0x03, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xf9, 0xff, 0xff, 
0xff, 0xfe, 0x03, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xf9, 0xff, 0xff, 
0xff, 0xfc, 0x07, 0xff, 0xff, 0xf8, 0x01, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xf8, 0x0f, 0xff, 0xff, 0xf1, 0x81, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xf0, 0x0f, 0xff, 0xff, 0xf3, 0xfe, 0x01, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xe0, 0x1f, 0xff, 0xff, 0xe1, 0xfe, 0x01, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
0xff, 0xc0, 0x3f, 0xff, 0xff, 0xc0, 0x3f, 0xfe, 0x01, 0xff, 0x9f, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xff, 0x80, 0x3f, 0xff, 0xff, 0x00, 0x0f, 0xfe, 0x01, 0xff, 0x9f, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xff, 0x00, 0x3f, 0xff, 0xff, 0x00, 0x00, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xfe, 0x00, 0x3f, 0xff, 0xfe, 0x00, 0x00, 0x0f, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xfc, 0x00, 0x3f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xf8, 0x00, 0x1f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x07, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0x9f, 0xff, 
0xf0, 0x00, 0x1f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x61, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 
0xe0, 0x00, 0x03, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xf0, 0x7f, 0xe7, 0xff, 
0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xf0, 0x1f, 0xe7, 0xff, 
0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0x9f, 0x83, 0xe7, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0x9f, 0xc3, 0xe7, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xfe, 0x7f, 0xf8, 0xe7, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xfe, 0x7f, 0xf8, 0x00, 0x7f, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf0, 0x3f, 0xfe, 0x00, 0x7f, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf0, 0x03, 0xff, 0xff, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x01, 0xff, 0xff, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x01, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0xff, 0xff, 0xff};
