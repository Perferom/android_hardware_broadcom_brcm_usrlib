// This file was generated by the create_regs script
#define SLIM_BASE                                                0x7e210000
#define SLIM_APB_ID                                              0x736c696d
#define SLIM_CON                                                 HW_REGISTER_RW( 0x7e210000 ) 
   #define SLIM_CON_MASK                                         0xfffff0ff
   #define SLIM_CON_WIDTH                                        32
   #define SLIM_CON_RESET                                        0x000000c1
#define SLIM_CON2                                                HW_REGISTER_RW( 0x7e210004 ) 
   #define SLIM_CON2_MASK                                        0xff008001
   #define SLIM_CON2_WIDTH                                       32
   #define SLIM_CON2_RESET                                       0000000000
#define SLIM_STAT                                                HW_REGISTER_RW( 0x7e210008 ) 
   #define SLIM_STAT_MASK                                        0x03ffffff
   #define SLIM_STAT_WIDTH                                       26
   #define SLIM_STAT_RESET                                       0000000000
#define SLIM_FS                                                  HW_REGISTER_RW( 0x7e21000c ) 
   #define SLIM_FS_MASK                                          0x00003fff
   #define SLIM_FS_WIDTH                                         14
   #define SLIM_FS_RESET                                         0000000000
#define SLIM_EA0                                                 HW_REGISTER_RW( 0x7e210010 ) 
   #define SLIM_EA0_MASK                                         0xffff00ff
   #define SLIM_EA0_WIDTH                                        32
   #define SLIM_EA0_RESET                                        0000000000
#define SLIM_EA1                                                 HW_REGISTER_RW( 0x7e210014 ) 
   #define SLIM_EA1_MASK                                         0x8000ffff
   #define SLIM_EA1_WIDTH                                        32
   #define SLIM_EA1_RESET                                        0000000000
#define SLIM_DMA_MC_RX                                           HW_REGISTER_RW( 0x7e210020 ) 
   #define SLIM_DMA_MC_RX_MASK                                   0xffffffff
   #define SLIM_DMA_MC_RX_WIDTH                                  32
   #define SLIM_DMA_MC_RX_RESET                                  0000000000
#define SLIM_DMA_MC_TX                                           HW_REGISTER_RW( 0x7e210024 ) 
   #define SLIM_DMA_MC_TX_MASK                                   0xffffffff
   #define SLIM_DMA_MC_TX_WIDTH                                  32
   #define SLIM_DMA_MC_TX_RESET                                  0000000000
#define SLIM_DMA_DC0                                             HW_REGISTER_RW( 0x7e210030 ) 
   #define SLIM_DMA_DC0_MASK                                     0xffffffff
   #define SLIM_DMA_DC0_WIDTH                                    32
   #define SLIM_DMA_DC0_RESET                                    0000000000
#define SLIM_DMA_DC1                                             HW_REGISTER_RW( 0x7e210034 ) 
   #define SLIM_DMA_DC1_MASK                                     0xffffffff
   #define SLIM_DMA_DC1_WIDTH                                    32
   #define SLIM_DMA_DC1_RESET                                    0000000000
#define SLIM_DMA_DC2                                             HW_REGISTER_RW( 0x7e210038 ) 
   #define SLIM_DMA_DC2_MASK                                     0xffffffff
   #define SLIM_DMA_DC2_WIDTH                                    32
   #define SLIM_DMA_DC2_RESET                                    0000000000
#define SLIM_DMA_DC3                                             HW_REGISTER_RW( 0x7e21003c ) 
   #define SLIM_DMA_DC3_MASK                                     0xffffffff
   #define SLIM_DMA_DC3_WIDTH                                    32
   #define SLIM_DMA_DC3_RESET                                    0000000000
#define SLIM_DMA_DC4                                             HW_REGISTER_RW( 0x7e210040 ) 
   #define SLIM_DMA_DC4_MASK                                     0xffffffff
   #define SLIM_DMA_DC4_WIDTH                                    32
   #define SLIM_DMA_DC4_RESET                                    0000000000
