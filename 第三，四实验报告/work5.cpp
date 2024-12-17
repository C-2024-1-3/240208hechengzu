#include<iostream>
using namespace std;
int fac(int a) {
	int t;
	if (a == 10) {
		t = 1;
	}
	else {
		t = (fac(a + 1) + 1) * 2;
	}
	return t;
}
int main() {
	int b;
	cout << "请输入天数" << endl;
	cin >> b;
	if (b >= 1 && b <= 10)
		cout << "该天的桃子数为" << fac(b) << endl;
	else
		cout << "default";
	return 0;
}