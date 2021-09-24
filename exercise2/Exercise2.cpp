#include <iostream>
using namespace std; 

class Point{
private:
	int x;
	int y;

public:
	void setXY(){
		cin>> x >> y;
	}
	
	double distance(const Point &p){
		int res;
		
		res = sqrt(pow(x - p.x),2) + pow(y - p.y, 2));
		
		return res;
	}
};