#define SLIM_DMA_DC5                                             HW_REGISTER_RW( 0x7e210044 ) 
   #define SLIM_DMA_DC5_MASK                                     0xffffffff
   #define SLIM_DMA_DC5_WIDTH                                    32
   #define SLIM_DMA_DC5_RESET                                    0000000000
#define SLIM_DMA_DC6                                             HW_REGISTER_RW( 0x7e210048 ) 
   #define SLIM_DMA_DC6_MASK                                     0xffffffff
   #define SLIM_DMA_DC6_WIDTH                                    32
   #define SLIM_DMA_DC6_RESET                                    0000000000
#define SLIM_DMA_DC7                                             HW_REGISTER_RW( 0x7e21004c ) 
   #define SLIM_DMA_DC7_MASK                                     0xffffffff
   #define SLIM_DMA_DC7_WIDTH                                    32
   #define SLIM_DMA_DC7_RESET                                    0000000000
#define SLIM_DMA_DC8                                             HW_REGISTER_RW( 0x7e210050 ) 
   #define SLIM_DMA_DC8_MASK                                     0xffffffff
   #define SLIM_DMA_DC8_WIDTH                                    32
   #define SLIM_DMA_DC8_RESET                                    0000000000
#define SLIM_DMA_DC9                                             HW_REGISTER_RW( 0x7e210054 ) 
   #define SLIM_DMA_DC9_MASK                                     0xffffffff
   #define SLIM_DMA_DC9_WIDTH                                    32
   #define SLIM_DMA_DC9_RESET                                    0000000000
#define SLIM_DMA_MC_CON                                          HW_REGISTER_RW( 0x7e210080 ) 
   #define SLIM_DMA_MC_CON_MASK                                  0x00000003
   #define SLIM_DMA_MC_CON_WIDTH                                 2
   #define SLIM_DMA_MC_CON_RESET                                 0000000000
#define SLIM_DMA_DC_CON                                          HW_REGISTER_RW( 0x7e210084 ) 
   #define SLIM_DMA_DC_CON_MASK                                  0x000fffff
   #define SLIM_DMA_DC_CON_WIDTH                                 20
   #define SLIM_DMA_DC_CON_RESET                                 0000000000
#define SLIM_DMA_MC_STAT                                         HW_REGISTER_RW( 0x7e210088 ) 
   #define SLIM_DMA_MC_STAT_MASK                                 0x0000000f
   #define SLIM_DMA_MC_STAT_WIDTH                                4
   #define SLIM_DMA_MC_STAT_RESET                                0000000000
#define SLIM_DMA_DC_STAT_0                                       HW_REGISTER_RW( 0x7e21008c ) 
   #define SLIM_DMA_DC_STAT_0_MASK                               0xffffffff
   #define SLIM_DMA_DC_STAT_0_WIDTH                              32
   #define SLIM_DMA_DC_STAT_0_RESET                              0000000000
#define SLIM_DMA_DC_STAT_1                                       HW_REGISTER_RW( 0x7e210090 ) 
   #define SLIM_DMA_DC_STAT_1_MASK                               0x000f000f
   #define SLIM_DMA_DC_STAT_1_WIDTH                              20
   #define SLIM_DMA_DC_STAT_1_RESET                              0000000000
#define SLIM_MC_IN_CON                                           HW_REGISTER_RW( 0x7e210100 ) 
   #define SLIM_MC_IN_CON_MASK                                   0x00000f1d
   #define SLIM_MC_IN_CON_WIDTH                                  12
   #define SLIM_MC_IN_CON_RESET                                  0000000000
#define SLIM_MC_IN_STAT                                          HW_REGISTER_RW( 0x7e210104 ) 
   #define SLIM_MC_IN_STAT_MASK                                  0x0000000f
   #define SLIM_MC_IN_STAT_WIDTH                                 4
   #define SLIM_MC_IN_STAT_RESET                                 0000000000
#define SLIM_MC_OUT_CON                                          HW_REGISTER_RW( 0x7e210120 ) 
   #define SLIM_MC_OUT_CON_MASK                                  0x00000048
   #define SLIM_MC_OUT_CON_WIDTH                                 7
   #define SLIM_MC_OUT_CON_RESET                                 0000000000
