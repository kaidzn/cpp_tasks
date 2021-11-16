#include <iostream>
using namespace std;
struct Students {

    string fname_student;
    string lname_student;
    string group;
    int grade_math;
    int grade_english;
    int grade_programming;


}student[6];
void Sorting(double n, double avrg, double average) {
    for (int i = 0; i < n; i++) {
        if (student[i].grade_programming == 5) {
            avrg = (student[i].grade_english + student[i].grade_math + student[i].grade_programming);
            average = avrg/3;
            cout << student[i].fname_student << " " << student[i].lname_student << " " << student[i].group << " " << average << endl;
        }
    }
}
int main(){
    double n, avrg, average;
    cout << "Input"<<endl;
    cout << "Enter the quantity of the students: ";
    cin >> n;
    cout << "Enter the informations about the students:"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> student[i].fname_student;
        cin >> student[i].lname_student;
        cin >> student[i].group;
        cin >> student[i].grade_english;
        cin >> student[i].grade_math;
        cin >> student[i].grade_programming;
    }
    cout << "Output"<<endl;
    Sorting(n, avrg, average);

}
