#ifndef TCM8210_REGS_H
#define TCM8210_REGS_H

/* 
* 
* 
* 
* 
* 
* 
* 
*         
*         
*         
*         
*                 
* 
*/

const uint8_t TCM8210_VGA[][2] PROGMEM =
{
    {   1, 0x78},    // Size of byte, Address (ID) 
    { 640/16,  480/16}, // Size X, Size Y
    {0b11000010, 0b00000000},    // Reset_Enable_N, 7|6|5|4|3|Vsync Invert|Hsync Invert|0

    {0x1f, 0x40},
    {0x1f, 0x00},
    {0x02, 0x00}, //30Hz, PLL_OFF
    {0x03, 0x00}, //YUV    ,640x480, 30fps Full
    {0x04, 0x31}, // V_INV, no flip horizontal , no flip vertical
    { 0xff,0xff}, // end
};        


const uint8_t TCM8210_QVGA[][2] PROGMEM =
{
    {   1, 0x78}, // Size of byte, Address (ID) 
    { 320/16,  240/16}, // Size X, Size Y
    {0b11000010, 0},       // Reset_Enable_N, Reserved

    {0x1f, 0x40},
    {0x1f, 0x00},
    {0x02, 0x00}, //30Hz, PLL_OFF
    {0x03, 0x04}, //YUV    ,320x240, 30fps Full
    {0x04, 0x31}, // V_INV, no flip horizontal , no flip vertical
    { 0xff,0xff}, // end
};        

#endif

