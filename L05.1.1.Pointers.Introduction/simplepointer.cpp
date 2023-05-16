
#include <iostream>

using namespace std;
struct Vector2D
{
	int x{ 0 };
	int y{ 0 };
};

int main() {


	int i{ 5 };//i[5] @ memory address 128adb83

	int* p{ nullptr }; //p -->
	p = &i;// p --> i

	cout << &i << endl; //memory address of i
	cout << p << endl; // address stored in p same as MA stored in i;
	cout << i << endl; // value of i
	cout << *p << endl; // dereferences p and get's us the value stored in i;
	 //p --> i
	//*p --> i[5]

	Vector2D point1{ 1,5 };
	Vector2D* point1a{ &point1 };
	(*point1a).x;
	point1a->y;
	point1a->x = 2;


	system("PAUSE");

	return 0;
}