#include <iostream>
//diamond 
class Person{
public:
    std::string name;
};

class Student : virtual public Person{};
class Teacher : virtual public Person{};
class TeachingAssistant : public Student{}, public Teacher{};

int main(){
    TeachingAssistant obj;
    obj.name = "Ted";

    std::cout<<obj.name<<std::endl;
    return 0;
}