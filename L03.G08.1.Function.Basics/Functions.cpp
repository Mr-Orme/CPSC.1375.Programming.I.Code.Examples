/*
 * File: addfunction.cpp
 * Author: Keith Bush (2013)
 */

#include<iostream>

int addTwoNumbers(int, int);

bool isItCraps(int num2Check);

int main(){

	int sum=0, n1=0, n2=0;
	while( !isItCraps(sum) ){
		
		std::cout << "Enter two numbers on the range [0,6]: ";
		std::cin >> n1 >> n2;
		sum = addTwoNumbers(n1%7,n2%7);
	}

	std::cout << "Craps!" << std::endl;

	system("PAUSE");

	return 0;
}
//int num1 {n1%7};
int addTwoNumbers(int num1, int num2) {
	return(num1 + num2);
}

bool isItCraps(int num2Check)
{

	if (num2Check == 7 || num2Check == 11)
	{
		num2Check = 0;
		return true;
	}
	else
	{
		num2Check = 1;
		return false;
	}
	std::cout << "passed the if";
}