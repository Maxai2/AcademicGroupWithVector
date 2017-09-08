#pragma once
#include "Student.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class AcademyGroup
{
	vector <vector<Student*>> student;
	int count;

public:
	AcademyGroup();
	void AddStudent();
	void DeleteStudent();
	void EditStudent();
	void Print();
	void FindStudent();
	void Sort();

	~AcademyGroup()
	{
		
	}
};