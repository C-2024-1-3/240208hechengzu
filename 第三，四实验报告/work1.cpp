#include<iostream>                                        
using namespace std;
int max_n(int m, int n, int& d) {
	for (int i = d; ; d--) {
		if (m % d == 0 && n % d == 0)
			break;
	}
	return d;
}
int min_n(int a, int b, int c) {
	return (a * b) / c;
}
int main() {
	int a, b;
	cout << "������a,b" << endl;
	cin >> a >> b;
	int c = (a > b) ? b : a;
	cout << "���������Լ��Ϊ��" << endl;
	cout << max_n(a, b, c);
	cout << "��������С������Ϊ:" << endl;
	cout << min_n(a, b, c);
	return 0;