#include <iostream>

class Student{};

class Coach{};

class Alex : private Student, protected Coach{
    ... 

};

int main(){
    return 0;
}