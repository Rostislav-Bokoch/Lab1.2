#ifndef EXAM_H
#define EXAM_H

class Student {
private:
    char *name;
    int kurs;
    bool st;

    friend void OutputInfo (Student *stud);

public:
    Student ();
    Student (char *n, int k, bool s);
    Student (Student &stud);

    void SetName(char *n);
    char *GetName();
    void Setkurs(int k);
    int Getkurs();
    void Setst(bool s);
    int Getst();

    ~Student ();
};

#endif
