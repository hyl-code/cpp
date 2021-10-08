#include <iostream>
using namespace std;

class MyInteger{
private:
	int value;
	
public:
	MyInteger(){
		value = 0;
	}
	
	int getValue(){
		cin>>value;
		return value;
	}
	
	bool isEven(int value){
		if(value % 2 == 0)
			return true;
		else
			return false;
	}
	
	bool isPrime(int value){
		int i;
		for(i = 2; i < value;i++){
			if(value % i == 0){
				return false;
			}
		}
		return true;
	}
	
	bool equals(int num){
		if(value == num)
			return true;
		else
			return false;
	}
	
	bool equals(MyInteger &num){
		cout<<"请输入需要判断的整数:";
		if(num.getValue() == value)
			return true;
		else
			return false;
	}
};

int main(void){
	MyInteger myInteger;
	MyInteger num;
	int value; 
	int n; 
	
	cout<<"请输入一个整数:";
	value = myInteger.getValue();
	if(myInteger.isEven(value))
		cout<<"该数是偶数"<<endl;
	else
		cout<<"该数不是偶数"<<endl;
	
	if(myInteger.isPrime(value))
		cout<<"该数是质数"<<endl;
	else
		cout<<"该数不是质数"<<endl; 
	
	cout<<"请输入需要判断的整数:";
	cin>>n;
	if(myInteger.equals(n))
		cout<<"两数相等"<<endl; 
	else
		cout<<"两数不相等"<<endl; 
	
	if(myInteger.equals(num))
		cout<<"两数相等"<<endl; 
	else
		cout<<"两数不相等"<<endl; 
		
	return 0;
	
}
