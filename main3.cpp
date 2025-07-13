#include <iostream>
#include <string> 

using namespace std;

#define in cin
#define out cout
#define nl endl

string name, name2, name3;

class PersonNames{
public:
	void getNames(){
		out << "Input name: ";
		in >> name;
		out << "Input name2: ";
		in >> name2;
		out << "Input name3: ";
		in >> name3;



		out << "1st Client: " << name  << nl;
		out << "2nd Client: " << name2 << nl;
		out << "3rd Client: " << name3 << nl;

	} 
};

class PersonAges{
public:
	int age, age2, age3;
	void getAges(){
		out << "Input age: ";
		in >> age;
		out << "Input age2: ";
		in >> age2;
		out << "Input age3: ";
		in >> age3;

		out << "| 1st: " << name  << " | Age: " << age  << nl;
		out << "| 2nd: " << name2 << " | Age: " << age2 << nl;
		out << "| 3rd: " << name3 << " | Age: " << age3 << nl; 


	}
};

int main(){
	PersonNames pn;
	pn.getNames();

	PersonAges pa;
	pa.getAges();
}
