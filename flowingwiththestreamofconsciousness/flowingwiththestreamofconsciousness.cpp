﻿#include <iostream>
#include <vector>
#include <Windows.h>

using namespace std;

//class test {
//public:
//	test() {
//		cout << "뭡니까" << endl;
//	}
//	void aririhe() {
//		cout << "암거나 말해봐" << endl;
//		cin >> arihee;
//		cout << "나가" << endl;
//	}
//private:
//	int arihe;
//	string arihee;
//};

void test() {
	int n, x;
	cin >> n >> x;
	if(x % n == 0){
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}
}

void ez() {
	int x = 0;
	cin >> x;
	while (x != 0) {
		for (int i = 0; i < x; i++) {
			cout << "*";
		}
		cout << endl;
		x--;
	}
}

void test2() {
	string r;
	cin >> r;
	vector<char>a;
	a.resize(r.length());
	for (int i = 0; i < r.length(); i++) {
		a[i] = r[i];
	}
}

void vectorExcercize() {
	vector<int> a;
	a.resize(5);

	for (int i = 0; i < 5; i++) {
		a[i] = i;
	}

	vector<vector<int>> b;
	b.resize(5);
	for (int i = 0; i < 5; i++) {
		b[i].resize(5);
	}

	vector<vector<vector<int>>> c;
	c.resize(5);
	for (int i = 0; i < 5; i++) {
		c[i].resize(5);
		for (int x = 0; x < 5; x++) {
			c[x].resize(5);
		}
	}
}	

//// 빼기 1 하고 출력하기 => 0 될때까지
//void recursive(int a) {
//	a = a - 1;
//	if (a <= 0) {
//		return;
//	}
// no

int digit(long a) {
	a = a / 10;
	if (a <= 0) {
		return 1;
	}
	else {
		int count = 0;
		count = 1 + digit(a);
		return count;
	}
}

 //5! => 5*4*3*2*1=120	
int gimme(int a) {
	if (a <= 1) {
		return 1;
	}
	else {
		return a * gimme(a - 1);
	}
}
//


int digitAdd(int a) {
	if (a < 10) {
		return a;
	}
	else {
		return digitAdd(a / 10) + a % 10;
	}
}


// horse파워
// 바퀴
// 좌석
// 문
// 
class vehicle {
public:
	vehicle(int _horsepower, int _wheels, int _doors, int _seats) {
		horsepower = _horsepower;
		wheels = _wheels;
		doors = _doors;
		seats = _seats;
	};
	vehicle(int _wheels, int _doors, int _seats) {
		wheels = _wheels;
		doors = _doors;
		seats = _seats;
	}
	~vehicle() {
		cout << "I am 소멸자" << endl;
	};


	void okgetin() {
		seats--;
		if (seats >= 200) {
			cout << "GTFOmyBUSbich" << endl;
			seats = 200;
		}
	}

	void GTFOmyBUSbich() {
		seats++;
		if (seats <= 0) {
			seats = 0;
		}
	}

	void printSeat() {
		cout << "No of seats: " << seats << endl;
	}

	void go() {
		speed++;
		cout << "speed:" << speed << endl;
	}
	void stop() {
		speed--;
		cout << "speed:" << speed << endl;
	}
protected:
	int horsepower;
	int wheels;
	int doors;
	int seats;
	float speed = 0;
private:
};


/*
낮선 사람 sdf
엄마
나
public: 낮선 사람, 엄마 나 다 사용 가능
protected: 엄마, 나만 사용 가능
private: 다나만 사용 가능
*/

string numberOnly(string a) { // 고냥 void 말고 string 해도 되겟징
	string arihe;

	for (int i = 0; i < a.length(); i++) {
		if (isdigit(a[i])) {
			arihe += a[i];
		}
	}
	//
	return arihe;
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void namesearch(string name) {
//ddddsfd
}

int main() {
	cout << "1번" << endl;
	cout << numberOnly("A1B2C3") << endl;
	cout << numberOnly("q234k24k7l") << endl;

	cout << "2번" << endl;
	int a = 10;
	int b = 20;
	cout << "스왑 전: A: " << a << " B: " << b << endl;
	swap(&a, &b);
	cout << "스왑 후: A: " << a << " B: " << b << endl;

	
}