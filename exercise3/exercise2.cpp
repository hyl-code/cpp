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
		cout<<"�������ջ��ʼ��С:";
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
		cout<<"��ջΪ��!"<<endl;	
	}
	
	cout<<"������Ҫ�������ֵ:";
	cin>>value;
	if(value == stack.push(value))
		cout<<"����ɹ�!"<<endl;
	else
		cout<<"����ʧ��!"<<endl;

	if(stack.peek() == value){
		cout<<"����Ϊ"<<value<<endl;
		num = stack.pop();
		cout<<"����Ϊ"<<num<<",ɾ���ɹ�!"<<endl; 
	}
	
	return 0;
	
}
