#include <iostream>
using namespace std;

int main(void){
	int a, b; 
	
	cout << "��ֱ�����A��B��ȭ���(1:ʯͷ, 2:����, 3:��)��";
	cin >> a;
	cin >> b;
	if(a < 1 || a > 3 || b < 1 || b > 3){
		cout << "���������Ϣ����"; 
	}else{
		switch(a - b){
		case 2 :
		case -1 :
			cout << "Aʤ��";
			break;
		case 1 :
		case -2 :
			cout << "Bʤ��";
			break;
		case 0:
			cout << "ƽ�֣�";
		}
	}
	return 0;
}
