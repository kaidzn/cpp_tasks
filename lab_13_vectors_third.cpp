int main(){
  int n, w;
  vector<int> a;
  cout << "Enter the size: ";       // The third task...
  cin >> n;
  cout << "Enter the numbers: ";
  for(int i = 0; i < n; i++){
    cin >> w;
    a.push_back(w);
  }
  for(vector<int>::iterator i = a.begin();i < a.end();i++){
    if(*i %2 != 0){
      a.erase(i);
    }
  }
  for(vector<int>::iterator i = a.begin();i < a.end();i++){
    cout << *i<<" ";
  }
}
