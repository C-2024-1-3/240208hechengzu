#include<iostream>
using namespace std;
class Time {
private:
	int hour;
	int minute;
	int sec;
public:
	void settime(){
		cin >> hour;
		cin >> minute;
		cin >> sec;
		this->hour;
		this->hour;
		this->sec;
	}
	void showtime(){
		cout << hour<<':'<<minute<<":"<<sec;
	}
};
int main() {
	Time t1;
	t1.settime();
	t1.showtime();
	return 0;
}