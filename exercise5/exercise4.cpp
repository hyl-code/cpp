#include<iostream>
#include<string>
using namespace std;
string commonChars(const string& s1, const string& s2){
	int len1 = s1.length(), len2 = s2.length();
	string res = "";
	for(int i = 0; i < len1; i++){
		for(int j = 0; j < len2; j++){
			if(s1.at(i) == s2.at(j)){
				res.append(s1, i, 1);
				break;
			}
		}
	}
	return res;
}

int main(){
	string s1, s2;
	cout << "enter a string s1 : ";
	cin >> s1;
	cout << "enter a string s2 : ";
	cin >> s2;
	cout << "the common characters are "<<commonChars(s1, s2);
	return 0;
}
