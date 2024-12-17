#include<iostream>
using namespace std;
void bubblesort(int* arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				int temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main() {
	int n;
	cout << "input the numbers of arr:";
	cin >> n;
	int* arr = new int[n];
	cout << "please input n numbers:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	bubblesort(arr, n);
	cout << "after what you do" << endl;
	for (int i = 0; i < n; i++) {
		cout << *(arr + i) << " ";
	}
	cout << endl;
	delete[]arr;
	return 0;
}