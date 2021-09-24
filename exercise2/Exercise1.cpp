#include <iostream>
#include <math.h>
using namespace std;

class Ctriangle{
public:
		double a, b, c;
		double S, C;
	
		void input(){
			cout<<"请依次输入三角形三条边:";
			cin >> a >> b >> c;
		}
	
		void area(double a, double b, double c){
			double p = (a+b+c) / 2;
			S = sqrt(p*(p-a)*(p-b)*(p-c));
			cout<<"三角形的面积为: "<<S<<endl;
		}
	
		void perimeter(double a, double b, double c){
			C = a + b + c;
			cout<<"三角形的周长为: "<<C<<endl;
		}
};

/*
int main(){
	Ctriangle tri;
	
	tri.input();
	tri.area(tri.a, tri.b, tri.c);
	tri.perimeter(tri.a, tri.b, tri.c);
	
	return 0;
}
*/

