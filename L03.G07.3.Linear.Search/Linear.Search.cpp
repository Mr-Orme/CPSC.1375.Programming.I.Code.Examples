#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> myVector;

	//insert random values into the vector.
	for (int i{ 0 }; i < 20; i++)
	{
		myVector.push_back(rand());
	}

	int key{ 0 };
		cout << "What number would you like to search for: ";
	cin >> key;

	{
		int i{ 0 };
		/*while (i < myVector.size() && myVector[i] != key)
		{
			i++;
		}*/
		for (
			i =  0; 
			i < myVector.size() && myVector.at(i) != key; 
			i++)
		{
		}

		if (i >= myVector.size())
		{
			cout << key << " is not in the vector!\n";
		}
		else
		{
			cout << key << " was found in slot " << i << " of the vector!\n";
		}

	}
	system("PAUSE");
}