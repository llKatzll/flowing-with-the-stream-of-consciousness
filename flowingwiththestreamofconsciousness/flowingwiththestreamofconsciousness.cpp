
#include <iostream>
#include <vector>

using namespace std;

// 재귀함수 예시
int n;

void f(int a) {
	if (a > n) {
		return;
	}
	cout << (a) << endl;
	f(a - 1);
}

int main() {
	cin >> n;
	f(10);
}