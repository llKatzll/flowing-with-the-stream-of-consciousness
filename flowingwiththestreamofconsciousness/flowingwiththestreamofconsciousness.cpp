// flowingwiththestreamofconsciousness.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <Windows.h>
#include <string.h>

#define  sleep Sleep(1200);

using namespace std;

class game {
public:
    game() {
        sleep;
        cout << "안녕하십니까." << endl;
        sleep;
        cout << "시작하기에 앞서.." << endl;
        Sleep(800);
        cout << "간단한 질문을 하겠습니다." << endl;
        sleep;
        cout << "..." << endl;
        sleep;
        cout << "이름이?.." << endl;
        sleep;
        cin >> name;
        sleep;
        cout << "....." << endl;
        sleep;
        cout << "그는 책장을 넘기곤 말을 이어간다." << endl;
        sleep;
        cout << "나이는." << endl;
        sleep;
        cin >> age;
        sleep;
        cout << "..나이는 딱히 상관 없습니다." << endl;
        sleep;
        cout << "그럼.." << endl;
        
    };
private:
    string name; //받음
    int age; //받음
    string whatdoyoulike;

};

int main()
{
    game gm;
}

