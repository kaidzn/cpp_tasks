#include <iostream>
#include <string>
using namespace std;
struct Students{
  string name_stud;
  string subject1;
  string subject2;
  string subject3;
  double grade1;
  double grade2;
  double grade3;
}student[7];
void Sorting(int n){
  for(int i = 0; i < n; i++){
    if(student[i].grade1 > 90.0){
      cout << student[i].name_stud<<endl<<student[i].subject1<<" "<<student[i].grade1<<endl;
      cout <<student[i].subject2<<" "<<student[i].grade2<<endl;
      cout <<student[i].subject3<<" "<<student[i].grade3<<endl;
    }
    else if(student[i].grade2 > 90.0){
      cout << student[i].name_stud<<endl<<student[i].subject1<<" "<<student[i].grade1<<endl;
      cout <<student[i].subject2<<" "<<student[i].grade2<<endl;
      cout <<student[i].subject3<<" "<<student[i].grade3<<endl;
    }
    else if(student[i].grade3 > 90.0){
      cout << student[i].name_stud<<endl<<student[i].subject1<<" "<<student[i].grade1<<endl;
      cout <<student[i].subject2<<" "<<student[i].grade2<<endl;
      cout <<student[i].subject3<<" "<<student[i].grade3<<endl;
      
    }
  }
}
int main(){
  int n;
  cout <<"Enter the quantity of students: ";
  cin >> n;
  cout <<"Enter the informations about the students: "<<endl;
  for (int i = 0; i < n; i++){
    cin >> student[i].name_stud;
    cin >> student[i].subject1;
    cin >> student[i].grade1;
    cin >> student[i].subject2;
    cin >> student[i].grade2;
    cin >> student[i].subject3;
    cin >> student[i].grade3;
  
  }cout <<endl;
  Sorting(n);
}
