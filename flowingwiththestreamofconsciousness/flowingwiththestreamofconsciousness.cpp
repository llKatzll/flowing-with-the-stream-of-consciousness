#include <iostream>
#include <vector>

using namespace std;

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
//

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



//// 25 -> 2+5=7
//// 2345 -> 2+3+4+5=14
//int digitAdd(int a) {
//
//}
//
//// 소수 계산기 
//// 리턴값 True: 소수이다 , False: 소수 아니다
//bool prime(int a) {
//
//}

int main() {
	cout << gimme(1) << endl;		// 1
	cout << gimme(2) << endl;		// 2
	cout << gimme(3) << endl;		// 6
	cout << gimme(4) << endl;		// 24
	cout << gimme(5) << endl;		// 120
	cout << gimme(10) << endl;		// 3628800

	cout << endl;

	//cout << digitAdd(1) << endl; // 1
	//cout << digitAdd(25) << endl; // 7
	//cout << digitAdd(123456) << endl; // 21
}
// 0 1 1 2 3 5 8 13
