#include <iostream>
using namespace std;

int main(void){
	int num[3][3];
	int res[3][3];
	int i, j;
	
	cout << "请输入一个3*3的二维数组：" << endl;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			cin >> num[i][j];
		}
	}
	cout << endl;
	
	for(j = 0; j < 3; j++){
		res[j][2] = num[0][j];
	}//第 1 行 旋转 
	
	for(j = 0; j < 3; j++){
		res[j][1] = num[1][j];
	}//第 2 行 旋转
	
	for(j = 0; j < 3; j++){
		res[j][0] = num[2][j];
	}//第 3 行 旋转 
	
	cout << "旋转90°后结果为：" << endl;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
	
	
}
