#include <iostream>
#include "Student.h"
#include "out.h"

using namespace std;

void OutputInfo(Student *stud) {
    cout << "Name: " << stud->GetName() << endl;
    cout << "Course: " << stud->Getkurs() << endl;
    if (stud->Getst())
        cout << "Man" << endl;
    else
        cout << "Woman" << endl;
}
