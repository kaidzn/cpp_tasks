int main() {
  vector<int> a;              // The fourth task
  int n, x;
  cout << "Enter the size: ";
  cin >> n;
  for(int i = 0; i < n; i++){
  cin >> x;
  a.push_back(x);
  }
  int max =  -1;
  for(vector<int>::iterator i=a.begin() ;i != a.end(); i++){
    if( *i%2 != 0 && *i > max){
     max = *i;
    }
  }
  cout <<"The maximum element of odd numbers is "<< max;
}
