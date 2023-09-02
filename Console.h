#pragma once

#include <windows.h>

// ????????????????????????????????????????????????????????????????????????????????????????????????????????????
//  Function to clear the screen and move the cursor to position 0,0
// ????????????????????????????????????????????????????????????????????????????????????????????????????????????
void Clear(void);

// ????????????????????????????????????????????????????????????????????????????????????????????????????????????
//  Function to move the cursor to position _x, _y
// ????????????????????????????????????????????????????????????????????????????????????????????????????????????
void GotoXY(int _x, int _y);

// ????????????????????????????????????????????????????????????????????????????????????????????????????????????
//  Function to change the title of the console window
// ????????????????????????????????????????????????????????????????????????????????????????????????????????????
void SetTitle(char* _szConsoleName);

// ????????????????????????????????????????????????????????????????????????????????????????????????????????????
//  Function to change the background color and text color
// ????????????????????????????????????????????????????????????????????????????????????????????????????????????
void SetColor(unsigned char _BgColor, unsigned char _TextColor);

// ????????????????????????????????????????????????????????????????????????????????????????????????????????????
//  Function to show or hide the cursor
// ????????????????????????????????????????????????????????????????????????????????????????????????????????????
void SetCursor(BOOL _bShow);

// ????????????????????????????????????????????????????????????????????????????????????????????????????????????
//  Function to set the console window size (default is 80x25)
// ????????????????????????????????????????????????????????????????????????????????????????????????????????????
void SetConsoleSize(int _col, int _lines);
