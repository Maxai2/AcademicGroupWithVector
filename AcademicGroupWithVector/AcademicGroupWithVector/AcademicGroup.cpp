#include "AcademicGroup.h"
#include "Student.h"

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
		this->stu.push_back(new Student());
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

		this->stu.push_back(new Student(name, surname, age, phone, average));
	}
}

void AcademyGroup::DeleteStudent()
{
	int index = 0;
	cout << "Input the index of student: ";
	cin >> index;
	index--;

	stu.erase(stu.begin() + index);
}

void AcademyGroup::EditStudent()
{
	cout << endl;

	int index = 0;
	string temp;
	cout << "Input index of student for edit: ";
	cin >> index;
	index--;

	cout << endl;
	cout << stu[index]->getSurname() << '\t';
	cout << stu[index]->getName() << '\t';
	cout << stu[index]->getAge() << '\t';
	cout << stu[index]->getPhone() << '\t';
	cout << stu[index]->getAverage() << '\t' << endl;

	cout << "\nWhat u want to edit?"
		"\n1.Surname"
		"\n2.Name"
		"\n3.Age"
		"\n4.Phone"
		"\n5.Average";

	cout << "\n\nYour select: ";
	int sel = 0;
	cin >> sel;

	switch (sel)
	{
	case 1:
		cout << "Old surname: " << this->stu[index]->getSurname() << endl;
		cout << "New surname: ";
		cin >> temp;

		this->stu[index]->setSurname(temp);
		break;
	case 2:
		cout << "Old name: " << this->stu[index]->getName() << endl;
		cout << "New name: ";
		cin >> temp;

		this->stu[index]->setName(temp);
		break;
	case 3:
		cout << "Old age: " << this->stu[index]->getAge() << endl;
		cout << "New age: ";
		cin >> temp;

		this->stu[index]->setAge(stoi(temp));
		break;
	case 4:
		cout << "Old phone: " << this->stu[index]->getPhone() << endl;
		cout << "New phone: ";
		cin >> temp;

		this->stu[index]->setPhone(temp);
		break;
	case 5:
		cout << "Old average: " << this->stu[index]->getAverage() << endl;
		cout << "New average: ";
		cin >> temp;

		this->stu[index]->setAverage(stod(temp));
	}
}

void AcademyGroup::Print()
{
	cout << endl;
	for (int i = 0; i < this->count; i++)
		//		printf("%s \t %s \t %i \t %s \t %1.0d", this->student[i]->getSurname(), this->student[i]->getName(), this->student[i]->getAge(), this->student[i]->getPhone(), this->student[i]->getAverage());
	{
		cout << i + 1 << ".";
		cout << this->stu[i]->getSurname() << '\t';
		cout << this->stu[i]->getName() << '\t';
		cout << this->stu[i]->getAge() << '\t';
		cout << this->stu[i]->getPhone() << '\t';
		cout << this->stu[i]->getAverage() << '\t' << endl;
	}
}

void AcademyGroup::FindStudent()
{
	cout << endl;
	cout << "Write by which param u want to search:"
		"\n 1.Surname"
		"\n 2.Name"
		"\n 3.Age"
		"\n 4.Phone"
		"\n 5.Average";

	int answer;
	cout << "\n\nBy ";
	cin >> answer;

	string find;
	cout << "What we search ";
	cin >> find;

	for (int i = 0; i < this->count; i++)
	{
		switch (answer)
		{
		case 1:
			if (find == this->stu[i]->getSurname())
			{
				cout << this->stu[i]->getSurname() << '\t';
				cout << this->stu[i]->getName() << '\t';
				cout << this->stu[i]->getAge() << '\t';
				cout << this->stu[i]->getPhone() << '\t';
				cout << this->stu[i]->getAverage() << '\t';
			}
			break;
		case 2:
			if (find == this->stu[i]->getName())
			{
				cout << this->stu[i]->getSurname() << '\t';
				cout << this->stu[i]->getName() << '\t';
				cout << this->stu[i]->getAge() << '\t';
				cout << this->stu[i]->getPhone() << '\t';
				cout << this->stu[i]->getAverage() << '\t';
			}
			break;
		case 3:
			if (stoi(find) == this->stu[i]->getAge())
			{
				cout << this->stu[i]->getSurname() << '\t';
				cout << this->stu[i]->getName() << '\t';
				cout << this->stu[i]->getAge() << '\t';
				cout << this->stu[i]->getPhone() << '\t';
				cout << this->stu[i]->getAverage() << '\t';
			}
			break;
		case 4:
			if (find == this->stu[i]->getPhone())
			{
				cout << this->stu[i]->getSurname() << '\t';
				cout << this->stu[i]->getName() << '\t';
				cout << this->stu[i]->getAge() << '\t';
				cout << this->stu[i]->getPhone() << '\t';
				cout << this->stu[i]->getAverage() << '\t';
			}
			break;
		case 5:
			if (stod(find) == this->stu[i]->getAverage())
			{
				cout << this->stu[i]->getSurname() << '\t';
				cout << this->stu[i]->getName() << '\t';
				cout << this->stu[i]->getAge() << '\t';
				cout << this->stu[i]->getPhone() << '\t';
				cout << this->stu[i]->getAverage() << '\t';
			}
			break;
		default:
			cout << "Student not found!" << endl;
		}
	}
}

void AcademyGroup::Sort()
{
	bool sorted = false;
	int counter = 0;

	for (int i = 1; !sorted; i++)
	{
		if (this->stu[i]->getSurname() < this->stu[i - 1]->getSurname()
			|| this->stu[i]->getName() < this->stu[i - 1]->getName())
		{
			swap(stu[i], stu[i - 1]);

			counter++;
		}

		if (i == this->count - 1 && counter == 0)
			sorted = true;
		else
			if (i == this->count - 1)
			{
				i = 0;
				counter = 0;
			}
	}
}