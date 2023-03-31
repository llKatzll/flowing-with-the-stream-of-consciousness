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



int main() {
	test();
	ez();
}

