#include<iostream>
#include<ctime>
#include<conio.h>
#include<Windows.h>
#include<stdlib.h>
using namespace std;
//1st FUNCTION:
void welcome()
{
	system("color 5F");
	cout << "\n\n  WELCOME TO " << endl;	Beep(880, 500);	//A5 1-2
	Beep(587.33, 1000);	//D5 1
	for (int i = 0; i < 80; i++)
		cout << char(287);
	cout << "\n";	Beep(698.46, 500);	//F5 1-2
	//Snake
	cout << " ___   _   _    __     _  _   ___   \n";	Beep(880, 500);	//A5 1-2
	cout << "/ __> | \\ | |  /   \\  | |/ / | __> \n";	Beep(587.33, 1000);	//D5 1
	cout << "\\__ \\ |  \\| | |  -  | |   <  | _>\n";	Beep(698.46, 500);	//F5 1-2
	cout << "<___/ |_|\\ _| |_| |_| |_|\\_\\ |___>\n";	Beep(880, 250);	//A5 1-4

	//And
	cout << "\t\t       __     _   _   __\n";		Beep(1046.50, 250);	//C6 1-4
	cout << "\t\t      /   \\  | \\ | | |  \\\n";	Beep(987.77, 500);	//B5 1-2
	cout << "\t\t     |  -  | |  \\| | | D >\n";	Beep(783.99, 500);	//G5 1-2
	cout << "\t\t     |_| |_| |_|\\ _| |__/\n";		Beep(698.46, 250);	//F5 1-4

	//Ladder
	cout << "\t\t\t\t  _       __     __    __    ___   ___" << endl;		Beep(783.99, 250);	//G5 1-4
	cout << "\t\t\t\t | |     /   \\  |  \\  |  \\  | __> | __ \\" << endl;	Beep(880, 500);	//A5 1-2
	cout << "\t\t\t\t | |__  |  -  | | D > | D > | _>  |    /" << endl;		Beep(587.33, 500);	//D5 1-2
	cout << "\t\t\t\t |____| |_| |_| |__/  |__/  |___> |_|\\_>\n\n\n\n\n";	Beep(523.25, 250);	//C5 1-4
	Beep(659.26, 250);	//E5 1-4
	Beep(587.33, 750);	//DS 3-4
	Sleep(500);
}
/*------------------------------------------------------------------------------------------*/
//2nd FUNCTION:
void instructions()
{
	cout << "\n\n";
	for (int i = 0; i < 31; i++)
		cout << char(273);
	cout << " INSTRUCTIONS ";
	for (int i = 0; i < 35; i++)
		cout << char(272);


	//Istructions:
	cout << "\n\n\tNOTE: Maximize your output window.\n\n\To play this game first enter the ";
	cout << "players names. After starting the game there \nwill be alternate turns of the players. ";
	cout << "Game status will show the positions of \nthe players and after this Enter 'R' to roll the dice.";
	cout << " If any player reached \nfirst in 100th position then that will be the Winner.\n\n";
	cout << "\t\t\t\t\t     Made By MUHAMMAD ZEESHAN YOUSAF\n";
	cout << "\t\t\t\t\t     Roll NO: 259-BSCS-2019";

}
/*------------------------------------------------------------------------------------------*/

//3rd FUNCTION:
void snake()
{
	cout << "\t\t\t=====SNAKE AND LADDER=====\n";
	cout << "\t\t\t   __    __    __    __ " << endl;
	cout << "\t\t\t  /  \\  /  \\  /  \\  /  \\ " << endl;
	cout << "\t_________________/  __\\/  __\\/  __\\/  __\\________________" << endl;
	cout << "\t________________/  /__/  /__/  /__/  /___________________" << endl;
	cout << "\t\t       | / \\   / \\   / \\   /  \\   \\____" << endl;
	cout << "\t\t       |/   \\_/   \\_/   \\_/    \\     " << (char)248 << " \\ " << endl;
	cout << "\t\t\t\t\t        \\______/--<" << endl;
}
/*------------------------------------------------------------------------------------------*/

