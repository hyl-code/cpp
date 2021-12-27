#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

struct command{
	string op;
	int num;
};

int main(){
	multiset<int> set;
	multiset<int> del;
	multiset<int> :: iterator it;
	int times;
	cin >> times;
	command com[times];
	for(int i = 0; i < times; i++){
		cin >> com[i].op;
		cin >> com[i].num;
	}
	for(int i = 0; i < times; i++){
		if(com[i].op == "add"){
			set.insert(com[i].num);
			cout << set.count(com[i].num) << endl;
		}else if(com[i].op == "del"){
			cout << set.count(com[i].num) << endl;
			while(set.find(com[i].num) != set.end()){
				it = set.find(com[i].num);
				del.insert(com[i].num);
				set.erase(it);								
			}
		}else if(com[i].op == "ask"){
			if(set.find(com[i].num) != set.end() || del.find(com[i].num) != del.end()){
				cout << 1 << " ";
			}else{
				cout << 0 << " ";
			}
			cout << set.count(com[i].num) << endl;
		}
	}
	return 0;
}
