// flowingwiththestreamofconsciousness.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <Windows.h>
#include <string.h>

#define  sleep Sleep(1200);

using namespace std;

void gugudan(int a) {
    for (int i = 1; i < 10; i++) {
        int hap;
        hap = a * i;
        cout << a << " * " << i << " = " << hap << endl;
    }
}

void chooseit() {
    cout << "귀찮앙" << endl;
    int a;
    int right;
    srand(a);
    cout << "야 나 숫자 정함 맞춰보셈" << endl;
    cin >> right;
    while (a == right) {
        if (a == right) {
            cout << "우예 알았누" << endl;
            break;
        }
        else {
            cout << "아니야 ㅋㅋ" << endl;
            if (a > right) {
                cout << "작다야" << endl;
            }
            else if (a < right) {
                cout << "크다야" << endl;
            }
        }
    }
    
}

void swap() {
    int x = 1;
    int y = 3;
    cout << x << y << endl;
    swap(x, y);
    cout << x << y << endl;
}

int main()
{
    int g;
    cout << "몇 단?" << endl;
    cin >> g;
    gugudan(g);
    swap();


}