//4th FUNCTION:
void loading()
{
	//Snake:
	snake();
	//Loading:
	cout << "\n\n\t\t\t\tLoading...\n";
	cout << "\t\t";
	for (int i = 1; i <= 40; ++i)
	{
		Sleep(150);
		cout << char(220);
	}
	Sleep(500);
	cout << "\n\n";
}
/*------------------------------------------------------------------------------------------*/

//5th FUNCTION:
void snakeladderpostions()
{
	cout << "\n";
	cout << char(201);
	for (int i = 0; i < 26; i++)	//top of the box 1
		cout << char(205);
	cout << char(187) << "\t\t\t" << char(201);
	for (int j = 0; j < 26; j++)	//top of the box 2
		cout << char(205);
	cout << char(187);
	cout << endl << char(186) << "    SNAKE AT POSITION     " << char(186) << "\t\t\t";
	cout << char(186) << "    LADDER AT POSITION    " << char(186) << endl << char(200);
	for (int k = 0; k < 26; k++)	//bottom of the box 1
		cout << char(205);
	cout << char(188) << "\t\t\t" << char(200);
	for (int l = 0; l < 26; l++)	//bottom of the box 2
		cout << char(205);
	cout << char(188) << endl;
	//Positions Printing:
	cout << char(179) << "   From 40 -to-> 20\t   " << char(179) << "\t\t\t";	//snake 1
	cout << char(179) << "   From 4  -to-> 22\t   " << char(179) << endl;	//ladder 1
	cout << char(179) << "   From 54 -to-> 28\t   " << char(179) << "\t\t\t";	////snake 2
	cout << char(179) << "   From 14 -to-> 77\t   " << char(179) << endl;	//ladder 2
	cout << char(179) << "   From 81 -to-> 64\t   " << char(179) << "\t\t\t";//snake 3
	cout << char(179) << "   From 33 -to-> 51\t   " << char(179) << endl;	//ladder 3
	cout << char(179) << "   From 95 -to-> 36\t   " << char(179) << "\t\t\t";//snake 4
	cout << char(179) << "   From 66 -to-> 82\t   " << char(179) << endl;	//ladder 4
	cout << char(192);
	for (int m = 0; m < 26; ++m)	//bottom closing box line
		cout << char(196);
	cout << char(217) << "\t\t\t" << char(192);
	for (int m = 0; m < 26; ++m)	//bottom closing box line
		cout << char(196);
	cout << char(217) << endl;
}
/*===========================================================================================*/

//6th FUNCTION:
void printgrid()
{
	//Initialization of 2D array in DYNAMIC MEMORY:
	int **locate = new int*[10];
	int numbers = 1;
	for (int rows = 0; rows < 10; ++rows)
	{
		locate[rows] = new int[10];
		for (int columns = 0; columns < 10; ++columns)
		{
			locate[rows][columns] = numbers;
			numbers++;
		}
	}
	//PRINTING THE GRIDLINES:------------------------------------------------
	cout << endl;
	for (int l = 0; l < 9; ++l)
		cout << char(196) << char(196) << char(196) << char(196) << char(194);
	cout << char(196) << char(196) << char(196) << char(196) << char(191) << endl;
	for (int i = 9 ; i >= 0 ; --i )	//this loop prints the numbers
	{
		for (int j = 9 ; j >= 0 && i % 2 != 0 ; --j)	//this loop is for printing in reverse order
		{
			if ( i == 9 && j == 9)	//this condition is for 100 (three digit number)
				cout << char(32) << locate[i][j] << char(179);
			else if (i > 0)
				cout << char(32) << locate[i][j]  << " " << char(179);
		}

		for (int j = 0 ; j <= 9 && i % 2 == 0 ; ++j)	//this loop is for printing in right order
		{
			if (i != 0)		//for printing one digit number fits with box size
				cout << char(32) << locate[i][j] << " " << char(179) ;
			else if (i == 0 )
				{
					cout << char(32) << " " << locate[i][j];
					if (j < 9)	//for printing one digit number with space
						cout << " " << char(179);
					else	//for printing 10 without space after number
						cout << char(179);
				}
		}
		cout << "\n";
		for (int k = 1 ; k <= 10 ; ++k)	//for printing last closing line for grid
		{
			cout << char(196) << char(196) << char(196)  << char(196) <<char(197);
		}
		cout << endl;
	}
}
/*------------------------------------------------------------------------------------------*/

