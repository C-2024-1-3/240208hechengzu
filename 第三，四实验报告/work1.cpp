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
	cout << "请输入a,b" << endl;
	cin >> a >> b;
	int c = (a > b) ? b : a;
	cout << "两数的最大公约数为：" << endl;
	cout << max_n(a, b, c);
	cout << "两数的最小公倍数为:" << endl;
	cout << min_n(a, b, c);
	return 0;