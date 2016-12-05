#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(void)
    : name("none"), kurs(1), st(0) {
    cout << endl << "*constructor is work" << endl << endl;
}

Student::Student(char *n, int k, bool s)
    : name(n), kurs(k), st(s) {
    cout << endl << "*constructor with parameters is work" << endl << endl;
}

Student::Student(Student &stud)
    : name(stud.name), kurs(stud.kurs), st(stud.st) {
    cout << endl << "*constructor copy is work" << endl << endl;
}

Student::~Student(void) {
    cout << endl << "*constructor was deleted" << endl << endl;
}

void Student::SetName(char *n) {
    name = n;
    cout << endl << "*Setter is work" << endl;
}

char *Student::GetName() {
    return name;
}

void Student::Setkurs(int k) {
    kurs = k;
    cout << endl << "*Setter is work" << endl;
}

int Student::Getkurs() {
    return kurs;
}

void Student::Setst(bool s) {
    st = s;
    cout << endl << "*Setter is work" << endl;
}

int Student::Getst() {
    return st;
}
