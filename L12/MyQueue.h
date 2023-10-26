#pragma once
template <typename T>
class MyQueue {
private:
	T* array = nullptr;
	int capacity = 0;
	int sizeQueue = 0;
public:
	MyQueue(int capacity) {
		this->capacity = capacity;
		array = new T[capacity];
	}

	template <typename T>
	MyQueue(MyQueue<T>& st) {
		this->capacity = capacity;
		this->sizeQueue = sizeQueue;
		this->array = new T[capacity];
		for (int i = 0; i < sizeQueue; i++) {
			array[i] = st.array[i];
		}
	}

	template <typename T>
	void operator =(MyQueue<T>& st) {
		this->capacity = capacity;
		this->sizeQueue = sizeQueue;
		this->array = new T(capacity);
		for (int i = 0; i < sizeQueue; i++) {
			array[i] = st.array[i];
		}
	}

	~MyQueue() {
		delete[] array;
	}

	int size() {
		return sizeQueue;
	}

	bool empty() {
		return sizeQueue;
	}

	void push(T value) {
		if (sizeQueue < capacity) {
			array[sizeQueue++] = value;
		}
	}

	T pop() {
		if (sizeQueue > 0) {
			T el = array[0];
			for (int i = 0; i < sizeQueue; i++) {
				array[i] = array[i + 1];
			}
			sizeQueue--;
			return el;
		}
		else {
			return NULL;
		}
	}

	T Back() {
		if (sizeQueue != 0) {
			return array[sizeQueue - 1];
		}
		else {
			return NULL;
		}
	}

	T Front() {
		if (sizeQueue > 0) {
			return array[0];
		}
		else {
			return NULL;
		}
	}
};