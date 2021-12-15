#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
  int n, w, min = 0;
  int min2 = 0;
  vector<int> a;           //The first task...
  vector<int>::iterator it;
  cout <<"Enter the size: ";
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> w;
    a.push_back(w);
  }
   int  first, second;
   
   first = second = INT_MAX;
   for(auto i = a.begin(); i != a.end(); i++ ){
     if(a[*i] < first){
       second = first;
       first = a[*i];
     }
     else if (second > a[*i] && a[*i] != first){
       second = a[*i];
     }
   }
   cout<<second<<" ";
  for(auto i = a.begin(); i != a.end(); i++){
    cout<<*i<<" ";
  }
  cout<<second;


}
