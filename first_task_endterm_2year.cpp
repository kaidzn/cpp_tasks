#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main() {
  
  vector<int> num;
  int n, a;                      // The first task...
  int count = 0;
  cout << "Enter the size: ";
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a;
    num.push_back(a);
  }
  for(vector<int>::iterator i = num.begin(); i != num.end(); i++){
    if(*i == 10){
      count++;
      num.erase(i);
      if(count == 1){
        break;
    }
    }
      
  }
  cout <<endl<< "Output"<<endl;
  cout << endl;
  for(vector<int>::iterator i = num.begin(); i != num.end(); i++){
    cout << *i<<" ";
  }
  

} 
