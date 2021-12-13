int main(){
  int n ,x, sum = 0, count;                 // The second task
  vector<int> num;
  cout << "Enter the size: ";
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> x;
    num.push_back(x);
  }
  int the_last_element = num.back();
  for(vector<int>::iterator i=num.begin() ;i < num.end(); i++){
    if( the_last_element > *i ){
      count++;
      sum += *i;
    }
    else{
      continue;
    }
  }
  cout << count <<" elements and sum is "<<sum;
 
}
