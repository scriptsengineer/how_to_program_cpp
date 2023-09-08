#ifndef STACK_H
#define STACK_H

template <typename T>
class Stack {
public:
	Stack(int = 10);
	~Stack() {
		delete[] stack_ptr;
	}

	bool push(const T &);
	bool pop(T &);

	bool is_empty() const {
		return top == -1;
	}

	bool is_full() const {
		return top == size - 1;
	}

private:
	int size;
	int top;
	T *stack_ptr;
};

template <typename T>
Stack<T>::Stack(int s) :
		size(s > 0 ? s : 10), top(-1), stack_ptr(new T[size]) {
}

template <typename T>
bool Stack<T>::push(const T &push_value) {
	if (!is_full()) {
		stack_ptr[++top] = push_value;
		return true;
	}

	return false;
}

template <typename T>
bool Stack<T>::pop(T &pop_value) {
	if (!is_empty()) {
		pop_value = stack_ptr[top--];
		return true;
	}

	return false;
}

#endif