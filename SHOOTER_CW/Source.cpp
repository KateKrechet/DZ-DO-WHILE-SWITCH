#include <iostream>
#include <conio.h>
using namespace std;

#define SHOOTER_3D
//#define SHOOTER_2
#define tab "\t"
#define UP_ARROW 72
#define DOWN_ARROW 80
#define LEFT_ARROW 75
#define RIGHT_ARROW 77
#define ESCAPE 27

void main()
{
	setlocale(LC_ALL, "Russian");


#ifdef SHOOTER_3D
	char key; //����� ������� ��� �������

	do
	{
		key = _getch();

		switch (key)
		{
		case 'w':case 'W':case UP_ARROW:cout << "������" << endl; break;
		case 's':case 'S':case DOWN_ARROW:cout << "�����" << endl; break;
		case 'a':case 'A':case LEFT_ARROW:cout << "�����" << endl; break;
		case 'd':case 'D':case RIGHT_ARROW:cout << "������" << endl; break;
		case 'r':case 'R':cout << "�����������" << endl; break;
		case ' ':cout << "������" << endl; break;
		case 13:cout << "�����" << endl; break;
		case ESCAPE:cout << "�����" << endl; break;
		case -32:break;
		default:cout << "Error: NoAction" << endl;
		}

	} while (key != ESCAPE);

#endif // SHOOTER_3D


#ifdef SHOOTER_2
	char key; //����� ������� ��� �������

	do
	{
		key = _getch();

		//cout << (int)key << tab << key << endl;

		if (key == 'W' || key == 'w' || key = UP_ARROW)
		{
			cout << "������" << endl;
		}



	} while (key != 27);
#endif // SHOOTER_2



}
