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
		cout<<"��������Ҫ�жϵ�����:";
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
	
	cout<<"������һ������:";
	value = myInteger.getValue();
	if(myInteger.isEven(value))
		cout<<"������ż��"<<endl;
	else
		cout<<"��������ż��"<<endl;
	
	if(myInteger.isPrime(value))
		cout<<"����������"<<endl;
	else
		cout<<"������������"<<endl; 
	
	cout<<"��������Ҫ�жϵ�����:";
	cin>>n;
	if(myInteger.equals(n))
		cout<<"�������"<<endl; 
	else
		cout<<"���������"<<endl; 
	
	if(myInteger.equals(num))
		cout<<"�������"<<endl; 
	else
		cout<<"���������"<<endl; 
		
	return 0;
	
}
