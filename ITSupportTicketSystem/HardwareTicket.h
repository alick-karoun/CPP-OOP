#pragma once
#include "Ticket.h"
class HardwareTicket : public Ticket {
    std::string deviceName;  // unique attribute

public:
    HardwareTicket(int id, const std::string& user,
        const std::string& description, const std::string& device);
    void display() const override;
};


