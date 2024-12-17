#include<iostream>
#include<string>
using namespace std;
int indexof(const string& s1, const string& s2) {
	int len1 = s1.size();
	int len2 = s2.size();
	for (int i = 0; i <= len2 - len1; i++)
	{
		int j;
		for (j = 0; j < len1; j++) {
			if (s2[i + j] != s1[j])
			{
				break;
			}
		}
		if (j == len1) {
			return i;
		}



	}
	return -1;
}
int main() {
	string s1, s2;
	cout << "enter the first string:";
	getline(cin, s1);
	cout << "enter the second string:";
	getline(cin, s2);
	int result = indexof(s1, s2);
	cout << result;
	return 0;
}