#include <iostream>
using namespace std;
int main() {
     int n, m, a[50][50];
   cout << "Enter size of the two dimentional array : ";
   cin >> n >> m ;
     for(int i = 0; i < n; i++){
      for(int j =  0; j < m ; j++){
        cin >> a[i][j];
      }
     }
      for(int i = 0 ; i < n; i++){
          for(int j = 0 ; j < m ; j++){
         cout << a[i][j]<< " ";
       }
      cout << endl;
    }
cout <<"-------------"<<endl;

    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        for(int k = 0; k < m - 1; k++){
           if(a[i][k] > a[i][k + 1]){
             swap(a[i][k],a[i][k + 1]);
           }           
        }
      }
    }
    for(int i = 0 ; i < n; i++){
      for(int j = 0 ; j < m ; j++){
        cout << a[i][j]<< " ";
      }
      cout << endl;
    }


}
