#include <iostream>
using namespace std;

struct student
{
    int CreditCompleted;
    int id;
    float cgpa;
} s[10];

int main()
{
    cout << "Enter information of students: " << endl;

    for(int i = 0; i < 10; ++i)
    {
        s[i].id = i+1;
        cout << "For id" << s[i].id << "," << endl;

        cout << "Enter CreditCompleted: ";
        cin >> s[i].CreditCompleted;

        cout << "Enter cgpa: ";
        cin >> s[i].cgpa;

        cout << endl;
    }

    cout << "Displaying Information: " << endl;

    for(int i = 0; i < 10; ++i)
    {
        cout << "\nId: " << i+1 << endl;
        cout << "CreditCompleted: " << s[i].CreditCompleted << endl;
        cout << "cgpa: " << s[i].cgpa << endl;
    }

    return 0;
}
