#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>
class Student
{
private:
	char gender;
	double average_mark;
	std::string birth_date;
public:

	Student();
	Student(char, double, std::string);
	Student& operator= (const Student& other);
	friend std::ostream& operator<< (std::ostream& out, const Student& other);
	friend std::istream& operator>> (std::istream& in, Student& other);
	~Student();
};

#endif //STUDENT_H
