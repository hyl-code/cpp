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
			n = *elem--;
			size--;
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
	int size = stack.getSize();
	int value;
	int num;
	
	if(stack.empty()){
		cout<<"该栈为空!"<<endl;	
	}
	
	cout<<"请输入要插入的数值:";
	cin>>value;
	if(value == stack.push(value))
		cout<<"插入成功!"<<endl;
	else
		cout<<"插入失败!"<<endl;

	if(stack.peek() == value){
		cout<<"该数为"<<value<<endl;
		num = stack.pop();
		cout<<"该数为"<<num<<",删除成功!"<<endl; 
	}
	
	return 0;
	
}
