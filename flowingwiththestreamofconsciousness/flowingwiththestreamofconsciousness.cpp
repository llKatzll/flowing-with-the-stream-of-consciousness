#include <iostream>
#include <vector>

using namespace std;
//int n, door1, door2, m;
//int arr[21];
//int answer = 9999;
//void solve(int d1, int d2, int dis, int cnt) {
//	if (m == cnt) {
//		answer = min(answer, dis);
//		return;
//	}
//	solve(arr[cnt], d2, arr[cnt] - d1, cnt + 1);
//	solve(d1, arr[cnt], arr[cnt] - d2, cnt + 1);
//}
//

//	int number;
//	cin >> number;
//	vector<int> st;
//	vector<int> score;
//	st.resize(number);
//	score.resize(number);
//
//	cout << "for 1" << endl;
//	for (int x = 0; x < number; x++) {
//		cin >> score[x];
//		st[x] = 1;
//	}
//
//	cout << "for 2" << endl;
//	for(int i = 0; i < number; i++) {
//		//yoyoyo it's hump day
//		for (int x = 0; x < number; x++) {
//			if (score[i] < score[x]) {
//				st[i] = st[i] + 1;
//			}
//		}
//	}
//
//	for (int r = 0; r < 5; r++) {
//		cout << st[r] << " " << endl;
//	}
//}


int main() {
	// 문자 비교
	// string example = AA;
	// example[0] == example[1] -> true;

	// 문자 삭제하는거
	// string example = ABCDEF;
	// example.erase(1, 3); (위지, 길이)
	// example -> AEF;

	// 문장 길이
	// string example = ABC;
	// example.length() -> 3

	string input;
	string output;
	cin >> input;

	//------------------------
	char storage = 0;
	for (int i = 0; i < input.length(); i++) {
		if (storage != input[i]) {
			storage = input[i];
		}
		else if (storage == input[i]) {
			input.erase(i, 1);
			i--;
		}
		output = input;
	}

	//------------------------


	cout << output << endl;
}


/*
A -> A
ABCDEF -> ABCDEF
AAAAA -> A
AABCCDDEEFF -> ABCDEF
ABBCCCDDDDEEEEEFFFFFF -> ABCDEF
AABBAABB -> ABAB
ABAABABA - > ABABA
*/
