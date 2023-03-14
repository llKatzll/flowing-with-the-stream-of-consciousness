
#include <iostream>
#include <vector>

using namespace std;

void lol() {
	int random[10];
	int total = 0;
	srand(100);
	for (int i = 0; i < 10; i++) {
		random[i] = rand();
		cout << random[i] << " ";
	}
	for (int i = 0; i < 10; i++) {
		if (random[i] > total) {
			total = random[i];
		}
	}
	cout << endl;
	cout << total << "이 제일 큼." << endl;
}

void fate() {
	vector<int> score;
	int num = 0;
	int sum = 0;

	while (true) {
		cin >> num;
		if (num == -1) break;
		score.push_back(num);
		sum += num;
	}
	cout << "평균은 :" << sum / score.size();
}

int main() {
	//lol();
	fate();
}