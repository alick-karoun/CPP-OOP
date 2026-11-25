#include <iostream>

class Device{
public:
    std::string ip;
};

class Computer : public Device {
private:
    std::string cpu;
public:
    void printInfo(){
        this->ip="ip address";
    }
};


int main(){
    Computer computer;

    return 0;
}