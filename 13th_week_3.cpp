#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  cout << "Enter two words: ";
  string st1,st2;
  cin >> st1 >> st2;

  sort(st1.begin(),st1.end());
  sort(st2.begin(),st2.end());

  if (st1==st2) {cout << "Yes";}
  else { cout << "No";}
}
