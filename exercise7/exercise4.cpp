#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <string>

int main(){
	vector<string> v;
	ifstream srcFile("s.txt",ios::in);
	ofstream destFile("d.txt",ios::out);
	string str;
	while( srcFile >> x )
	    v.push_back(x);
	for(int i = 0; i < v.size(); i++){
		destFile << v[i] << " ";
	}
	destFile.close();
	srcFile.close();
	return 0;
}
