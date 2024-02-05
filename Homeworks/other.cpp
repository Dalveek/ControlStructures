#include <iostream>
#include <conio.h>

using namespace std;

#define UP_ARROW 72
#define DOWN_ARROW 80
#define LEFT_ARROW 75
#define RIGHT_ARROW 77
#define ENTER 13
#define ESCAPE 27

int other()
{
	setlocale(LC_ALL, "");
	char key;
	
	do
	{
		key = _getch();
		// cout << (int)key << "\t" << key << endl;
		/*if (key == 'w' || key == 'W' || key == UP_ARROW) cout << "Forward" << endl;
		else if (key == 's' || key == 'S' || key == DOWN_ARROW) cout << "Back" << endl;
		else if (key == 'a' || key == 'A' || key == LEFT_ARROW) cout << "Left" << endl;
		else if (key == 'd' || key == 'D' || key == RIGHT_ARROW) cout << "Right" << endl;
		else if (key == ' ') cout << "Jump" << endl;
		else if (key == 13) cout << "Enter" << endl;
		else if (key != 27 && key != -32) cout << "Error" << endl;*/
		switch (key)
		{
		case 'w': case 'W': case UP_ARROW: cout << "Вперед" << endl; break;
		case 's': case 'S': case DOWN_ARROW: cout << "Назад" << endl; break;
		case 'a': case 'A': case LEFT_ARROW: cout << "Влево" << endl; break;
		case 'd': case 'D': case RIGHT_ARROW: cout << "Вправо" << endl; break;
		case ESCAPE: cout << "Escape" << endl;
		case -32:break;
		default: cout << "Error" << endl;
		}
	} while (key != 27);
	
	return 0;
}