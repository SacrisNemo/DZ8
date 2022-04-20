#include "Student.h"

Student::Student()
{
	gender = 'm';
	average_mark = 5;
	birth_date = "01.01.1900";
}

Student::Student(char gender, double average_mark, std::string birth_date)
{
	this->gender = gender;
	this->average_mark = average_mark;
	this->birth_date = birth_date;
}

Student& Student::operator=(const Student& other)
{
	this->average_mark = other.average_mark;
	this->birth_date = other.birth_date;
	this->gender = other.gender;

	return *this;
}

Student::~Student()
{

}

std::ostream& operator<<(std::ostream& out, const Student& other)
{
	out << "Gender = " << other.gender << " \n Average mark = " << other.average_mark << " \n Birth date = " << other.birth_date;
	return out;
}

std::istream& operator>> (std::istream& in, Student& other)
{
	in >> other.gender;
	in >> other.average_mark;
	in >> other.birth_date;
	return in;
}