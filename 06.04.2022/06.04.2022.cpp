#include "Student.h"
int main()
{
    Student me;
    Student you('f', 4, "02.02.1901");
    std::cout << me << std::endl;
    me = you;
    std::cout << me;
}
