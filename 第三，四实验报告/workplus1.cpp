#include<iostream>
using namespace std;
int main() {
	int num[10];
	int distinct[10];
	int count = 0;
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
		int found = 0;
		for (int j = 0; j < count; j++) {
			if (num[i] == distinct[j]) {
				found = 1;
				break;
			}
		}
		if (!found) {
			distinct[count++] = num[i];
		}

	}
	for (int i = 0; i < count; i++) {
		cout << distinct[i] << " ";
	}
	return 0;
}