#include <iostream>
using namespace std;
struct Movie{
 string name;
 string date;
 string time;
 string session_duration;
 string genre;
 double budget;
 
}films[6];
int main(){
   cout << "Input"<<endl;
   cout << endl;
   int n;
   cout << "Enter quantity of movies: ";
   cin >> n;
   for(int i = 0; i < n; i++){
     cin >> films[i].name;
     cin >> films[i].date;
     cin >> films[i].time;
     cin >> films[i].session_duration;
     cin >> films[i].genre;
     cin >> films[i].budget;
   }
   cout << "Output"<<endl;
   cout <<endl;
   for(int i = 0; i < n; i++){
     if(films[i].time > "18:00" && films[i].session_duration > "1:40"){
       cout << films[i].name<<" "<<films[i].date<<" "<<films[i].time<<" "<<films[i].session_duration<<" "<<films[i].genre<<" "<<films[i].budget<<endl;
     }
   }


}
