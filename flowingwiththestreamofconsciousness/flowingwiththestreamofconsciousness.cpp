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

void 



int main() {
	test();
	ez();
}

