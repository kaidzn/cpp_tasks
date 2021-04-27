#include <iostream>
#include <string>
using namespace std;

int main() {

  string r = ">>-->";
  string l = "<--<<";

  string st;
  cout << "Enter sign: ";
  cin >> st;

  int n=0;

  for (int i=0; i<st.length()-4;i++){
    string s=st.substr(i,5);

    if (r==s || l==s) {
      n+=1;
    }
  }

  cout << "Quantity of signs: " << n<< endl;
}
