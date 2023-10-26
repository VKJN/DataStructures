#pragma once
template <typename T>
class MyDequeue {
private:
	T* array = nullptr;
	int capacity = 0;
	int sizeDequeue = 0;
public:
	MyDequeue(int capacity) {
		this->capacity = capacity;
		array = new T[capacity];
	}

	template <typename T>
	MyDequeue(MyDequeue<T>& st) {
		this->capacity = capacity;
		this->sizeDequeue = sizeDequeue;
		this->array = new T[capacity];
		for (int i = 0; i < sizeDequeue; i++) {
			array[i] = st.array[i];
		}
	}

	template <typename T>
	void operator =(MyDequeue<T>& st) {
		this->capacity = capacity;
		this->sizeDequeue = sizeDequeue;
		this->array = new T(capacity);
		for (int i = 0; i < sizeDequeue; i++) {
			array[i] = st.array[i];
		}
	}

	~MyDequeue() {
		delete[] array;
	}

	int size() {
		return sizeDequeue;
	}

	bool empty() {
		return sizeDequeue;
	}

	void pushBack(T value) {
		if (sizeDequeue < capacity) {
			array[sizeDequeue++] = value;
		}
	}

	void pushFront(T value) {
		if (sizeDequeue < capacity) {
			for (int i = sizeDequeue; i > 0; i--) {
				array[i] = array[i - 1];
			}
			array[0] = value;
			sizeDequeue++;
		}
	}

	T popBack() {
		if (sizeDequeue > 0) {
			sizeDequeue--;
			return array[sizeDequeue];
		}
		else {
			return NULL;
		}
	}

	T popFront() {
		if (sizeDequeue > 0) {
			T el = array[0];
			for (int i = 0; i < sizeDequeue; i++) {
				array[i] = array[i + 1];
			}
			sizeDequeue--;
			return el;
		}
		else {
			return NULL;
		}
	}

	T Back() {
		if (sizeDequeue != 0) {
			return array[sizeDequeue - 1];
		}
		else {
			return NULL;
		}
	}

	T Front() {
		if (sizeDequeue > 0) {
			return array[0];
		}
		else {
			return NULL;
		}
	}
};