#include <iostream>
#include <string>
#include <vector>

using namespace std;

class TrainTicket {
public:
    TrainTicket(string departureStation, string destinationStation, string passengerAgeCategory, string ticketType, int fare)
        : departureStation(departureStation), destinationStation(destinationStation),
          passengerAgeCategory(passengerAgeCategory), ticketType(ticketType), fare(fare) {}

    string GetDepartureStation() const {
        return departureStation;
    }

    string GetDestinationStation() const {
        return destinationStation;
    }

    string GetPassengerAgeCategory() const {
        return passengerAgeCategory;
    }

    string GetTicketType() const {
        return ticketType;
    }

    int GetFare() const {
        return fare;
    }

private:
    string departureStation;
    string destinationStation;
    string passengerAgeCategory;
    string ticketType;
    int fare;
};

class TicketBookingSystem {
public:
    TrainTicket BookTicket(string departureStation, string destinationStation, string passengerAgeCategory, string ticketType) {
        int fare = CalculateFare(departureStation, destinationStation, passengerAgeCategory, ticketType);
        TrainTicket ticket(departureStation, destinationStation, passengerAgeCategory, ticketType, fare);
        bookedTickets.push_back(ticket);
        return ticket;
    }

    void DisplayAllTickets() {
        for (const auto& ticket : bookedTickets) {
            DisplayTicketDetails(ticket);
        }
    }

private:
    vector<TrainTicket> bookedTickets;

    int CalculateFare(string departureStation, string destinationStation, string passengerAgeCategory, string ticketType) {
        // Calculate fare based on provided parameters
        if (ticketType == "One-way" && passengerAgeCategory == "Adult") {
            return 45;
        } else if (ticketType == "Round-trip" && passengerAgeCategory == "Child") {
            return 30;
        } else if (ticketType == "Monthly Pass" && passengerAgeCategory == "Senior") {
            return 100;
        } else {
            // Default fare if criteria do not match
            return 0;
        }
    }

    void DisplayTicketDetails(const TrainTicket& ticket) const {
        cout << "Starting Station: " << ticket.GetDepartureStation() << endl;
        cout << "Ending Station: " << ticket.GetDestinationStation() << endl;
        cout << "Passenger Age Category: " << ticket.GetPassengerAgeCategory() << endl;
        cout << "Ticket Type: " << ticket.GetTicketType() << endl;
        cout << "Fare: " << ticket.GetFare() << endl;
        cout << "-------------------------------------" << endl;
    }
};

int main() {
    TicketBookingSystem ticketBookingSystem;

    // Book tickets
    TrainTicket ticket1 = ticketBookingSystem.BookTicket("Majestic", "Vidhanasaudha", "Adult", "One-way");
    TrainTicket ticket2 = ticketBookingSystem.BookTicket("Cubbon Park", "Vishweshwaraiah Station", "Child", "Round-trip");
    TrainTicket ticket3 = ticketBookingSystem.BookTicket("Vidhanasaudha", "Majestic", "Senior", "Monthly Pass");

    // Display all booked tickets
    cout << "Details of all booked tickets:" << endl;
    ticketBookingSystem.DisplayAllTickets();

    return 0;
}
