#include <iostream>
using namespace std;
struct Students{
  string name;
  int age;
  double gpa;
}student[3];
int main(){
  int n;
  Students std;
  cout << "Enter the quantity of students: ";
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> student[i].name;
    cin >> student[i].age;
    cin >> student[i].gpa;
  }
   cout << "The student who has high gpa:  ";
  for(int i = 0; i < 2; i++){
    if(student[i].gpa > student[i + 1].gpa){
      int temp = student[i].gpa;
      student[i].gpa = student[i + 1].gpa;
      student[i + 1].gpa = temp;
      cout << student[i].name<<" "<<student[i].age<<" "<<(float)student[i].gpa<<endl;
    }
  }

}
