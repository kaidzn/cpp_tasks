#include <iostream>
using namespace std;
void sort(int num, int count, int bin[]){
  for (int i = 0; num > 0; i++){
   bin[i] = num%2;
   num = num / 2;
   count++;
 }
 cout <<"The result is : ";
 for ( int j = count - 1; j >= 0 ; j--){
   cout<<bin[j];
 }
}
int main() {
  
 int num, count, bin[100];
 cout << "Enter the number: ";
 cin >> num;
 sort(num,count,bin);
 
} 
