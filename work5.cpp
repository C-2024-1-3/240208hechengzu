#include<iostream>
using namespace std;
class point {
private:
	int x;
	int y;
public:
	point(int X, int Y) {
		x = X;
		y = Y;
 }
	void setpoint(int i, int j) {
		x += i;
		y+= j;
	}
	void display() {
		cout << x << ' ' << y << endl;
	}
};
int main() {
	point p(60,80);
	p.display();
	p.setpoint(60,80);
	p.display();
}