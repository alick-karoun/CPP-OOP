#include <iostream>
#include <string>
//class work, University management system
//diamond 

class Person{
private:
    const std::string name;
    short age;
public:
    Person(){} //default constructor is a must
    Person(const std::string& name, short age) : name(name), age(age){}//parameterized constructor
    virtual ~Person() = default;


    const std::string& getName() const {
        return name;
    }

    short getAge() const{
        return age;
    }

    void setName(const std::string& name){
        this->name=name;
    }

    void setAge(short age){
        this->age=age;
    }
    

    virtual void displayInfo(){
        std::cout<<"Name: "<<name<<'\n';
        std::cout<<"Age: "<<age<<'\n';
    }
};

class Student : public Person{
private:
    std::string studentID;
public:
    Student() : Person(){} //default constructor to be able to make an object WITH studentID
    Student(const std::string& name, short age, const std::string& studentID) : Person(name,age), studentID(studentID){}
    virtual ~Student()=default;

    const std::string& getStudentID const{
        return studentID;
    }

    void setStudentID(const std::string& studentID){
        this->studentID = studentID;
    }

    void displayInfo() const override{
        Person::displayInfo();
        std::cout<<"Student ID: "<< studentID<<'\n';
    }
};

class Employee : public Person{
private:
    int salary;
public:
    Employee() : Person(){}
    Employee(const std::string& name, short age, int salary) : Person(name,age) , salary(salary){}

    int getSalary(int salary){
        return salary;
    }

    void setSalary(int salary){
        this->salary=salary;
    }

    void displayInfo() const override{
        Person::displayInfo();
        std::cout<<"Salary: "<<salary<<'\n';

    }
};

class TeachingAssistant : public Student, public Employee{}; //the diamond


int main(){
    Student s("Alex", 22, "12T");

    return 0;
}