#include<iostream>
#include<string>
using namespace std;
template <class T>
T ArraySum(T *begin, T *end){
	T sum;
	while(begin != end){
		sum += *begin++;
	}
	return sum;
} 

int main(){
	string array[4] = {"Tomy", "Jack", "Mary", "John"};
	cout << ArraySum(array, array + 4) << endl;
	int a[4] = {1, 2, 3, 4};
	cout << ArraySum(a, a + 4) << endl;
	return 0; 
}
