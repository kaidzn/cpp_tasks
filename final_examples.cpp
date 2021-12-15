#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Owner{
  string fname;
  string lname;
  string phone_number;
  int price;
  int roomCount;
} owner[5];
struct Building{
  string building;
  string city;
  int count_of_owners;
  Owner ow;
}built[4];
void Sorting(int n,string find_city,int final_price1, int final_price2){
  for(int i = 0; i < n; i++){
    
     if(built[i].city == find_city && final_price1 < built[i].ow.price < final_price2 )
        cout << built[i].ow.fname<<" "<<built[i].ow.lname<<" "<<built[i].ow.phone_number<<" "<<built[i].ow.price<<" "<<built[i].ow.roomCount<<endl;  
  }
}
int main() {
  int n, final_price1, final_price2;
  string find_city;
  cout << "Enter the quantity of buildings: ";
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> built[i].building;
    cin >> built[i].city;
    cin >> built[i].count_of_owners;
    cin>> built[i].ow.fname;
    cin>> built[i].ow.lname;
    cin>> built[i].ow.phone_number;
    cin>> built[i].ow.price;
    cin>> built[i].ow.roomCount;
    // for(int j = i; j < built[i].count_of_owners; j++){
    //   cin >> owner[j].fname;
    //   cin >> owner[j].lname;
    //   cin >> owner[j].phone_number;
    //   cin >> owner[j].price;
    //   cin >> owner[j].roomCount;
    // }
  }
  cin >> find_city;
  cin >> final_price1;
  cin >> final_price2;
  Sorting(n,find_city, final_price1, final_price2);

 } 
