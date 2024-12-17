#include<iostream>
#include<cctype>
#include<string>
using namespace std;
void count(const string& s, int counts[]) {
	for (char c : s) {
		if (isalpha(c)) {
			char lowerchar = tolower(c);
			counts[lowerchar - 'a']++;
		}
	}
}
int main()
{
	string str;
	int counts[26] = { 0 };
	cout << "enter a string";
	getline(cin, str);
	count(str, counts);
	for (int j = 0; j < 26; j++) {
		if (counts[j] != 0)
			cout << static_cast<char>('a' + j) << ' ' << counts[j] << endl;
	}
	return 0;
}
