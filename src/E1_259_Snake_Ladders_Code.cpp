#include<iostream>
#include<string>
#include<ctime>
#include<conio.h>
#include<Windows.h>
#include<stdlib.h>
#include"E1_259_Snake_Ladders_Header.h"	//All fuctions are in this header file(must remeber to include)
using namespace std;

/*==========================================================================================*/
int main()
{
	int random = 1, beepPlayer = 0;
	char start, get;
	welcome();	//	WELCOME
	system("CLS");
	system("color 5F");
	instructions();
	cout << "\n\n\n\n\t" << char(272) << "Enter \"S\" to start the game\t" << char(272)
		<< "Enter \"E\" to exit the game\n\t";
	cin >> start;
	//Input validation checker loop:
	while (start != 's' && start != 'S' && start != 'e' && start != 'E')
	{
		cout << "\n\t\a\a" << "Type correct command" << "\n\t";
		cin >> start;
	}
	
	if (start == 'S' || start == 's')	//Game body:-
	{
		system("CLS");
		loading();	//LOADING
		system("CLS");
		snake();
		Beep(600, 200);
		Beep(700, 200);
		Beep(800, 200);
		//Name input:
		string player1, player2;
		cout << "\n\n\t" << char(272) << "Enter the name of the first player :  ";
		cin >> player1;
		cout << "\n\t" << char(272) << "Enter the name of the first player :  ";
		cin >> player2;
		system("CLS");
		Beep(800, 200);
		Beep(800, 200);
		Beep(900, 200);
		Beep(900, 200);
		Beep(1000, 200);
		Beep(800, 200);
		Beep(900, 550);
		int turn = 2, position1 = 0, position2 = 0;
		while(!(position1 >= 100) || !(position2 >= 100))
		{
			snake();
			snakeladderpostions();
			if (position1 >= 100)
			{
				if (beepPlayer == 0)
				{
					Beep(1000, 200);
					Beep(1200, 200);
					Beep(1568, 300);
				}
				cout << "\t:-) CONGRATULATIONS! \"" << player1 << "\" is the Winner (-:";
				beepPlayer ++ ;
			}
			else if (position2 >= 100)
			{
				if (beepPlayer == 0)
				{
					Beep(1000, 200);
					Beep(1200, 200);
					Beep(1568, 300);
				}
				cout << "\t:-) CONGRATULATIONS! \"" << player2 << "\" is the Winner (-:";
				beepPlayer++;
			}
			printgrid();
			printstatus();
			cout << "\n" << char(272) << "The position of \"" << player1 << "\" is :  " << position1 << endl;
			cout << char(272) << "The position of \"" << player2 << "\" is :  " << position2 << endl;
			showdice(random);
			if (turn % 2 == 0 && !(position1 >= 100))
			{	//turn of the first player:
				system("color 3F");
				cout << player1 << " enter 'R' to Roll the Dice :  ";
				cin >> get;
				while (get != 'r' && get != 'R')
				{
					cout << "\a\a";
					cout << player1 << " enter 'R' to Roll the Dice :  ";
					cin >> get;
				}
				//getchar();
				random = ((rand() + time(0)) % 6) + 1;	//random number generator:
				cout << endl;
				position1 += random;
				checksnake( &position1 );
				checkladder( &position1 );
			}
			else if (turn % 2 != 0 && !(position2 >= 100))
			{	//turn of the second player:
				system("color 3B");
				cout << player2 << " enter any 'R' to Roll the Dice :  ";
				cin >> get;
				while (get != 'r' && get != 'R')
				{
					cout << "\a\a";
					cout << player2 << " enter any 'R' to Roll the Dice :  ";
					cin >> get;
				}
				//getchar();
				random = ((rand() + time(0)) % 6) + 1;	//random number generator:
				cout << endl;
				position2 += random;
				checksnake( &position2 );
				checkladder( &position2 );
			}
			
			if (position1 >= 100)
				turn += 2;
			else
				turn++;
			if(!(position1 >= 100) || !(position2 >= 100))
				system("CLS");
		}
		//Game finished
		Beep(800, 300);
		Beep(800, 300);
		Beep(700, 300);
		Beep(700, 300);
		Beep(600, 300);
		Beep(500, 300);
		Beep(600, 600);
		if (position1 == 100)
		{
			Beep(1000, 200);
			Beep(1200, 200);
			Beep(1568, 300);
			cout << "\t:-) CONGRATULATIONS! \"" << player1 << "\" is the Winner (-:";
		}
		else if (position2 == 100)
		{
			Beep(1000, 200);
			Beep(1200, 200);
			Beep(1568, 300);
			cout << "\t:-) CONGRATULATIONS! \"" << player2 << "\" is the Winner (-:";
		}
		cout << "\n\n||||||||||||||||||||||| GAME FINISHED |||||||||||||||||||||||\n\n";

	}
	else if (start == 'E' || start == 'e')	//Game exit
		return 0;

	system("pause");
	return 0;
}

