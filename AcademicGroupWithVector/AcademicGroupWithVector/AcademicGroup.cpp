#include "AcademicGroup.h"

AcademyGroup::AcademyGroup() 
{
	AcademyGroup::stu;
	this->count = 0; 
}

void AcademyGroup::AddStudent()
{
	cout << "U want empty card?(y/n): ";
	char answer;
	cin >> answer;

	if (answer == 'y')
		stu[this->count].;
	else
	{
		string surname, name, phone;
		int age;
		double average;

		cout << "Input Surname: ";
		cin >> surname;

		cout << "Input Name: ";
		cin >> name;

		cout << "Input Age: ";
		cin >> age;

		cout << "Input Phone: ";
		cin >> phone;

		cout << "Input average: ";
		cin >> average;

		temp[this->count] = new Student(name, surname, age, phone, average);
	}


}

void AcademyGroup::DeleteStudent()
{
	int index = 0;
	cout << "Input the index of student: ";
	cin >> index;

	stu.erase(stu.begin() + index);
}

void AcademyGroup::EditStudent()
{

}

void AcademyGroup::Print()
{

}

void AcademyGroup::FindStudent()
{

}

void AcademyGroup::Sort()
{
	
}