#define SLIM_MC_OUT_STAT                                         HW_REGISTER_RW( 0x7e210124 ) 
   #define SLIM_MC_OUT_STAT_MASK                                 0x00000008
   #define SLIM_MC_OUT_STAT_WIDTH                                4
   #define SLIM_MC_OUT_STAT_RESET                                0000000000
#define SLIM_DCC0_PA0                                            HW_REGISTER_RW( 0x7e210200 ) 
   #define SLIM_DCC0_PA0_MASK                                    0x00ffff1f
   #define SLIM_DCC0_PA0_WIDTH                                   24
   #define SLIM_DCC0_PA0_RESET                                   0000000000
#define SLIM_DCC0_PA1                                            HW_REGISTER_RW( 0x7e210204 ) 
   #define SLIM_DCC0_PA1_MASK                                    0x00ffff3f
   #define SLIM_DCC0_PA1_WIDTH                                   24
   #define SLIM_DCC0_PA1_RESET                                   0000000000
#define SLIM_DCC0_CON                                            HW_REGISTER_RW( 0x7e210208 ) 
   #define SLIM_DCC0_CON_MASK                                    0xffff0070
   #define SLIM_DCC0_CON_WIDTH                                   32
   #define SLIM_DCC0_CON_RESET                                   0000000000
#define SLIM_DCC0_STAT                                           HW_REGISTER_RW( 0x7e21020c ) 
   #define SLIM_DCC0_STAT_MASK                                   0xc0ff00c7
   #define SLIM_DCC0_STAT_WIDTH                                  32
   #define SLIM_DCC0_STAT_RESET                                  0000000000
#define SLIM_DCC0_PROT                                           HW_REGISTER_RW( 0x7e210210 ) 
   #define SLIM_DCC0_PROT_MASK                                   0xc001ffff
   #define SLIM_DCC0_PROT_WIDTH                                  32
   #define SLIM_DCC0_PROT_RESET                                  0x000093a0
#define SLIM_DCC1_PA0                                            HW_REGISTER_RW( 0x7e210220 ) 
   #define SLIM_DCC1_PA0_MASK                                    0x00ffff1f
   #define SLIM_DCC1_PA0_WIDTH                                   24
   #define SLIM_DCC1_PA0_RESET                                   0000000000
#define SLIM_DCC1_PA1                                            HW_REGISTER_RW( 0x7e210224 ) 
   #define SLIM_DCC1_PA1_MASK                                    0x00ffff3f
   #define SLIM_DCC1_PA1_WIDTH                                   24
   #define SLIM_DCC1_PA1_RESET                                   0000000000
#define SLIM_DCC1_CON                                            HW_REGISTER_RW( 0x7e210228 ) 
   #define SLIM_DCC1_CON_MASK                                    0xffff0070
   #define SLIM_DCC1_CON_WIDTH                                   32
   #define SLIM_DCC1_CON_RESET                                   0000000000
#define SLIM_DCC1_STAT                                           HW_REGISTER_RW( 0x7e21022c ) 
   #define SLIM_DCC1_STAT_MASK                                   0xc0ff00c7
   #define SLIM_DCC1_STAT_WIDTH                                  32
   #define SLIM_DCC1_STAT_RESET                                  0000000000
#define SLIM_DCC1_PROT                                           HW_REGISTER_RW( 0x7e210230 ) 
   #define SLIM_DCC1_PROT_MASK                                   0xc001ffff
   #define SLIM_DCC1_PROT_WIDTH                                  32
   #define SLIM_DCC1_PROT_RESET                                  0x000093a0
#define SLIM_DCC2_PA0                                            HW_REGISTER_RW( 0x7e210240 ) 
   #define SLIM_DCC2_PA0_MASK                                    0x00ffff1f
   #define SLIM_DCC2_PA0_WIDTH                                   24
   #define SLIM_DCC2_PA0_RESET                                   0000000000
#define SLIM_DCC2_PA1                                            HW_REGISTER_RW( 0x7e210244 ) 
   #define SLIM_DCC2_PA1_MASK                                    0x00ffff3f
   #define SLIM_DCC2_PA1_WIDTH                                   24
   #define SLIM_DCC2_PA1_RESET                                   0000000000
