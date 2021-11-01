#include <iostream>
using namespace std;
struct Workers{
  string lastname;        // third task
  int age;
  string knowledge;
  string position;
}worker[4];
int main(){
  Workers wrk;
  int n;
  cout <<"Enter the numbers of workers: ";
  cin >> n;
  cout << "Input"<< endl;
  for(int i = 0; i < n; i++){
    cin >> worker[i].lastname;
    cin >> worker[i].age;
    cin >> worker[i].knowledge;
    cin >> worker[i].position;
  }
  cout << "Workers who don't have knowledge and are not under 30 years: "<<endl;
  for(int i = 0; i < n; i++){
    if(worker[i].age > 30 && worker[i].knowledge == "None"){
      cout << worker[i].lastname<<" "<<worker[i].age<<" "<<worker[i].position<<endl;
    }
  }
  cout <<"Informations about Engineers: "<<endl;
  int  sum = 0;
  for(int i = 0; i < n; i++){
    if(worker[i].position == "Engineer"){
       sum = sum + 1;
       cout << worker[i].lastname<<" "<<worker[i].age<<" "<<worker[i].knowledge<<" "<<worker[i].position<<endl;
    }
  }
  cout<<"Quantity of them: "<<sum<<endl;
}
