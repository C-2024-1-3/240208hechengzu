#include<iostream>
using namespace std;
int main() {
	bool lockers[100] = { false };
	for (int n = 1; n <= 100; n++) {
		for (int i = n - 1; i < 100; i += n) {
			lockers[i] = !lockers[i];
		}
	}
	for (int i = 0; i < 100; i++) {
		if (lockers[i]) {
			cout << i + 1 << " ";
		}
	}
}