//DICE PRINTING FUNCTIONS:=======================================================
void one()
{
	//Dice making which will show one:
	char line1[] = { 201, 205, 205, 205, 205, 205, 187, '\0' };
	cout << line1 << endl;
	char line2[] = { 186, 32, 32, 32, 32, 32, 186, '\0' };
	cout << line2 << endl;
	char line3[] = { 186, 32, 32, 219, 32, 32, 186, '\0' };	//This shows one
	cout << line3 << endl;
	char line4[] = { 186, 32, 32, 32, 32, 32, 186, '\0' };
	cout << line4 << endl;
	char line5[] = { 200, 205, 205, 205, 205, 205, 188, '\0' };
	cout << line5 << endl;
}
void two()
{
	char line1[] = { 201, 205, 205, 205, 205, 205, 187, '\0' };
	cout << line1 << endl;
	char line2[] = { 186, 32, 32, 32, 32, 32, 186, '\0' };
	cout << line2 << endl;
	char line3[] = { 186, 32, 219, 32, 219, 32, 186, '\0' };	//This shows two
	cout << line3 << endl;
	char line4[] = { 186, 32, 32, 32, 32, 32, 186, '\0' };
	cout << line4 << endl;
	char line5[] = { 200, 205, 205, 205, 205, 205, 188, '\0' };
	cout << line5 << endl;
}
void three()
{
	char line1[] = { 201, 205, 205, 205, 205, 205, 187, '\0' };
	cout << line1 << endl;
	char line2[] = { 186, 32, 32, 32, 32, 219, 186, '\0' };	//This shows right dot
	cout << line2 << endl;
	char line3[] = { 186, 32, 32, 219, 32, 32, 186, '\0' };	//This shows middle dot
	cout << line3 << endl;
	char line4[] = { 186, 219, 32, 32, 32, 32, 186, '\0' };	//This shows left dot
	cout << line4 << endl;
	char line5[] = { 200, 205, 205, 205, 205, 205, 188, '\0' };
	cout << line5 << endl;
}
void four()
{
	char line1[] = { 201, 205, 205, 205, 205, 205, 187, '\0' };
	cout << line1 << endl;
	char line2[] = { 186, 219, 32, 32, 32, 219, 186, '\0' };	//This shows top left & right dot
	cout << line2 << endl;
	char line3[] = { 186, 32, 32, 32, 32, 32, 186, '\0' };
	cout << line3 << endl;
	char line4[] = { 186, 219, 32, 32, 32, 219, 186, '\0' };	//This shows top left & right dot
	cout << line4 << endl;
	char line5[] = { 200, 205, 205, 205, 205, 205, 188, '\0' };
	cout << line5 << endl;
}
void five()
{
	char line1[] = { 201, 205, 205, 205, 205, 205, 187, '\0' };
	cout << line1 << endl;
	char line2[] = { 186, 219, 32, 32, 32, 219, 186, '\0' };	//This shows top left & right dot
	cout << line2 << endl;
	char line3[] = { 186, 32, 32, 219, 32, 32, 186, '\0' };	//This shows middle dot
	cout << line3 << endl;
	char line4[] = { 186, 219, 32, 32, 32, 219, 186, '\0' };	//This shows top left & right dot
	cout << line4 << endl;
	char line5[] = { 200, 205, 205, 205, 205, 205, 188, '\0' };
	cout << line5 << endl;
}
void six()
{
	char line1[] = { 201, 205, 205, 205, 205, 205, 187, '\0' };
	cout << line1 << endl;
	char line2[] = { 186, 32, 223, 32, 223, 32, 186, '\0' };	//This shows top left & right dot
	cout << line2 << endl;
	char line3[] = { 186, 32, 223, 32, 223, 32, 186, '\0' };
	cout << line3 << endl;
	char line4[] = { 186, 32, 223, 32, 223, 32, 186, '\0' };	//This shows top left & right dot
	cout << line4 << endl;
	char line5[] = { 200, 205, 205, 205, 205, 205, 188, '\0' };
	cout << line5 << endl;
}
//========================================================================================
//7th FUCTION:
/*DICE PRINTER:--------------------------------------------------------------------------------*/
void showdice(int num)
{
		switch (num)
		{
			case 1:
				one();
				break;
			case 2:
				two();
				break;
			case 3:
				three();
				break;
			case 4:
				four();
				break;
			case 5:
				five();
				break;
			case 6:
				six();
				break;
			default:
				cout << "\a\a\a\n\"SOMETHING WENT WRONG\"\n";
		}
}
/*------------------------------------------------------------------------------------------*/

