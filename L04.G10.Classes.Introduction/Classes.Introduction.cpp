#include <vector>
#include <iostream>
#include <string>
struct Coordinates
{
	float x;
	float y;
};
class SimpleSpaceShip 
{

public:

	Coordinates getPosition() const //accessor method
	{
		return position;
	}

	void setPosition(Coordinates Pposition)		//accessor method	
	{
		position = Pposition;
	}

	void setName(std::string pName)	//accessor method
	{
		name = pName;
	}

	void print() const		//I/O method
	{
		std::cout << name << ", Position: (" << position.x << ", " << position.y << ")" << std::endl;
	}
	
private:
	Coordinates position{ 0.0f, 0.0f };
	std::string name{ "Enterprise" };   //data member
};

void foo(const SimpleSpaceShip& sss)
{
	
}
int main()
{
	SimpleSpaceShip sss;
	sss.print();
	sss.setPosition({ 11.5, -1.0 });
	sss.print();

	SimpleSpaceShip sss2;
	sss2.print();
	sss2.setName("Atlantis");
	sss2.print();


	std::vector<SimpleSpaceShip> fleet;
	for (int i = 0; i < 10; i++)
	{

		fleet.push_back(SimpleSpaceShip());
		fleet.back().setPosition({ (float)i, (float)i + 1 });
		fleet.back().setName("ship " + std::to_string(i));
		fleet.back().print();
	}

	system("PAUSE");

	return 0;
}

