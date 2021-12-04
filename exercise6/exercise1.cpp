#include <iostream>
#include <algorithm>
using namespace std;
template<class T>
bool check(T *array, int len){
	T *temp;
	for(int i = 0; i < len; i++){
		array[i] = temp[i];
	}
	sort(temp, temp + len);
	for(int i = 0; i < len; i++){
		if(array[i] != temp[i]){
			return 0;
		}
	}
	return 1;
}

int main(){
	int ai1[4] = {1, 2, 3, 4};
	int ai2[4] = {4, 7, 9, 2};
	cout<<1<<".outcome:"<<endl;
	cout<<"    "<<check(ai1, 4)<<endl;
	cout<<"    "<<check(ai2, 4)<<endl;
	double ad1[4] = {1.0, 2.0, 3.0, 4.0};
	double ad2[4] = {5.0, 3.0, 1.0, 2.0};
	cout<<"    "<<check(ad1, 4)<<endl;
	cout<<"    "<<check(ad2, 4)<<endl;
	return 0;
}
