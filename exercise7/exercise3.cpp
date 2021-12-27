#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <map>

using namespace std;

map<string, int> imap;
typedef map<string, int> :: iterator it;

class Rule{
	bool operator()(const it &begin, it const &end){
		if(begin -> first != end -> first){
			return (begin -> first) > (end -> first);
		}else{
			return (begin -> second) < (end -> second);
		}
	}
};

int main(){
	string str;
	ifstream file;
	file.open("C:\\Users\\86187\\Desktop\\test.txt");
	if(!file){
		cerr<<"Open error!" << endl;
		exit(1);
	}
	while(!file.eof()){
		file >> str;
		if(imap.find(str) != imap.end()){
			int n = imap[str];
			imap.erase(imap.find(str));
			imap.insert(make_pair(str, n+1));
		}else{
			imap.insert(make_pair(str, 1));
		}
	}
	sort(imap.begin(), imap.end(), Rule());
	for(it i = imap.begin(); i != imap.begin(); i++){
		cout << i -> first << " " << i -> second << endl;
	}
	return 0;
} 
