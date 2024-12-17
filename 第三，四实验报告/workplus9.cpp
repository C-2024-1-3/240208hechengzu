#include<iostream>
#include<string>
using namespace std;
int parseHex(const char* const hexString) {
	int len = strlen(hexString);
	int decimalnumber = 0;
	int power = 1;
	for (int i = len - 1; i >= 0; i--) {
		int digit;
		if (hexString[i] >= '0' && hexString[i] <= '9') {
			digit = hexString[i] - '0';
		}
		else if (hexString[i] >= 'A' && hexString[i] <= 'F') {
			digit = hexString[i] - 'A' + 10;
		}
		else if (hexString[i] >= 'a' && hexString[i] <= 'f') {
			digit = hexString[i] - 'a' + 10;
		}
		else {
			cout << "default";
		}
		decimalnumber += digit * power;
		power *= 16;
	}
	return decimalnumber;
}
int main() {
	const char* hex = "A5";
	int decimal = parseHex(hex);
	cout << hex << " " << decimal << endl;
	return 0;
}