
#include <iostream>
#include <tuple>
using namespace std;
struct SomeLargeStruct
{
	int x;
	//lot's of other data!
};
struct Answers {
	int sum;
	int product;
};

void addMultiplyTwoNumbers(int num1, int num2, int & sum, int & product);
//prefer struct for multiple out values
Answers addMultiplyTwoNumbers(int, int);//this is an overload!

tuple<int, int> addMultiplyTwoNumberTuple(int, int);
//const reference for large data types!
void foo(const SomeLargeStruct& classInstance)
{

}

int main() {
	
	int sum = 0, n1 = 5, n2 = 7, product = 0;
	addMultiplyTwoNumbers(n1, n2, sum, product);
	cout << sum << " " << product << endl;
	
	Answers answer{ addMultiplyTwoNumbers(n1, n2) };
	auto[ssum, sproduct] = addMultiplyTwoNumbers(n1, n2);
	cout << ssum << " " << sproduct << endl;
	cout << answer.sum << " " << answer.product << endl;
	
	auto[tsum, tproduct] = addMultiplyTwoNumberTuple(n1, n2);
	cout << tsum << " " << tproduct << endl;
	system("PAUSE");

	return 0;
}

void addMultiplyTwoNumbers(int num1, int  num2, int & Psum, int & prod) {
	Psum = num1 + num2;
	prod = num1*num2;
	num1 = 99;
	num2 = 100;

}

Answers addMultiplyTwoNumbers(int num1, int num2)
{
	return { num1 + num2, num1*num2 };
}
//<sum, product>
tuple<int, int> addMultiplyTwoNumberTuple(int num1, int num2)
{
	return { num1 + num2, num1*num2 };
}
