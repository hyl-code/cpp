#include <iostream>
using namespace std;

int main(void){
	int num[3][3];
	int res[3][3];
	int i, j;
	
	cout << "������һ��3*3�Ķ�ά���飺" << endl;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			cin >> num[i][j];
		}
	}
	cout << endl;
	
	for(j = 0; j < 3; j++){
		res[j][2] = num[0][j];
	}//�� 1 �� ��ת 
	
	for(j = 0; j < 3; j++){
		res[j][1] = num[1][j];
	}//�� 2 �� ��ת
	
	for(j = 0; j < 3; j++){
		res[j][0] = num[2][j];
	}//�� 3 �� ��ת 
	
	cout << "��ת90�����Ϊ��" << endl;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
	
	
}
