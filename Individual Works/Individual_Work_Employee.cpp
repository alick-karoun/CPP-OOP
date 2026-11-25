
//number 12
#include <string>
#include <iostream>

class Employee {
private:
	std::string name;
	std::string salary;
public:
	Employee(std::string name, std::string salary) : name(name), salary(salary) {};
	~Employee() {};
};

int main()
{
    std::cout << "Hello World!\n";
}

