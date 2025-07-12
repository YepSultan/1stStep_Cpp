#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using namespace std;
#define nl endl
#define out cout
#define in cin

void nicknames(){
	string name, name2, name3;
	out << "Input Name of 1st Person: ";
	in >> name;
	out << "Input Name of 2nd Person: ";
	in >> name2;
	out << "Input Name of 3th Person: ";
	in >> name3;

	out << "1st: " << name << nl;
	out << "2nd: " << name2 << nl;
	out << "3rd: " << name3 << nl;

 
}

int main(){
	nicknames();
}