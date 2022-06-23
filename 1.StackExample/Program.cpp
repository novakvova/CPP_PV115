#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int> my_stack;
	my_stack.push(2);
	my_stack.push(3);
	my_stack.push(8);
	my_stack.push(4);
	

	cout << "Stack size: " << my_stack.size()<<"\n";
	int value = my_stack.top();
	cout << "Element top stack: " << value << "\n";
	cout << "Stack size: " << my_stack.size() << "\n";
	my_stack.pop();
	cout << "Stack size pop element: " << my_stack.size() << "\n";
	my_stack.swap(my_stack);
	value = my_stack.top();
	cout << "Element swap top stack: " << value << "\n";

	//cout << "Hello\n";
}