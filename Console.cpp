#include <windows.h>
#include <stdio.h>
#include "Console.h"

void Clear(void)
{
	system("cls");
}

void GotoXY(int _x, int _y)
{
	COORD pos = { _x, _y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void SetTitle(const char* L_szConsoleName)
{

	int len = MultiByteToWideChar(CP_UTF8, 0, L_szConsoleName, -1, NULL, 0);
	wchar_t* wideString = new wchar_t[len];
	MultiByteToWideChar(CP_UTF8, 0, L_szConsoleName, -1, wideString, len);


	SetConsoleTitle(wideString);


	delete[] wideString;
}

void SetColor(unsigned char _BgColor, unsigned char _TextColor)
{
	if (_BgColor > 15 || _TextColor > 15)
		return;

	unsigned short ColorNum = (_BgColor << 4) | _TextColor;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorNum);
}

void SetCursor(BOOL _bShow)
{
	CONSOLE_CURSOR_INFO curInfo;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);
	curInfo.bVisible = _bShow;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);
}

void SetConsoleSize(int _col, int _lines)
{
	char setText[100];
	sprintf_s(setText, "mode con cols=%d lines=%d", _col, _lines);
	system(setText);
}