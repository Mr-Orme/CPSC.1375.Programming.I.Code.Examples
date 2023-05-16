#include <iostream>
#include "Monster.h"
int Monster::numMonsters{ 0 };

Monster::Monster() 
	:position{ 1,1 }
{
	numMonsters++;
}
//Monster::Monster()
//{
//	position.x = 1;
//	position.y = 1;
//  numMonsters++;
//}

Monster::Monster(Position position) 
	: position{ position }
{
	numMonsters++;
	//position = position;
}

Position Monster::getPosition() const
{
	return position;
}
Position getPosition()
{
	//position.x;
	return { 1,2 };
}

void Monster::setPosition(Position pPosition)
{
	position = pPosition;
}

int Monster::getNumMonsters()
{
	return numMonsters;
}


void Monster::moveLeft()
{
	position.x--;
}

void Monster::moveRight()
{
	position.x++;
}

void Monster::moveUp()
{
	position.y++;
}

void Monster::moveDown()
{
	position.y--;
}

void Monster::print() const
{
	std::cout << "(" << position.x << ", " << position.y << ") ";
}
