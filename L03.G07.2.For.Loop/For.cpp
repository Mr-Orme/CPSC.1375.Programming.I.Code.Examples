#include <iostream>
#include <vector>
using namespace std;

int main() {
	/*
	1. Initializer
	2. Conditional
	3. What happens after each loop
	*/
	int numTimes{ 5 };
	//cin >> numTimes;
	
	for (
		int i{ 0 }; 
		i < numTimes; 
		i++)
	{
		
		cout << i << endl;
	}

	{
		int i{ 0 };
		while (i <= numTimes)
		{
			cout << i << endl;
			i++;
		}
	}

	cout << endl;

	//system("PAUSE");

	//return 0;
	vector<int> v;
	for (int i{ 0 }; i < 9; i++)
	{		
		v.push_back(i);
	}

	for (int i{ 0 }; i < v.size(); i++)
	{
		cout << v.at(i) << endl;
	}
		
	//range based for loop
	for (auto myInt : v)
	{
		myInt++;
		cout << myInt << endl;
	}

	system("PAUSE");
}