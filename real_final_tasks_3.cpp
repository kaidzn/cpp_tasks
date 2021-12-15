struct Guest{
  string name;
  string surname;
  int age;
  string arrive;     // The third task...
  string depart;
}guest[5];
int main(){
  int n, count = 0;
  cout<<"Input"<<endl;
  cin >> n;
  cout<<"Enter the informations: "<<endl;
  for(int i = 0; i < n; i++){
    cin >> guest[i].name;
    cin >> guest[i].surname;
    cin >> guest[i].age;
    cin >> guest[i].arrive;
    cin >> guest[i].depart;
  
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(guest[i].arrive < guest[i + 1].depart){
        if(guest[i + 1].depart > guest[i].arrive)
         count++;
      }
      else if(guest[i].age > guest[i + 1].age){
        swap(guest[i].name, guest[ i + 1].name);
        swap(guest[i].surname, guest[ i + 1].surname);
        swap(guest[i].age, guest[ i + 1].age);
        swap(guest[i].arrive, guest[ i + 1].arrive);
        swap(guest[i].depart, guest[ i + 1].depart);

      }
    }
  }
  cout<<count<<endl;
  for(int i = 0; i < count; i++){
    cout<<"    "<< guest[i].name<<" "<<guest[i].surname<<" "<<guest[i].age<<" "<<guest[i].arrive<<" "<<guest[i].depart<<endl;
  }



}
