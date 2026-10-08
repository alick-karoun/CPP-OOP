#include "NetworkTicket.h"
#include <iostream>

NetworkTicket::NetworkTicket(int id, const std::string& user,
    const std::string& description, const std::string& ip)
    : Ticket(id, user, description), ipAddress(ip) {}

void NetworkTicket::display() const {
    std::cout << "[Network] ";
    Ticket::display();
    std::cout << " | IP: " << ipAddress << "\n";
}
