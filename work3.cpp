#include<iostream>
using namespace std;
class Cyboid {
private:
	double length;
	double width;
	double height;
	double v;
public:
	Cyboid(double a, double b, double c) {
		length = a;
		width = b;
		height=c;
	}
	void volume() {
		 v = length * width * height;
	}
	void show() {
		cout << "the valume of it is:" << v << endl;
	}
};
int main() {
	Cyboid m(10, 20, 30);
	m.volume();
	m.show();
	Cyboid n(12, 24, 37);
	n.volume();
	n.show();
	Cyboid k(14, 21, 33);
	k.volume();
	k.show();
	return 0;
}