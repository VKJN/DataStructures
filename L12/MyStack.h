#pragma once
template <typename T>
class MyStack {
private:
	T* array = nullptr;
	int capacity = 0;
	int sizeStack = 0;
public:
	MyStack(int capacity) {
		this->capacity = capacity;
		array = new T[capacity];
	}

	template <typename T>
	MyStack(MyStack<T>& st) {
		this->capacity = capacity;
		this->sizeStack = sizeStack;
		this->array = new T[capacity];
		for (int i = 0; i < sizeStack; i++) {
			array[i] = st.array[i];
		}
	}

	template <typename T>
	void operator =(MyStack<T>& st) {
		this->capacity = capacity;
		this->sizeStack = sizeStack;
		this->array = new T[capacity];
		for (int i = 0; i < sizeStack; i++) {
			array[i] = st.array[i];
		}
	}

	~MyStack() {
		delete[] array;
	}

	T top() {
		return array[sizeStack - 1];
	}

	int size() {
		return sizeStack;
	}

	bool empty() {
		return sizeStack;
	}

	void push(T value) {
		if (sizeStack < capacity) {
			array[sizeStack++] = value;
		}
	}

	T pop() {
		if (sizeStack > 0) {
			sizeStack--;
			return array[sizeStack];
		}
		else {
			return NULL;
		}
	}
};