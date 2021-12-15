#include <iostream>
#include <vector>
#include<string>
using namespace std;
struct Products{
  string name_product;
  int calories;
  int fat;               // The second task...
  int proteins;
  int carbohydrate;
}pro[5];
struct Menu{
  string name_menu;
  int count;
  Products pro;
}menu[2];
int main() {
 
 int n,f_calori, total_calori = 0;
 string name_human;
 cout <<"Input"<<endl;
 cin >> n;
 for(int i = 0; i < n; i++){
   cin>>menu[i].name_menu;      // Entering the informations...
   cin>>menu[i].count;
   for(int j = 0; j < menu[i].count; j++){
      cin>>pro[j].name_product;
      cin>>pro[j].carbohydrate;
      cin>>pro[j].proteins;
      cin>>pro[j].fat;
 }
 }
 cin>>name_human;
 cin>>f_calori;
 for(int i = 0; i < n; i++){
    for(int j = 0; j < menu[i].pro.calories; j++){ // Counting the total calories...
   pro[j].calories = (pro[j].carbohydrate*3) + (pro[j].proteins*5) + (pro[j].fat*9);
    total_calori +=pro[j].calories;
    }
 }

 for(int i = 0; i < n; i++){
   if(900 < total_calori < f_calori ){    //Sorting...
     cout<<menu[i].name_menu<<" : Accepted!"<<endl;
   }
   else{
     cout<<menu[i].name_menu<<" : Rejected! ";
   }
 }
} 
