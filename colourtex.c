#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
  HANDLE hStdout;
void textcolor(int color)
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE); 
	SetConsoleTextAttribute(hStdout, FOREGROUND_RED);
	printf("This is red.\n");
	SetConsoleTextAttribute(hStdout, FOREGROUND_BLUE);
	printf("This is blue.\n");
	SetConsoleTextAttribute(hStdout, FOREGROUND_GREEN);
	printf("This is green.\n");
	int color = 15;  // Change Value Here
    SetConsoleTextAttribute(hStdout, color);
	getch();
	return(0);
}
