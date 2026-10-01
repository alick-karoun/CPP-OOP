#include "Ticket.h"
#include "NetworkTicket.h"
#include "HardwareTicket.h"
#include <iostream>

int main() {
    const int N = 4;
    Ticket* tickets[N];

    tickets[0] = new NetworkTicket(101, "Alice", "No internet access", "192.168.1.10");
    tickets[1] = new HardwareTicket(102, "Bob", "Laptop won't boot", "Dell XPS 13");
    tickets[2] = new NetworkTicket(103, "Carol", "VPN keeps dropping", "10.0.0.25");
    tickets[3] = new HardwareTicket(104, "Dave", "Broken keyboard", "Logitech K120");

    std::cout << "--- Submitting ---\n";
    for (int i = 0; i < N; ++i)
        submitTicket(tickets[i]);

    std::cout << "\n--- All tickets ---\n";
    for (int i = 0; i < N; ++i)
        displayTicket(tickets[i]);

    std::cout << "\n--- Closing ticket #102 ---\n";
    tickets[1]->close();

    std::cout << "\n--- After closing ---\n";
    for (int i = 0; i < N; ++i)
        displayTicket(tickets[i]);

    std::cout << "\n--- Cleanup ---\n";
    for (int i = 0; i < N; ++i) {
        delete tickets[i];
        tickets[i] = nullptr;
    }

    return 0;
}