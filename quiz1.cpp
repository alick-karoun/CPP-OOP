#include <iostream>
#include <string>

class Employee{
    protected:
    std::string name;

    public:
    Employee(){};
    Employee ( const std::string name) : name(name) {}
    virtual ~Person () = default;

    virtual int calculateSalary(){}=0

};

class FullTimeEmployee : public Employee {
    public:
    int calculateSalary() const override{
        std::cout<<300000;
    }
}

class PartTimeEmployee : public Employee {
    public:
    int calculateSalary() const override{
    }
}

int main(){

}