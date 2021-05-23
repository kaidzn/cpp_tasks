 #include <iostream>

using namespace std;
int main(){

   int a[50], n, p, d ;
   cout << "Enter size of array : ";
     cin >> n;
  for (int i = 0; i < n ; i++){
    cin>>a[i];
  }
  
    for(int i = 0; i < n  ; i++){
        d = 2 ;
        p = 1;
          while(d<=a[i]/2){
            if(a[i]%d == 0){
         p = 0;
         break;
       }
       d++;
     }
        if(p == 1){
           int result = 0;
  int abs_a=abs(a[i]);
  while(abs_a!=0){
     int reminder = abs_a%10;
      abs_a = abs_a/10;
      int temp = result*10 + reminder;
      result = temp;
      if(n<0){
        result = -1*result;
      }

  }
   
   cout<<result<<" ";
      continue;
     }
     else if(p == 0){
       cout << a[i]<< " ";
     }
 
  }
  
}
