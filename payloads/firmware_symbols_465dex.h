// Defines for PS3 4.65
#define strncmp                     0x5116C //done
#define strcpy                      0x511C0 //done
#define strlen                      0x511E8 //done
#define alloc                       0x6816C //done
#define free                        0x685A8 //done

#define memory_patch_func           0x2BB038  //done
//#define pathdup_from_user           0x1b1dc4
#define open_mapping_table_ext      0x7fff00                                                                                                                                           

/* Common Symbols PL3 */

#define memcpy                      0x82980 //done
#define memset                      0x51014 //done

#define perm_patch_func             0x3560
#define perm_var_offset             -0x7FF8

#define BASE        0x3D90
#define BASE2        (0x3D90+0x400)  // 0x4290  // pincha en -> 1B5070 (syscall 838)

