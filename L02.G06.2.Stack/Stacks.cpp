#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//FILO: First in last out
	vector<int> stack;
	stack.push_back(1);
	stack.push_back(2);
	stack.push_back(3);

	cout << stack.size() << endl;
	
	cout << stack.back() << endl;
	stack.pop_back();
	cout << stack.size() << endl;
	stack.push_back(7);
	cout << stack.back() << endl;
	stack.pop_back();
	cout << stack.size() << endl;

	cout << stack.back() << endl;
	stack.pop_back();
	cout << stack.size() << endl;

	system("PAUSE");
}