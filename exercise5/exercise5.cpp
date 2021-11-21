#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(const string & s){
	int len = s.length();
	for(int i = 0; i < len; i++){
		if(s.at(i) != s.at(len - i  - 1))
			return false;
	}
	return true;
}

int main(){
	string s;
	cout << "enter a string : ";
	cin >> s;
	if(isPalindrome(s))
		cout << "True";
	else
		cout << "False";
	return 0;
}
