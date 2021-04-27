#include <iostream>
#include <string>
using namespace std;

int main() {

  string alp="abcdefghigklmnopqrstuvwxyz";

  string st;
  cout << "Enter binary numbers: ";

  cin >> st ;

  int n=0;

  for (int i=0; i<st.length(); i++) {

    if (st[i]=='1'){

      cout << alp[n];
      n=0;
    }

    else {
      n+=1;
    }
  }



}
