#pragma once
#include <string>
using namespace std;
class Ticket {
protected:
    int id;
    std::string user;
    std::string description;
    bool open;
    bool submitted;

public:
    Ticket(int id, const std::string& user, const std::string& description);
    virtual ~Ticket();

    void submit();
    void close();
    int getId() const;
    bool isOpen() const;

    virtual void display() const;
};

// Work with any ticket type
void submitTicket(Ticket* t);
void displayTicket(const Ticket* t);


