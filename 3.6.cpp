#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1(10, 'a');
  string s2 = "X";
  /*
  for (decltype(s1.size()) i = 0; i < s1.size(); i++) {
    s1[i] = 'X';  // ��������char��,���ַ��� ˫������const char �ͣ����ַ���
  }
  */
  for (auto &c : s1) {
    c = '��';
  }
  cout << s1 << endl;
  return 0;
}