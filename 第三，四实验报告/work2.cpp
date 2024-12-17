#include<iostream>
using namespace std;
bool is_prime(int num) {
	for (int i = 2; i < num; i++) {
		if (num % i == 0)
		{
			return false;
		}
		else {
			return true;
		}
	}

}
int main()
{
	int count = 0;
	for (int i = 2; i <= 200; i++) {
		if (bool b = is_prime(i)) {
			cout << i << " ";
			count++;
			if (count % 10 == 0)
				cout << endl;
		}
	}
	return 0;
}