#define SLIM_DCC2_CON                                            HW_REGISTER_RW( 0x7e210248 ) 
   #define SLIM_DCC2_CON_MASK                                    0xffff0070
   #define SLIM_DCC2_CON_WIDTH                                   32
   #define SLIM_DCC2_CON_RESET                                   0000000000
#define SLIM_DCC2_STAT                                           HW_REGISTER_RW( 0x7e21024c ) 
   #define SLIM_DCC2_STAT_MASK                                   0xc0ff00c7
   #define SLIM_DCC2_STAT_WIDTH                                  32
   #define SLIM_DCC2_STAT_RESET                                  0000000000
#define SLIM_DCC2_PROT                                           HW_REGISTER_RW( 0x7e210250 ) 
   #define SLIM_DCC2_PROT_MASK                                   0xc001ffff
   #define SLIM_DCC2_PROT_WIDTH                                  32
   #define SLIM_DCC2_PROT_RESET                                  0x000093a0
#define SLIM_DCC3_PA0                                            HW_REGISTER_RW( 0x7e210260 ) 
   #define SLIM_DCC3_PA0_MASK                                    0x00ffff1f
   #define SLIM_DCC3_PA0_WIDTH                                   24
   #define SLIM_DCC3_PA0_RESET                                   0000000000
#define SLIM_DCC3_PA1                                            HW_REGISTER_RW( 0x7e210264 ) 
   #define SLIM_DCC3_PA1_MASK                                    0x00ffff3f
   #define SLIM_DCC3_PA1_WIDTH                                   24
   #define SLIM_DCC3_PA1_RESET                                   0000000000
#define SLIM_DCC3_CON                                            HW_REGISTER_RW( 0x7e210268 ) 
   #define SLIM_DCC3_CON_MASK                                    0xffff0070
   #define SLIM_DCC3_CON_WIDTH                                   32
   #define SLIM_DCC3_CON_RESET                                   0000000000
#define SLIM_DCC3_STAT                                           HW_REGISTER_RW( 0x7e21026c ) 
   #define SLIM_DCC3_STAT_MASK                                   0xc0ff00c7
   #define SLIM_DCC3_STAT_WIDTH                                  32
   #define SLIM_DCC3_STAT_RESET                                  0000000000
#define SLIM_DCC3_PROT                                           HW_REGISTER_RW( 0x7e210270 ) 
   #define SLIM_DCC3_PROT_MASK                                   0xc001ffff
   #define SLIM_DCC3_PROT_WIDTH                                  32
   #define SLIM_DCC3_PROT_RESET                                  0x000093a0
#define SLIM_DCC4_PA0                                            HW_REGISTER_RW( 0x7e210280 ) 
   #define SLIM_DCC4_PA0_MASK                                    0x00ffff1f
   #define SLIM_DCC4_PA0_WIDTH                                   24
   #define SLIM_DCC4_PA0_RESET                                   0000000000
#define SLIM_DCC4_PA1                                            HW_REGISTER_RW( 0x7e210284 ) 
   #define SLIM_DCC4_PA1_MASK                                    0x00ffff3f
   #define SLIM_DCC4_PA1_WIDTH                                   24
   #define SLIM_DCC4_PA1_RESET                                   0000000000
#define SLIM_DCC4_CON                                            HW_REGISTER_RW( 0x7e210288 ) 
   #define SLIM_DCC4_CON_MASK                                    0xffff0070
   #define SLIM_DCC4_CON_WIDTH                                   32
   #define SLIM_DCC4_CON_RESET                                   0000000000
#define SLIM_DCC4_STAT                                           HW_REGISTER_RW( 0x7e21028c ) 
   #define SLIM_DCC4_STAT_MASK                                   0xc0ff00c7
   #define SLIM_DCC4_STAT_WIDTH                                  32
   #define SLIM_DCC4_STAT_RESET                                  0000000000
#define SLIM_DCC4_PROT                                           HW_REGISTER_RW( 0x7e210290 ) 
   #define SLIM_DCC4_PROT_MASK                                   0xc001ffff
   #define SLIM_DCC4_PROT_WIDTH                                  32
   #define SLIM_DCC4_PROT_RESET                                  0x000093a0
