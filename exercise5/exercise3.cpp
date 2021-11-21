#include<iostream>
using namespace std;
class Employee{
private:
	char *m_name;
	char *m_no;
public:
	Employee(char *name, char *no){
		cout<<"Employee��Ĺ��캯�����ã�"<<endl;
		m_name = name;
		m_no = no;
	}
	
	void display(){
		cout<<"������"<<m_name<<endl;
		cout<<"Ա����ţ�"<<m_no<<endl; 
	}
	
	~Employee(){
		delete m_name;
		delete m_no;
		cout<<"Employee��������������ã�"<<endl;
	}
};

class Leader : public Employee{
private:
	char *m_posdes;
public:
	Leader(char *name, char *no, char *posdes) : Employee(name, no){
		cout << "Leader��Ĺ��캯�����ã�" << endl;
		m_posdes = posdes;
		
	}
	
	void display(){
		Employee :: display();
		cout<<"ְλ������"<<m_posdes;
	}
	
	~Leader(){
		delete m_posdes;
		cout<<"Leader��������������ã�"<<endl;
	}
}; 

int main(){
	Employee *pe = new Leader("����", "0001", "���ž���");
	pe->display();
	delete pe;
	return 0; 
}
