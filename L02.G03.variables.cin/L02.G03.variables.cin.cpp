// File: add.cpp
//Author: Keith Bush (2013)


#include<iostream>
#include<string>

int main(){

	//int num1;
	std::cout << sizeof(int) << std::endl;
	int num1{};//{} initializes the variable with 0
	std::cout << sizeof(num1) << std::endl;
	std::cout << sizeof(float) << std::endl;
	std::cout << sizeof(double) << std::endl;
	
	int num2{};
	std::string name;
	std::cout << "Enter 2 integers: ";
	std::cin >> num1 >> num2;
	std::cout << "enter your name: ";
	std::cin >> name;
	std::cout << std::endl << name << std::endl;
	//num1 = false;
	//cin >> num2;

	//use {} initialization to differentiate from 
	//assignment.
	int sum{ num1 + num2 };
	//sum = num1 + num2;

	std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << std::endl;

	system("PAUSE");

	return 0;

}