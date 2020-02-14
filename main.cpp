#include <iostream>
#include <string>
using namespace std;
class Grade{
public:
    string name(string n){
        return n;
    }

    int age(int a){
        return a;
    }
    void score(){
        char credit = 'H';
        switch (credit){
            case 'H':
                cout << "Graded High Distinction";
                break;
            case 'D':
                cout << "Graded Distinction";
                break;
            case 'P':
                cout << "Graded passed";
                break;
            case 'f':
                cout << "graded failed";
                break;
            default:
                cout << "You have not been graded";
                break;

        }
    }
};
int main() {
    Grade grade;
    cout << "Name: " << grade.name("Lokang") << endl;
    cout << "Age: " << grade.age(40) << endl;
    cout << "Grade: ";
    grade.score();
    return 0;
}
