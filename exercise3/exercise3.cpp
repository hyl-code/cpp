#include <iostream>
using namespace std;
class StackOfIntegers{
private:
	int *elem;
	int size;
	
public:
	StackOfIntegers(){
		size = 0;
		elem = new int[100];
	}
	
	bool empty(){
		if(size == 0)
			return true;
		else
			return false;
	}
	
	int peek(){
		return *elem;
	}
	
	int push(int value){
		elem[size++] = value;
		return value;
	}
	
	int pop(){
		int n;
		if(!empty()){
			n = elem[size-- - 1];
		} 
		return n;
	}
	
	int getSize(){
		cout<<"请输入该栈初始大小:";
		cin>>size;
		return size;
	}
};

int main(void){
	StackOfIntegers stack;
	int num;
	int i = 2;

	cout<<"请输入一个正整数:";
	cin>>num;
	if(num == 1)
		cout<<num;
	while(num != 1){
		while(num % i == 0){
			num /= i;
			stack.push(i);
		}
		i++;
	}
	while(!stack.empty()){
		cout<<stack.pop()<<" ";
	}
	
	return 0;
}