#define SLIM_DCC5_PA0                                            HW_REGISTER_RW( 0x7e2102a0 ) 
   #define SLIM_DCC5_PA0_MASK                                    0x00ffff1f
   #define SLIM_DCC5_PA0_WIDTH                                   24
   #define SLIM_DCC5_PA0_RESET                                   0000000000
#define SLIM_DCC5_PA1                                            HW_REGISTER_RW( 0x7e2102a4 ) 
   #define SLIM_DCC5_PA1_MASK                                    0x00ffff3f
   #define SLIM_DCC5_PA1_WIDTH                                   24
   #define SLIM_DCC5_PA1_RESET                                   0000000000
#define SLIM_DCC5_CON                                            HW_REGISTER_RW( 0x7e2102a8 ) 
   #define SLIM_DCC5_CON_MASK                                    0xffff0070
   #define SLIM_DCC5_CON_WIDTH                                   32
   #define SLIM_DCC5_CON_RESET                                   0000000000
#define SLIM_DCC5_STAT                                           HW_REGISTER_RW( 0x7e2102ac ) 
   #define SLIM_DCC5_STAT_MASK                                   0xc0ff00c7
   #define SLIM_DCC5_STAT_WIDTH                                  32
   #define SLIM_DCC5_STAT_RESET                                  0000000000
#define SLIM_DCC5_PROT                                           HW_REGISTER_RW( 0x7e2102b0 ) 
   #define SLIM_DCC5_PROT_MASK                                   0xc001ffff
   #define SLIM_DCC5_PROT_WIDTH                                  32
   #define SLIM_DCC5_PROT_RESET                                  0x000093a0
#define SLIM_DCC6_PA0                                            HW_REGISTER_RW( 0x7e2102c0 ) 
   #define SLIM_DCC6_PA0_MASK                                    0x00ffff1f
   #define SLIM_DCC6_PA0_WIDTH                                   24
   #define SLIM_DCC6_PA0_RESET                                   0000000000
#define SLIM_DCC6_PA1                                            HW_REGISTER_RW( 0x7e2102c4 ) 
   #define SLIM_DCC6_PA1_MASK                                    0x00ffff3f
   #define SLIM_DCC6_PA1_WIDTH                                   24
   #define SLIM_DCC6_PA1_RESET                                   0000000000
#define SLIM_DCC6_CON                                            HW_REGISTER_RW( 0x7e2102c8 ) 
   #define SLIM_DCC6_CON_MASK                                    0xffff0070
   #define SLIM_DCC6_CON_WIDTH                                   32
   #define SLIM_DCC6_CON_RESET                                   0000000000
#define SLIM_DCC6_STAT                                           HW_REGISTER_RW( 0x7e2102cc ) 
   #define SLIM_DCC6_STAT_MASK                                   0xc0ff00c7
   #define SLIM_DCC6_STAT_WIDTH                                  32
   #define SLIM_DCC6_STAT_RESET                                  0000000000
#define SLIM_DCC6_PROT                                           HW_REGISTER_RW( 0x7e2102d0 ) 
   #define SLIM_DCC6_PROT_MASK                                   0xc001ffff
   #define SLIM_DCC6_PROT_WIDTH                                  32
   #define SLIM_DCC6_PROT_RESET                                  0x000093a0
#define SLIM_DCC7_PA0                                            HW_REGISTER_RW( 0x7e2102e0 ) 
   #define SLIM_DCC7_PA0_MASK                                    0x00ffff1f
   #define SLIM_DCC7_PA0_WIDTH                                   24
   #define SLIM_DCC7_PA0_RESET                                   0000000000
#define SLIM_DCC7_PA1                                            HW_REGISTER_RW( 0x7e2102e4 ) 
   #define SLIM_DCC7_PA1_MASK                                    0x00ffff3f
   #define SLIM_DCC7_PA1_WIDTH                                   24
   #define SLIM_DCC7_PA1_RESET                                   0000000000
