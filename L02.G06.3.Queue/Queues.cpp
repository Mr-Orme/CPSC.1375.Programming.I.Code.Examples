#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//FIFO: Fist In First Out
	vector<int> queue;
	queue.push_back(1);
	queue.push_back(2);
	queue.push_back(3);

	cout << queue.size() << endl;

	cout << queue.front() << endl;
	queue.erase(queue.begin());
	cout << queue.size() << endl;

	cout << queue.front() << endl;
	queue.erase(queue.begin());
	cout << queue.size() << endl;

	cout << queue.front() << endl;
	queue.erase(queue.begin());
	cout << queue.size() << endl;

	system("PAUSE");
}