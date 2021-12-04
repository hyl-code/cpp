#include <iostream>
using namespace std;
template<class T>
class Stack{
private:
	T *elem;
	int size;
	
public:
	Stack(int = 100);
	bool empty();
	T peak();
	void push(T value);
	T pop();
	int getSize();
};

template <class T>
Stack<T>::Stack(int size){
	this->size = size;
	elem = new T[size];
}

template <class T>
bool Stack<T>::empty(){
	if(size == 0){
		return 1;
	}else{
		return 0;
	}
}

template <class T>
void Stack<T>::push(T value){
	elem[size++] = value;
}

template <class T>
T Stack<T>::peak(){
	return *elem;
}

template <class T>
T Stack<T>::pop(){
	T val;
	if(!empty()){
		val = *elem++;
		size--;
	}	
	return val;
}

template<class T>
int Stack<T>::getSize(){
	cout << "请输入该栈初始大小:";
	cin >> size;
	return size;
}

int main(){
	Stack<int> s1;
	Stack<double> s2;
	int size1 = s1.getSize(), size2 = s2.getSize();
	if(s1.empty()){
		s1.push(1);
		cout << s1.peak() << endl;
	}else{
		cout << "Fail" << endl;
	}
	if(s2.empty()){
		s2.push(1.0);
		cout << s2.peak() << endl;
	}else{
		cout << "Fail" << endl;
	}
	return 0;
}

