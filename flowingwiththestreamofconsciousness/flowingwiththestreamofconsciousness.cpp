#include <iostream>
#include <vector>

using namespace std;
int n, door1, door2, m;
int arr[21];
int answer = 9999;
void solve(int d1, int d2, int dis, int cnt) {
	if (m == cnt) {
		answer = min(answer, dis);
		return;
	}
	solve(arr[cnt], d2, arr[cnt] - d1, cnt + 1);
	solve(d1, arr[cnt], arr[cnt] - d2, cnt + 1);
}


int main() {
	cin >> n;
	cin >> door1 >> door2;
	cin >> m;
	for (int i = 0; i < mm; i++) {
		cin >> arr[1];
		//wotdafuc
	}
}