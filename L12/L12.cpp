#include <iostream>
#include "MyStack.h"
#include "MyQueue.h"
#include "MyDequeue.h"
#define test 1
using namespace std;

template <typename T>
void showStack(MyStack<T> stack) {
	while (stack.empty()) {
		cout << stack.pop();
	}
}

int main()
{
#if test == 1
	MyStack<int> stack(10);

	stack.push(3);
	stack.push(4);
	stack.push(7);

	cout << stack.top() << endl;

	showStack(stack);

	cout << endl << stack.top() << endl;

#elif test == 2
	MyQueue<int> queue(5);

	queue.push(2);
	queue.push(5);
	queue.push(8);
	queue.push(9);
	queue.push(12);

	cout << queue.Back() << endl << queue.Front() << endl;
	queue.pop();
	cout << queue.Back() << endl << queue.Front() << endl;

#elif test == 3


#endif 
}