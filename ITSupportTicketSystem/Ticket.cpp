#include "Ticket.h"
#include <iostream>
Ticket::Ticket(int id, const std::string& user, const std::string& description)
    : id(id), user(user), description(description), open(true), submitted(false) {}

Ticket::~Ticket() {
    cout << "Ticket #" << id << " destroyed\n";
}

void Ticket::submit() {
    submitted = true;
    cout << "Ticket #" << id << " submitted\n";
}

void Ticket::close() {
    open = false;
    cout << "Ticket #" << id << " closed\n";
}

int Ticket::getId() const { return id; }
bool Ticket::isOpen() const { return open; }

void Ticket::display() const {
    cout << "Ticket #" << id
        << " | User: " << user
        << " | Issue: " << description
        << " | Status: " << (open ? "Open" : "Closed"); //basically if true then open else closed
}

void submitTicket(Ticket* t) {
    if (t) t->submit();
}

void displayTicket(const Ticket* t) {
    if (t) t->display();
}