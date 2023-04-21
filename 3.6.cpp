#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1(10, 'a');
  string s2 = "X";
  /*
  for (decltype(s1.size()) i = 0; i < s1.size(); i++) {
    s1[i] = 'X';  // 单引号是char型,是字符， 双引号是const char 型，是字符串
  }
  */
  for (auto &c : s1) {
    c = '你';
  }
  cout << s1 << endl;
  return 0;
}