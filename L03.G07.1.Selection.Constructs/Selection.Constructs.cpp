#include <iostream>

using namespace std;

int main() {

	int health;
	cin >> health;

	if (health <= 0)
	{
		cout << "Fatality!" << endl;
	}
	else if (health == 1)
	{
		cout << "Finish him!" << endl;
	}
	else
	{
		cout << "Fight!" << endl;
	}
	bool isTrue{ true };
	//if (isTrue != true) {} //<-- this is bad!
	//if (!isTrue) //<--Good!
	
	switch (health)
	{
	case 0:
		cout << "Fatality!" << endl;
		break;
	case 1:
		cout << "Finish him!" << endl;
		break;
	default:
		cout << "Fight!" << endl;
		break;
	}
	enum class Colors { Red, Green, Blue, Orange };
	int x = static_cast<int>(Colors::Green);
	std::cout << x;
	Colors flower{ Colors::Blue };
	x = (int)flower;
	flower = (Colors)3;
	
	enum class Life { dead, almostDead };

	switch ((Life)health)
	{
	case Life::dead:
		cout << "Fatality!" << endl;
		break;
	case Life::almostDead:
		cout << "Finish him!" << endl;
		break;
	default:
		cout << "Fight!" << endl;
		break;
	}

	system("PAUSE");

	return 0;

}