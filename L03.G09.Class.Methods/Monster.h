#ifndef MONSTER_H
#define MONSTER_H
struct Position
{
	int x;
	int y;
};

class Monster
{
public:
	
	Monster();
	Monster(Position postion);
	
	Position getPosition() const;
	void setPosition(Position pPosition);
	static int getNumMonsters();
	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();

	void print() const;
private:
	Position position{ 0,0 };
	int strength{ 2 };
	static int numMonsters;
};

Position getPosition();
#endif // !MONSTER_H

