
#ifndef _T6963_CONSTANTS_H
#define _T6963_CONSTANTS_H


#define T6963_CURSOR_PATTERN_SELECT			0xA0
#define T6963_DISPLAY_MODE					0x90
#define T6963_MODE_SET						0x80
#define T6963_SET_CURSOR_POINTER			0x21
#define T6963_SET_OFFSET_REGISTER			0x22
#define T6963_SET_ADDRESS_POINTER			0x24
#define T6963_SET_TEXT_HOME_ADDRESS			0x40
#define T6963_SET_TEXT_AREA					0x41
#define T6963_SET_GRAPHIC_HOME_ADDRESS		0x42
#define T6963_SET_GRAPHIC_AREA				0x43
#define T6963_SET_DATA_AUTO_WRITE			0xB0
#define T6963_SET_DATA_AUTO_READ			0xB1
#define	T6963_AUTO_RESET					0xB2
#define T6963_DATA_WRITE_AND_INCREMENT		0xC0
#define T6963_DATA_READ_AND_INCREMENT		0xC1
#define T6963_DATA_WRITE_AND_DECREMENT		0xC2
#define T6963_DATA_READ_AND_DECREMENT		0xC3
#define T6963_DATA_WRITE_AND_NONVARIALBE	0xC4
#define T6963_DATA_READ_AND_NONVARIABLE		0xC5
#define T6963_SCREEN_PEEK					0xE0
#define T6963_SCREEN_COPY					0xE8
#define T6963_6x8DOTS 						6
#define T6963_8x8DOTS 						8

//default values for hardware pin
#define	T6963_BLK_DEFAULT					0//backlight				1:on, 0:off
#define	T6963_FS_DEFAULT					1//hardware font select		1:6x8,0:8x8
#define	T6963_SREVERSE_DEFAULT					1//hardware screen inverse  1:REV,0:NORM
#define	T6963_FASTMODE_DEFAULT					0//disable wait status  1:disabled (fast),0:normal (safer but slow)
#endif
