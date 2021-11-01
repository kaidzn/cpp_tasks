#include <iostream>
#include <string>
using namespace std;
struct Players{
  string name;
  string surname;
  string position;
  int quantity_of_games;
  int quantity_of_goals;
  
}players[5];
void BestStriker(int n){
  for(int i = 0; i < n; i++){
    if(players[i].quantity_of_goals > players[i + 1].quantity_of_goals){
     int temp = players[i].quantity_of_goals;
     players[i].quantity_of_goals = players[i + 1].quantity_of_goals;
     players[i].quantity_of_goals = temp;
    }
  }
  // cout <<"it is sort function";
}
int main (){
  int n;
  
  cout <<"Enter the quantity of players: ";
  cin >> n;
  cout << "Input "<<endl;
 
  for(int i = 0; i < n; i++){
    cin >> players[i].name;
    cin >> players[i].surname;
    cin >> players[i].position;
    cin >> players[i].quantity_of_games;
    cin >> players[i].quantity_of_goals;
  }
  BestStriker(n);
  cout << endl;
  cout <<"Best player is: "<<endl;
  for(int i = 0; i < 1; i++){
    cout << players[i].name<<" "<<players[i].surname<<" "<<players[i].position<<" "<<players[i].quantity_of_games<<" "<<players[i].quantity_of_goals<<endl;
  }
  cout << endl;
  cout << "Players, that have less than 5 games: "<<endl;
  for(int i = 0; i < n; i++){
    if(players[i].quantity_of_games < 5){
      cout << players[i].name<<" "<<players[i].surname<<" "<<players[i].position<<" "<<players[i].quantity_of_goals<<" "<<players[i].quantity_of_goals<<endl;
    }
  }
  
}
  


