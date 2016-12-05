#include <iostream>
#include "Student.h"
#include "out.h"

int main() {
    Student
        *Ivan = new Student ("Ivan", 3, true);
    OutputInfo(Ivan);
    Student
        *Marina = new Student(*Ivan);
    OutputInfo(Marina);
    delete Ivan, Marina;
    Ivan = new Student();
    OutputInfo(Ivan);
    Ivan->SetName("Ivan");
    OutputInfo(Ivan);
    delete Ivan;
    return 0;
}
