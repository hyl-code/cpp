#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

#define NUM 5

int comp(const void*a,const void*b){
	return *(unsigned int*)a % 10 -*(unsigned int*)b % 10;
}

int main(void){
	int i;
	unsigned int num[NUM];
	
	cout << "������һ����������: ";
	
	for(i = 0; i < NUM; i++){
		cin >> num[i];
	}
	
	cout << endl;
	
	qsort(num, NUM, sizeof(unsigned int), comp);
	
	cout << "���к���Ϊ�� ";
	for(i = 0; i < NUM; i++){
		cout << num[i] << " ";
	}
	
	return 0;
}