//8th FUNCTION
void printstatus()
{
	cout << "\n";
	cout << char(201);
	for (int i = 0; i < 26; i++)
		cout << char(205);
	cout << char(187) << endl << char(186) << "\tGAME STATUS\t   " << char(186) << endl << char(200);
	for (int i = 0; i < 26; i++)
		cout << char(205);
	cout << char(188);
}
/*------------------------------------------------------------------------------------------*/

//9th FUNCTION:
void checksnake(int* S)
{
	//There are four SANKES:
	if (*S == 40)	//40 --> 20
	{//1
		Beep(1000, 200);
		Beep(800, 200);
		*S = 20;
		cout << "\SNAKE BITING (FROM 40 --> 20)\n";
	}
	else if (*S == 54)	//54 --> 28
	{//2
		Beep(1000, 200);
		Beep(800, 200);
		*S = 28;
		cout << "\SNAKE BITING (FROM 54 --> 28)\n";
	}
	else if (*S == 81)	//81 -->64
	{//3
		Beep(1000, 200);
		Beep(800, 200);
		*S = 64;
		cout << "\SNAKE BITING (FROM 81 --> 64)\n";
	}
	else if (*S == 95)	//95 --> 36
	{//4
		Beep(1000, 200);
		Beep(800, 200);
		*S = 36;
		cout << "\SNAKE BITING (FROM 95 --> 36)\n";
	}

}
/*------------------------------------------------------------------------------------------*/

//10th Fuction:
void checkladder(int* L)
{
	//There are four LADDERS:
	if (*L == 4)	//4 --> 22
	{//1
		Beep(400, 200);
		Beep(600, 200);
		Beep(800, 200);
		Beep(1000, 200);
		Beep(1200, 200);
		*L = 22;
		cout << "\LADDER CLIMBING (FROM 4 --> 22)\n";
	}
	else if (*L == 14)	//14 --> 77
	{//2
		Beep(400, 200);
		Beep(600, 200);
		Beep(800, 200);
		Beep(1000, 200);
		Beep(1200, 200);
		*L = 77;
		cout << "\LADDER CLIMBING (FROM 14 --> 77)\n";
	}
	else if (*L == 33)	//33 --> 51
	{//3
		Beep(400, 200);
		Beep(600, 200);
		Beep(800, 200);
		Beep(1000, 200);
		Beep(1200, 200);
		*L = 51;
		cout << "\LADDER CLIMBING (FROM 33 --> 51)\n";
	}
	else if (*L == 66)	//66 --> 82
	{//4
		Beep(400, 200);
		Beep(600, 200);
		Beep(800, 200);
		Beep(1000, 200);
		Beep(1200, 200);
		*L = 82;
		cout << "\LADDER CLIMBING (FROM 66 --> 82)\n";
	}
}
