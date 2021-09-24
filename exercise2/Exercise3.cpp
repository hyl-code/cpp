#include <iostream>
#define PI 3.14159
using namespace std;

class Circle{
	double r;
	
	void setR(){
		cin>>r;
	}
	
	double area(int r){
		return r*r*PI;
	}
	
	double sum(Circle circleArray[], int size){
		double sum;
		
		for(int i = 0; i < size; i++){
			sum += circleArray[i].area();
		}
		return sum;
	}
};
