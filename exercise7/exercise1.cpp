#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

struct Point{
	int x;
	int y;
}; 

class Rule1{
	public:
		bool operator()(const int & a1, const int & a2){
			return a1 % 10 < a2 % 10;
		}
};

class Rule2{
	public:
		bool operator()(const Point & p1, const Point & p2){
			double s1, s2;
			s1 = sqrt(p1.x * p1.x + p1.y * p1.y);
			s2 = sqrt(p2.x * p2.x + p2.y * p2.y);
			if(s1 != s2)
				return s1 < s2;
			else if(p1.x != p2.x)
				return p1.x < p2.x;
			else
				return p1.y < p2.y;
		}
};


int main(){
	int a[8] = {6, 5, 55, 23, 3, 9, 87, 10};
	sort(a, a + 8, Rule1());
	for(int i = 0; i < 8; ++i)
		cout << a[i] << ",";
	cout << endl;
	Point ps[8] = {{1, 0}, {0, 1}, {0, -1}, {-1, 0}, {1, -1}, {1, 1}, {2, 0}, {-2, 0}};
	sort(ps, ps + 8, Rule2());
	for(int i = 0; i < 8; ++i)
		cout << "(" << ps[i].x << "," << ps[i].y << ")";
	return 0;
}
