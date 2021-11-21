#include<iostream>
#define PI 3.14
class Shape{
public:
	virtual double area();
}; 

class Rectangle : public Shape{
private:
	double height;
	double width;
public:
	Rectangle(double h, double w){
		height = h;
		width = w;
	}
	
	virtual double area(){
		return width * height;
	}
	
	bool operator ==(Rectangle r){
		if(r.area() == area())
			return 1;
		else
			return 0;
	}
};

class Circle : public Shape{
private:
	double r;
public:
	Circle(double radius){
		r = radius;
	}
	
	virtual double area(){
		return r * r * PI;
	}
};