#define SLIM_DCC7_CON                                            HW_REGISTER_RW( 0x7e2102e8 ) 
   #define SLIM_DCC7_CON_MASK                                    0xffff0070
   #define SLIM_DCC7_CON_WIDTH                                   32
   #define SLIM_DCC7_CON_RESET                                   0000000000
#define SLIM_DCC7_STAT                                           HW_REGISTER_RW( 0x7e2102ec ) 
   #define SLIM_DCC7_STAT_MASK                                   0xc0ff00c7
   #define SLIM_DCC7_STAT_WIDTH                                  32
   #define SLIM_DCC7_STAT_RESET                                  0000000000
#define SLIM_DCC7_PROT                                           HW_REGISTER_RW( 0x7e2102f0 ) 
   #define SLIM_DCC7_PROT_MASK                                   0xc001ffff
   #define SLIM_DCC7_PROT_WIDTH                                  32
   #define SLIM_DCC7_PROT_RESET                                  0x000093a0
#define SLIM_DCC8_PA0                                            HW_REGISTER_RW( 0x7e210300 ) 
   #define SLIM_DCC8_PA0_MASK                                    0x00ffff1f
   #define SLIM_DCC8_PA0_WIDTH                                   24
   #define SLIM_DCC8_PA0_RESET                                   0000000000
#define SLIM_DCC8_PA1                                            HW_REGISTER_RW( 0x7e210304 ) 
   #define SLIM_DCC8_PA1_MASK                                    0x00ffff3f
   #define SLIM_DCC8_PA1_WIDTH                                   24
   #define SLIM_DCC8_PA1_RESET                                   0000000000
#define SLIM_DCC8_CON                                            HW_REGISTER_RW( 0x7e210308 ) 
   #define SLIM_DCC8_CON_MASK                                    0xffff0070
   #define SLIM_DCC8_CON_WIDTH                                   32
   #define SLIM_DCC8_CON_RESET                                   0000000000
#define SLIM_DCC8_STAT                                           HW_REGISTER_RW( 0x7e21030c ) 
   #define SLIM_DCC8_STAT_MASK                                   0xc0ff00c7
   #define SLIM_DCC8_STAT_WIDTH                                  32
   #define SLIM_DCC8_STAT_RESET                                  0000000000
#define SLIM_DCC8_PROT                                           HW_REGISTER_RW( 0x7e210310 ) 
   #define SLIM_DCC8_PROT_MASK                                   0xc001ffff
   #define SLIM_DCC8_PROT_WIDTH                                  32
   #define SLIM_DCC8_PROT_RESET                                  0x000093a0
#define SLIM_DCC9_PA0                                            HW_REGISTER_RW( 0x7e210320 ) 
   #define SLIM_DCC9_PA0_MASK                                    0x00ffff1f
   #define SLIM_DCC9_PA0_WIDTH                                   24
   #define SLIM_DCC9_PA0_RESET                                   0000000000
#define SLIM_DCC9_PA1                                            HW_REGISTER_RW( 0x7e210324 ) 
   #define SLIM_DCC9_PA1_MASK                                    0x00ffff3f
   #define SLIM_DCC9_PA1_WIDTH                                   24
   #define SLIM_DCC9_PA1_RESET                                   0000000000
#define SLIM_DCC9_CON                                            HW_REGISTER_RW( 0x7e210328 ) 
   #define SLIM_DCC9_CON_MASK                                    0xffff0070
   #define SLIM_DCC9_CON_WIDTH                                   32
   #define SLIM_DCC9_CON_RESET                                   0000000000
#define SLIM_DCC9_STAT                                           HW_REGISTER_RW( 0x7e21032c ) 
   #define SLIM_DCC9_STAT_MASK                                   0xc0ff00c7
   #define SLIM_DCC9_STAT_WIDTH                                  32
   #define SLIM_DCC9_STAT_RESET                                  0000000000
#define SLIM_DCC9_PROT                                           HW_REGISTER_RW( 0x7e210330 ) 
   #define SLIM_DCC9_PROT_MASK                                   0xc001ffff
   #define SLIM_DCC9_PROT_WIDTH                                  32
   #define SLIM_DCC9_PROT_RESET                                  0x000093a0
