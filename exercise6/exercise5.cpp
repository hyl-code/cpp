#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Array{
public:
	string op;
	int *p;
	int num;
	int code;
	
	void build(){
		cin >> code;
	}
	
	void add(int *p){
		cin >> num;
		*p++ = num;
	}
	
	void merge(Array a2){
		int *temp;
		temp = p;
		while(p != NULL){
			p++;
		}
		while(a2.p != NULL){
			int *temp2;
			temp2 = a2.p++;
			*p++ = *(temp2);
			delete temp;
		}
		p = temp;
	}
	
	int Length(){
		int *temp, len = 0;
		temp = p;
		while(p != NULL){
			p++;
			len++;
		}
		return len;
	}
	
	void unique(){
		int *temp;
		temp = p;
		int len = Length();
		sort(p, p + len);
		while(temp != NULL){
			if(*p == *(p+1)){
				int *temp2;
				temp2 = p+1;
				while(temp2 != NULL){
					*temp2 = *(temp2+1);
				}
				delete temp2;
			}
		}
		p = temp;
	}
	
	void out(){
		sort(p, p + Length());
		for(int i = 0; i < Length(); i++){
			cout << *p++ << " "; 
		}
		cout << endl;
	}
};

int main(){
	int n = 0;
	int code = 0;
	int num = 0;
	Array *a;
	cin >> n;
	while(n > 0){
		string op;
		cin >> op;
		if(op == "new"){
			Array t = *(a+1);
			t.build();
		}else if(op == "add"){
			cin >> code;
			cin >> num;
			Array t = *a;
			while(t.code == code){
				t.p++;
				*(t.p) = num;
			}			
		}else if(op == "merge"){
			int code2 = 0;
			Array a2, t;
			Array *h;
			h = a;
			a2 = *a;
			t = *a;
			cin >> code;
			cin >> code2;
			while(t.code == code){
				t = *a++;
			}	
			while(a2.code == code2){
				a2 = *a++;
			}	
			(*a).merge(a2);
			a = h;
		}else if(op == "unique"){
			cin >> code;
			Array t;
			Array *h;
			t = *a;
			while(t.code == code){
				t = *a++;
			}
			t.unique();
			a = h;
		}else if(op == "out"){
			cin >> code;
			Array t;
			Array *h;
			t = *a;
			while(t.code == code){
				t = *a++;
			}
			t.out();
			a = h;
		}
		n--;
	}
	return 0;
}
