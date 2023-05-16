#include <iostream>
#include "Monster.h"

using namespace std;
int main()
{
	Monster charlie;
	Monster carl({ 2,2 });
	getPosition();
	charlie.getPosition();
	charlie.getNumMonsters();
	carl.getNumMonsters();
	Monster::getNumMonsters();
	
	char command{ ' ' };
	while (command != 'q')
	{
		cout << "Which Way! (l)eft, (r)ight, (u)p, (d)own, (q)uit: ";
		cin >> command;
		switch (command)
		{
		case 'l':
			charlie.moveLeft();
			break;
		case 'r':
			charlie.moveRight();
			break;
		case 'u':
			charlie.moveUp();
			break;
		case 'd':
			charlie.moveDown();
			break;
		default:
			break;
		}
		charlie.print();
		cout << endl;
	}
	return 0;
}