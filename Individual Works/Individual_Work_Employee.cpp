
//number 12
#include <string>
#include <iostream>
#include <vector>

class Employee {
protected: //so derived classes can access it
	std::string name; 
    int id;
public:
    Employee(std::string name, int id) : name(name), id(id) {}
    virtual ~Employee() = default;

	virtual double calculateSalary() const = 0;   // pure virtual function so every child needs to override it
    virtual std::string getType() const = 0;

    void display() const {
        std::cout << "[" << getType() << "] "
            << name << " (ID: " << id << ") -> $"
            << calculateSalary() << "\n";
    }
};


class FullTimeEmployee : public Employee {
private:
    double monthlySalary;
public:
	FullTimeEmployee(std::string name, int id, double monthlySalary) : Employee(name, id), monthlySalary(monthlySalary) {} //parameterized constructor

	double calculateSalary() const override { return monthlySalary; } //the overriding function for calculating salary
    std::string getType() const override { return "Full-Time"; }
};


class PartTimeEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;
public:
    PartTimeEmployee(std::string name, int id, double hourlyRate, int hoursWorked) : Employee(name, id), hourlyRate(hourlyRate), hoursWorked(hoursWorked) {}

	double calculateSalary() const override { return hourlyRate * hoursWorked; } //same here with the overrding to calculate salary
    std::string getType() const override { return "Part-Time"; }
};


class Freelancer : public Employee {
private:
    double ratePerProject;
    int projectsCompleted;
public:
    Freelancer(std::string name, int id, double ratePerProject, int projectsCompleted): Employee(name, id), ratePerProject(ratePerProject), projectsCompleted(projectsCompleted) {}

    double calculateSalary() const override { return ratePerProject * projectsCompleted; } 
    std::string getType() const override { return "Freelancer"; }
};



int main() {
    std::vector<Employee*> staff;     //vector that point to Employee objs
    staff.push_back(new FullTimeEmployee("Anna", 101, 3000));
    staff.push_back(new PartTimeEmployee("Ben", 102, 15, 80));
	staff.push_back(new Freelancer("Cara", 103, 500, 3)); // heap memory, thats why I used new and will delete it later

	for (Employee* e : staff) //this is polymorphism, the base class pointer employee* is pointing to derived class objects and calling the display function
        e->display();

    for (Employee* e : staff)
        delete e;   // works cuz the destructor is virtual
}
