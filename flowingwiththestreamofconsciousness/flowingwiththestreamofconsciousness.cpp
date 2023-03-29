#include <iostream>
#include <vector>

using namespace std;

class letscleanup {
public:
	void e() {
		for (int i = 0; i < 5; i++) {
			if (i == 0) {
				cout << "입력" << endl;
			}
			else {
				cout << "한 번 더" << endl;
			}
			cin >> anythingelse;
			po[i] = anythingelse;
		}

		cout << "자, 이거 맞으시죠" << endl;
		for (int x = 0; x < 5; x++) {
			cout << po[x] << " , ";
		}

		for (int p = 0; p < 5; p++) {
			s += po[p];
		}
		s = s / 5;
		cout << " = ";
		cout << s;
	}
private:
	double anythingelse = 0;
	double po[5] = {0,0,0,0,0};
	double s = 0;
	//
};



int main() {
	letscleanup clean;
	clean.e();
}

