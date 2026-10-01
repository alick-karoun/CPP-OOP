
#include <iostream>
using namespace std;

class Employee {
    int id;
	string name;
    string salary;
public:
	Employee(int id, string name, string salary) {
		this->id = id;
		this->name = name;
		this->salary = salary;//constructor of base class
	}
	void display() {
		cout << "ID: " << id << endl;
		cout << "Name: " << name << endl;
		cout << "Salary: " << salary << endl;
	}
};

class Developer : public Employee {
	string programmingLanguage;
public:
	Developer(int id, string name, string salary, string programmingLanguage) : Employee(id, name, salary) {
		this->programmingLanguage = programmingLanguage;//constructor of derived class	
	}
	void display() {
		Employee::display();
		cout << "Programming Language: " << programmingLanguage << endl;
	}
};

class Designer : public Employee {
	string designTool;
public:
	Designer(int id, string name, string salary, string designTool) : Employee(id, name, salary) {
		this->designTool = designTool; //constructor of derived class
	}
	void display() {
		Employee::display();
		cout << "Design Tool: " << designTool << endl;
	}
};

int main(){
	Developer dev(1, "John Doe", "$5000", "C++");
	Designer designer(2, "Jane Smith", "$4500", "Photoshop");
	dev.display();
	designer.display();
    return 0;
}
