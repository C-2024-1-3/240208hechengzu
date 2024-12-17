#pragma once
bool is_valid(double side1, double side2, double side3);
double _area(double side1, double side2, double side3);
#include<cmath>
#include"mytriangle.h"
bool is_valid(double side1, double side2, double side3) {
	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
		return true;
	}
	else return false;
}
double _area(double side1, double side2, double side3) {
	double s = (side1 + side2 + side3) / 2;
	return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}
#include<iostream>
#include"mytriangle.h"

using namespace std;
int main() {
	double side1, side2, side3;
	cout << "���������߳���" << endl;
	cin >> side1 >> side2 >> side3;
	bool a = is_valid(side1, side2, side3);
	if (a == true) {
		cout << "���������߳�Ϊ:" << side1 << ' ' << side2 << ' ' << side3 << endl;;
		cout << "�����ε����Ϊ" << _area(side1, side2, side3);
	}
	else {
		cout << "������������" << endl;
	}
	return 0;
}
