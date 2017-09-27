/*
Zayam Tariq - 9/21/2017 - 2nd Period
Assignement Name: DisplayNameText
*/
#include <iostream>
#include <conio.h>

using namespace std;

void pause() {
	cout << "Press any key...,";
	while (!_kbhit()); 
	cout << '\n'; 
}


void main() {
	const char* text_2 = "Period 2";
	cout << text_2 << endl;
	cout << 'h' << 'e' << 'L' << 'l' << 'o' << "world!" << "                                                                  " << "Zayam Tariq" << endl;
		pause();
	return;
}





