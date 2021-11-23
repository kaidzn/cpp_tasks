#include <iostream>
#include <string>
using namespace std;
struct players{
  string pl_name;
  string country_of_player;
  int clubs;
}player[3];
struct club{
  string name_club;
  int num_pl;
}clubs[2];
//void sorting(int n, club cl, string find_country){
//  for( int i = 0; i < n; i++){
// if( find_country == player[i].country_of_player){
 //    cout << clubs[i].name_club<<endl;
 //  }
 //// }
   
//}
int main() {
  club cl;
  int n;
  string find_country;
  cout << "Enter the quantity of clubs: ";
  cin >> n;
  cout << "Enter all information: "<<endl;
  for(int i = 0; i < n; i++){
    cin >> clubs[i].name_club;
    cin >> clubs[i].num_pl;
    for(int j = 0; j < clubs[i].num_pl; j++){
      cin >> player[j].pl_name;
      cin >> player[j].country_of_player;
      cin >> player[j].clubs;
    }
  }
  cin >> find_country;
  for( int i = 0; i < n; i++){
    if( find_country == player[i].country_of_player){
      cout << clubs[i].name_club<<endl;
    }
  }
  
} 
