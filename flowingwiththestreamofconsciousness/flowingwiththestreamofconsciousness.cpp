#include <iostream>
#include <vector>
int main() {int timer;std::string a;std::cin >> timer;std::vector<std::string> h;h.resize(timer);for (int i = 0; i < timer; i++) {std::cin >> a;h[i] = a;}for (int x = 0; x < timer; x++) {std::cout << h[x][0];std::cout << h[x][h[x].length()-1] << std::endl;}}//흐하학 최강의 1줄 코드다 ㅋㅋㅋㅋㅋㅋ