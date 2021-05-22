 #include <iostream>

using namespace std;
int main(){

int a[50], n;
cout << "Enter size of array : ";
cin >> n;
  for (int i = 0; i < n; i++){
    cin>>a[i];
  }
    for(int i = 0 ;i < n; i++){
      for(int j = 0; j < n - 1; j++){
        if(a[j] > a[j+1]){
          int temp = a[j];
          a[j] = a[j+1];
          a[j+1] = temp;
        }
      }
    }
    for(int i = 0; i < n; i++){
       cout << a[i] << " ";
    }
}
