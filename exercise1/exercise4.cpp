#include <iostream>
using namespace std;

int main(void){
	int a, b; 
	
	cout << "请分别输入A、B出拳结果(1:石头, 2:剪刀, 3:布)：";
	cin >> a;
	cin >> b;
	if(a < 1 || a > 3 || b < 1 || b > 3){
		cout << "您输入的信息有误！"; 
	}else{
		switch(a - b){
		case 2 :
		case -1 :
			cout << "A胜！";
			break;
		case 1 :
		case -2 :
			cout << "B胜！";
			break;
		case 0:
			cout << "平局！";
		}
	}
	return 0;
}
