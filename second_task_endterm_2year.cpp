#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct Shops{
  int id;
  string item;
  int mark_exp;
  int mark_con;
}shop[4];
// void Sorting(int n){
//   for(int i = 0; i < n; i++){
//     if(shop[i].id < shop[i + 1].id){
//       swap(shop[i].id,shop[i + 1].id);
//       swap(shop[i].item,shop[i + 1].item);
//       swap(shop[i].mark_exp,shop[i + 1].mark_exp);
//       swap(shop[i].mark_con,shop[i + 1].mark_con);
//     }
//   }
// }
int main(){
  int n;
  cout << "Enter the size: ";
  cin >> n;
  for(int i = 0; i < n; i++){
     cin >> shop[i].id;
      cin >> shop[i].item;
       cin >> shop[i].mark_exp;
        cin >> shop[i].mark_con;

  }
  for(int i = 0; i < n; i++){
    if(shop[i].id < shop[i + 1].id){
      swap(shop[i].id,shop[i + 1].id);
      swap(shop[i].item,shop[i + 1].item);
      swap(shop[i].mark_exp,shop[i + 1].mark_exp);
      swap(shop[i].mark_con,shop[i + 1].mark_con);
    }
  }
  //Sorting(n);
  for(int i = 0; i < n; i++){
    cout << shop[i].id<<" "
      << shop[i].item<<" "
       <<shop[i].mark_exp<<" "
       << shop[i].mark_con<<endl;

  }


}
