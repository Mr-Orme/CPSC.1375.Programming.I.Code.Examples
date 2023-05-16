#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> myVector;

	//insert random values into the vector.
	for (int i{ 0 }; i < 20; i++)
	{
		myVector.push_back(rand());
	}

	sort(myVector.begin(), myVector.end());

	int key{ 0 };
	cout << "What number would you like to serach for: ";
	cin >> key;

	int left{ 0 };
	int right{ (int)myVector.size() - 1 };
	int mid = (right + left) / 2;

	while (right >= left && myVector.at(mid) != key)
	{
		if (myVector.at(mid) > key)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
		mid = (right + left) / 2;
	}

	if (right < left)
	{
		cout << key << " is not in the vector\n";
	}
	else
	{
		cout << key << " is in slot " << mid << " in the vector!\n";
	}
	system("PAUSE");
}