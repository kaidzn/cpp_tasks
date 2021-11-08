#include <iostream>
using namespace std;
struct Students{
   string name_student;
   string subject1_name;
   string subject2_name;
   string subject3_name;
   string subject4_name;
   float grade1;
   float grade2;
   float grade3;
   float grade4;
} grades[9];
void Sorting(int n){
  for(int i = 0; i < n; i++){
    if(grades[i].grade1 > 90.00 && grades[i].grade2 > 90.00 && grades[i].grade4 > 90.00){
      cout << grades[i].name_student<<endl<<grades[i].subject1_name<<" "<<grades[i].grade1<<endl<<grades[i].subject2_name<<" "<<grades[i].grade2<<endl<<grades[i].subject3_name<<" "<<grades[i].grade3<<endl<<grades[i].subject4_name<<" "<<grades[i].grade4<<endl;
    } 
  }
}
int main(){
   int n;
   cout << "Input"<<endl;
   cout<<endl<<"Enter the quantity of students: ";
   cin >> n;
   cout << "Enter the detailes: ";
   for(int i = 0;i < n; i++){
     cin>>grades[i].name_student;
      cin>>grades[i].subject1_name;
      cin>>grades[i].grade1;
      cin>>grades[i].subject2_name;
      cin>>grades[i].grade2;
      cin>>grades[i].subject3_name;
      cin>>grades[i].grade3;
      cin>>grades[i].subject4_name;
      cin>>grades[i].grade4;
    }
   cout << "The result: "<<endl;
   Sorting(n);
  
  
  return 0;
}
