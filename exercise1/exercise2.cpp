#include <iostream>
using namespace std; 

int main(void){
	int a, b;
	char c;
	
	cout << "请输入需要计算的整数以及操作符（以空格分隔开）：";
	cin >> a;
	cin >> b;
	cin >> c;
	if(c != '+' && c != '-' && c != '*' && c != '/'){
		cout << "Invalid operator!";
	}else if(c == '+'){
		cout << "Result = " << a + b;
	}else if(c == '-'){
		cout << "Result = " << a - b;
	}else if(c == '*'){
		cout << "Result = " << a * b;
	}else if(c == '/'){
		if(b == 0)
			cout << "Divided by zero!";
		else
			cout << "Result = " << a / b;
	}
	
	return 0;
}
