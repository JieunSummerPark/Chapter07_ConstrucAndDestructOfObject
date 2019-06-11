#include <iostream>
using namespace std;

struct Point {
	int x, y;
	Point(int xx = 0, int yy=0): x(xx),y(yy){}
	void print() { cout << "\t(" << x << "," << y << ")\n"; }
};