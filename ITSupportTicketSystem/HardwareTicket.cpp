#include "HardwareTicket.h"
#include <iostream>
HardwareTicket::HardwareTicket(int id, const std::string& user,
    const std::string& description, const std::string& device)
    : Ticket(id, user, description), deviceName(device) {}

void HardwareTicket::display() const {
    cout << "[Hardware] ";
    Ticket::display();
    cout << " | Device: " << deviceName << "\n";
};