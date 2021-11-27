#include <iostream>
#include <string>
using namespace std;
struct Students{
  string name;
  double mark;
  long scholarship;
}student[3];
void Sorting(int n, int schol){
  for(int i = 0; i < n; i++){
    if(student[i].mark > 4.5){
      schol = student[i].scholarship + student[i].scholarship*0.3;
       cout << student[i].name<<" "<<schol<<" 30% up 'cause mark is "<<student[i].mark<<endl;
    }
    }
  }
  void Sort(int n,int  scholar){
    for(int i = 0; i < n; i++){
      if( 2 < student[i].mark < 4.5 ){
      scholar = student[i].scholarship + student[i].scholarship*0.1;
       cout << student[i].name<<" "<<scholar<<" 10% up 'cause mark is "<<student[i].mark<<endl;
    }
    }
     
  }
  int main(){
    int n, schol,scholar;
    cout << "Enter the quantity of the students: ";
    cin >> n;
    for(int i = 0; i < n; i++){
      cin >> student[i].name;
       cin >> student[i].mark;
        cin >> student[i].scholarship;
    }
    Sorting(n, schol);
    Sort(n, scholar);
  }

