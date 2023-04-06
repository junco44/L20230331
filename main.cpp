#include <iostream>
#include <conio.h>

using namespace std;

//entry point
int main()
{
	int Map[10][10] = {
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
	};
	
	int PlayerX = 1;
	int PlayerY = 1;
	bool blsRunning = true;

	while (blsRunning) //GameLoop
	{
		//Frame
		//Input();
		char Key;
		Key = _getch();
		//Tick();
		if (Key == 'd')
		{
			PlayerX++;
		}
		else if (Key == 'a')
		{
			PlayerX--;
		}
		else if (Key == 's')
		{
			PlayerY++;
		}
		else if (Key == 'w')
		{
			PlayerY--;
		}
		else if (Key == 'q')
		{
			blsRunning = false;
		}

		//Render();
		system("cls");
		for (int Y = 0; Y < 10; ++Y)
		{
			for (int X = 0; X < 10; ++X)
			{
				if (PlayerX == X && PlayerY == Y)
				{
					cout << "P";
				}
				else if (Map[Y][X] == 1)
				{
					cout << "#";
				}
				else if (Map[Y][X] == 0)
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	return 0;
}