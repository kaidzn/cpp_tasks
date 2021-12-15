#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> myvector;
    int n, w;
    cout << "Enter the size: ";
    cin >> n;
    cout <<"Enter the numbers: ";
    for(int i = 0; i < n; i++){
      cin >> w;
      myvector.push_back(w);
    }
 
    for (auto i = myvector.begin(); i != myvector.end(); ++i) {
     
        if (*i == *(i + 1)) {
            myvector.erase(i);
             i--;
        }
      
    }
 
    // Printing the vector
    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;
    return 0;
}
