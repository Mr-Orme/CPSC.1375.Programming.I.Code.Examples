#include <iostream>

using namespace std;

int main()
{
	enum Colors {Red, Blue, Green, Orange};
	//enum Colors { Red=1, Blue, Green, Orange };
	enum Lettuce {Iceberg, Red, Green};
	//enum class Colors { Red, Blue, Green, Orange };

	Colors myColor = Red;
	Colors myColor2 = Colors::Red;
	
	Lettuce salad = Green;
	Lettuce salad = Lettuce::Green;

	int x = Blue;
	int y = (int)Red;

	cout << myColor << endl;
	cout << myColor2 << endl;
	cout << x << endl;
	cout << y << endl;

	system("PAUSE");

	return 0;

}