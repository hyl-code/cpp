#include <iostream>
using namespace std;  

int binarySearch(int list[], int key, int arraySize){
	int left = 0;
	int right = arraySize - 1;
	
	while(left < right){
		if(key == list[right]){
			return right;
		}else if(key == list[left]){
			return left;
		}else{
			left++;
			right--;
		}
	}
	
	return -1;
}

int main(void){
	int list[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int key;
	int res;
	
	cout << "��������Ҫ����������";
	cin >> key;
	res = binarySearch(list, key, 10);
	if(res == -1){
		cout << "����������������������С�"; 
	}else{
		cout << "���������λ�ڣ�" << key + 1 << endl;
	}
	
	return 0;
}
