#include <iostream>
using namespace std;


/* or use std::stack */
template <typename T>
class Stack {
	enum { size = 100 };
	T data[size];
	int len;
public:
	Stack(): len(0) { }
	int length() { return len; }
	void push(T t) 
	{ 
		if (len < size)
			data[len++] = t;
	}
	T pop() 
	{ 
		if (len > 0)
			return data[--len]; 
		else
			return 0;
	}
	void print() 
	{
		int i;
		for (i = 0; i < len; i++)
			cout << data[i] << "\t";
		cout << endl;
	}
};

template <typename T>
void AddToStackButtom(Stack<T>& stack, int i)
{
	if (stack.length() == 0) {
		stack.push(i);
	} else {
		T temp = stack.pop();
		AddToStackButtom(stack, i);
		stack.push(temp);
	}
}

template <typename T>
void ReverseStack(Stack<T>& stack)
{
	if (stack.length()) {
		T temp = stack.pop();
		ReverseStack(stack);
		AddToStackButtom(stack, temp);
	}
}

int main()
{
	int i;
	Stack<int> stack;
	
	for(i = 1; i <= 10; i++)
		stack.push(i);
	stack.print();

	ReverseStack(stack);
	stack.print();

	getchar();
	return 0;
}
