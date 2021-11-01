#include <iostream>
using namespace std;
struct Item{          // second task
  string name;
  int quantity;
  float price;
  string owner;
  string date;
}item[5];
int main(){
  Item it;
  int n;
  cout<<"Enter the number of items: ";
  cin >> n;
  cout << "Input: "<<endl;
  for(int i = 0;i < n; i++){
    cin >> item[i].name;
    cin >> item[i].quantity;
    cin >> item[i].price;
    cin >> item[i].owner;
    cin >> item[i].date;

  }
  int  sum = 0;
  for(int i = 0; i < n; i++){
    sum = sum + item[i].price;
  }
     int average = sum / n;
     cout << "Output"<<endl;
  for(int i = 0; i < n;i++){
    if(item[i].price > average){
      cout<<item[i].name<<" "<<item[i].quantity<<" "<<item[i].price<<" "<<item[i].owner<<" "<<item[i].date<<endl;
    }
  }
 

}
