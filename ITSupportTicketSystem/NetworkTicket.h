#pragma once
#include "Ticket.h"
class NetworkTicket : public Ticket {
    std::string ipAddress;   // unique attribute

public:
    NetworkTicket(int id, const std::string& user,
        const std::string& description, const std::string& ip);
    void display() const override;
};


