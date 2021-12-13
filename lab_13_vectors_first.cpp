 int main(){
   int n, w, sum = 0;         // The first task...
   vector <int> a;
   cout << "Enter the size: ";
   cin >> n;
   cout << "Enter the numbers: ";
   for(int i = 0; i < n; i++){
     cin >> w;
     a.push_back(w);
   }
   for(vector<int>::iterator i = a.begin(); i < a.end(); i+=2){
     sum += *i;
   }
   cout << sum;
 }
