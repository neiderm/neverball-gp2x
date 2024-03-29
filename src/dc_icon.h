static const unsigned short vmu_savestate_icon_pal[16] = {
	0xFFFF, 0xFEEE, 0xFDDD, 0xFBCB, 0xFAAA, 0xF888, 0xF777, 0xFABA, 0xFCCC, 0xF222, 0xF222, 0xF444, 0xF666, 0xF555, 0xF343, 0xF000, 
};

static const unsigned char vmu_savestate_icon_data[512] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x11, 0x11, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x21, 0x43, 0x54, 0x65, 0x56, 0x87, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x81, 0x64, 0x56, 0x74, 0x96, 0x99, 0xBA, 0x76, 0x12, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x10, 0x63, 0x76, 0x28, 0x12, 0x58, 0xB6, 0x99, 0xB9, 0x35, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x42, 0x4C, 0x28, 0x11, 0x11, 0x72, 0x77, 0xD4, 0x99, 0xCA, 0x17, 0x00, 0x00, 0x00, 
  0x00, 0x10, 0x64, 0x87, 0x12, 0x11, 0x11, 0x48, 0x44, 0x44, 0x9C, 0x99, 0x3D, 0x01, 0x00, 0x00, 
  0x00, 0x71, 0x7C, 0x88, 0x12, 0x11, 0x11, 0x58, 0x55, 0x55, 0xE5, 0x99, 0xC9, 0x13, 0x00, 0x00, 
  0x00, 0x68, 0x84, 0x88, 0x22, 0x21, 0x22, 0x63, 0x66, 0x66, 0xD6, 0x99, 0xA9, 0x86, 0x01, 0x00, 
  0x10, 0x64, 0x83, 0x88, 0x22, 0x22, 0x22, 0xC3, 0xCC, 0xCC, 0xEC, 0x99, 0x99, 0x7B, 0x01, 0x00, 
  0x80, 0x76, 0x88, 0x88, 0x28, 0x22, 0x22, 0xD7, 0xDD, 0xDD, 0x9B, 0x99, 0x99, 0x69, 0x18, 0x00, 
  0x71, 0x36, 0x88, 0x73, 0x77, 0x77, 0x47, 0x45, 0x55, 0xC6, 0x9E, 0x99, 0x99, 0xD9, 0x27, 0x01, 
  0x52, 0x35, 0x67, 0xAB, 0x99, 0xCE, 0xBC, 0x86, 0x88, 0x38, 0x54, 0xED, 0x99, 0xE9, 0x24, 0x01, 
  0x62, 0xD5, 0x99, 0x99, 0x99, 0xE9, 0x9E, 0x8D, 0x88, 0x73, 0x47, 0x65, 0xED, 0xA9, 0x85, 0x01, 
  0xC8, 0x9A, 0x99, 0x99, 0x99, 0x99, 0x99, 0x3B, 0x88, 0x73, 0x54, 0xC6, 0xBD, 0xAA, 0x36, 0x12, 
  0xD8, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x3B, 0x38, 0x73, 0x54, 0xC6, 0xBD, 0xAA, 0x3C, 0x12, 
  0xD8, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x8B, 0x38, 0x77, 0x54, 0xC6, 0xED, 0xAA, 0x3C, 0x12, 
  0xC8, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x8D, 0x33, 0x47, 0x65, 0xDC, 0xEB, 0xAA, 0x7C, 0x12, 
  0xC8, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x3D, 0x33, 0x47, 0x65, 0xDC, 0xAE, 0xEA, 0x36, 0x12, 
  0x68, 0x99, 0x99, 0x99, 0x99, 0xA9, 0xAA, 0x3D, 0x73, 0x47, 0x65, 0xBC, 0xAE, 0xEA, 0x36, 0x12, 
  0x42, 0x9E, 0x99, 0x99, 0x99, 0xAA, 0xEE, 0x3C, 0x73, 0x44, 0x65, 0xBD, 0xAE, 0xBA, 0x35, 0x12, 
  0x72, 0x9D, 0x99, 0x99, 0xA9, 0xEE, 0xBE, 0x3C, 0x77, 0x54, 0xC6, 0xBD, 0xAE, 0xDA, 0x34, 0x12, 
  0x32, 0xA6, 0x99, 0x99, 0xAA, 0xBE, 0xBB, 0x7C, 0x77, 0x54, 0xC6, 0xBD, 0xAE, 0x6E, 0x87, 0x11, 
  0x81, 0xD4, 0x99, 0x99, 0xEA, 0xBB, 0xDD, 0x76, 0x47, 0x54, 0xD6, 0xBD, 0xAE, 0x5D, 0x87, 0x01, 
  0x21, 0x53, 0x9B, 0xA9, 0xEE, 0xDB, 0xCD, 0x76, 0x47, 0x65, 0xDC, 0xBD, 0xBA, 0x76, 0x23, 0x01, 
  0x11, 0x78, 0xE6, 0xA9, 0xBE, 0xDB, 0x6C, 0x75, 0x47, 0x65, 0xDC, 0xED, 0x6B, 0x74, 0x18, 0x00, 
  0x10, 0x32, 0xC4, 0xAB, 0xBE, 0xDD, 0x6C, 0x75, 0x54, 0x65, 0xBC, 0xBE, 0x5C, 0x87, 0x12, 0x00, 
  0x00, 0x21, 0x43, 0xB6, 0xEE, 0xDB, 0x6C, 0x45, 0x54, 0xC6, 0xEB, 0x6D, 0x75, 0x23, 0x01, 0x00, 
  0x00, 0x11, 0x38, 0x57, 0xBC, 0xEE, 0xDB, 0xCD, 0xDC, 0xEB, 0xCD, 0x46, 0x37, 0x12, 0x01, 0x00, 
  0x00, 0x10, 0x81, 0x73, 0x54, 0xCC, 0xDD, 0xDD, 0xDD, 0xCC, 0x56, 0x74, 0x23, 0x11, 0x00, 0x00, 
  0x00, 0x00, 0x11, 0x82, 0x77, 0x54, 0x65, 0x66, 0x56, 0x55, 0x74, 0x83, 0x12, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x10, 0x21, 0x38, 0x73, 0x47, 0x44, 0x44, 0x77, 0x33, 0x28, 0x11, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x10, 0x21, 0x88, 0x33, 0x33, 0x33, 0x88, 0x28, 0x11, 0x00, 0x00, 0x00, 0x00, 
  };

