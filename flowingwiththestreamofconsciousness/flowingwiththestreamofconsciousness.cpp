#include <iostream>
#include <vector>
#include <Windows.h>
#include <cstdlib>

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
//class vehicle {
//public:
//	vehicle(int _horsepower, int _wheels, int _doors, int _seats) {
//		horsepower = _horsepower;
//		wheels = _wheels;
//		doors = _doors;
//		seats = _seats;
//	};
//	vehicle(int _wheels, int _doors, int _seats) {
//		wheels = _wheels;
//		doors = _doors;
//		seats = _seats;
//	}
//	~vehicle() {
//		cout << "I am 소멸자" << endl;
//	};
//
//
//	void okgetin() {
//		seats--;
//		if (seats >= 200) {
//			cout << "GTFOmyBUSbich" << endl;
//			seats = 200;
//		}
//	}
//
//	void GTFOmyBUSbich() {
//		seats++;
//		if (seats <= 0) {
//			seats = 0;
//		}
//	}
//
//	void printSeat() {
//		cout << "No of seats: " << seats << endl;
//	}
//
//	void go() {
//		speed++;
//		cout << "speed:" << speed << endl;
//	}
//	void stop() {
//		speed--;
//		cout << "speed:" << speed << endl;
//	}
//protected:
//	int horsepower;
//	int wheels;
//	int doors;
//	int seats;
//	float speed = 0;
//private:
//};
//
//
///*
//낮선 사람 sdf
//엄마
//나
//public: 낮선 사람, 엄마 나 다 사용 가능
//protected: 엄마, 나만 사용 가능
//private: 다나만 사용 가능
//*/

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


// int a,b,c,d;

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void gudegugiuk() {
	int a = 1;
	int b = 2;

	int* holda = &a;
	int* holdb = &b;

	int c;
	c = *holda;
	*holda = *holdb;
	*holdb = c;

	cout << a << " " << b << endl; // a = 2 b = 1 출력되야함
	//주소값을 이용하여 스왑
}

void namesearch(string name) {
//ddddsfd
}



void ABBC() {
	//srand(99);
	//for (int x = 0; x < 10; x++) {
	//	cout << rand() % 90 << endl;
	//}


	int number[9][9];
	srand(time(0));
	for (int i = 0; i < 9; i++) {
		for (int p = 0; p < 9; p++) {
			number[i][p] = rand() % 90;
			cout << number[i][p] << " ";
		}
	}

	int arihe = 0;
	int x = 0;
	int y = 0;
	for (int o = 0; o < 9; o++) {
		for (int l = 0; l < 9; l++) {
			if (arihe < number[o][l]) {
				arihe = number[o][l];
				x = o + 1;
				y = l + 1;
			}
			else {

			}
		}
	}

	cout << "가장 큰 수 : " << arihe << endl;
	cout << arihe << endl;
	cout << "(" << x << " , " << y << ") " <<  "번째에 위치함" << endl;

}

// vector<int> a;
// 크기 변경 a.resize(10);
// 배열처럼 사용 가능 a[3] = 15;
// 끝에 하나 추가 a.push_back(15);
// 끝에 하나 제거 a.pop_back();

void arihe() {
	int num;
	cin >> num;

	//for (int i = 0; i < num; i++) {
	//	for (int j = 0; j < i; j++) {
	//		cout << " " << endl;
	//	}
	//	for (int j = 0; j < (num - i) - 1; j++) {
	//		cout << "`*" << endl;
	//		
	//	}
	//	cout << endl;
	//}

	for (int i = 0; i < num; i = i + 2) {
		for (int p = num; p > (num - i); p -= 2) {
			cout << " ";
		}
		for (int j = 0; j < (num - i); j++) {
			if (j % 2 == 0) {
				cout << "*";
			}
			else {
				cout << "`";
			}
		}
		cout << endl;
		
	}
}
vector<int> nums;

/*
 A: ABCDEF
 B: DE -> return true
 B: DEFG -> return false

 string 배열처럼 사용 가능
string a = "ABC";
a[1] -> B
 string.length() 크키
*/


bool search(string A, string B) {
	int count = 0;
	for (int i = 0; i < B.length(); i++) {
		for (int i = o; o < A.length(); o++) {
			
		}
			if (A[i] != B[i]) {
				count = 0;
			}
			if (A[i] == B[i]) {
				count++;
			}
			if (count == B.length()) {
				return true;
				break;
			}
		}
	if (count != B.length()) {
		return false;
	}
}

int main() {
	cout << search("ABABC", "ABC") << endl; // 1
	cout << search("ABACBABAB", "ABABC") << endl; // 0
	cout << search("ABC", "ABCDEFG") << endl; // 0, 오루 나면 안됨
}
 
//10		10joi
//20		10 20
//30		10 20 30
//10		10 20 30 10
//0		10 20 30
//40		10 20 30 40
//0		10 20 30
//0		10 20
//50		10 20 50


