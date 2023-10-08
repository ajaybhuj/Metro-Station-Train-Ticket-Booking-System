**Train Ticket Booking System**

**Overview:**

The Train Ticket Booking System is a simple C++ program that allows passengers to book train tickets for different journeys. The system supports various ticket types, including one-way, round-trip, and monthly passes, each with its unique pricing structure. Passengers can book tickets specifying their departure and destination stations, age category (Adult, Child, Senior), and ticket type. The system calculates the fare based on this information and displays the ticket details to the user.

**Features:**

- **Multiple Ticket Types:** The system supports three ticket types: One-way, Round-trip, and Monthly Pass. Each ticket type has a specific fare associated with it.
  
- **Different Age Categories:** Passengers can choose from different age categories, such as Adult, Child, and Senior, each with its fare calculation logic.

- **Fare Calculation:** The system calculates the fare based on the selected stations, passenger's age category, and ticket type. The fare calculation takes into account the distance traveled and the fare per station.

- **Multiple Tickets in a Transaction:** Passengers can book multiple tickets in a single transaction, each with its departure and destination stations, age category, and ticket type.

**How to Use:**

1. **Booking Tickets:**
   - Use the `BookTicket` method of the `TicketBookingSystem` class to book tickets. Provide the departure station, destination station, passenger's age category, and ticket type as parameters. The system will calculate the fare and create a ticket object.

   Example:
   ```cpp
   TicketBookingSystem ticketBookingSystem;
   TrainTicket ticket1 = ticketBookingSystem.BookTicket("Majestic", "Vidhanasaudha", "Adult", "One-way");
   ```

2. **Fare Calculation:**
   - The `CalculateFare` method in the `TicketBookingSystem` class calculates the fare based on the provided parameters (departure station, destination station, passenger's age category, and ticket type). The fare logic is defined within this method.

   Example:
   ```cpp
   int fare = ticketBookingSystem.CalculateFare("Majestic", "Vidhanasaudha", "Adult", "One-way");
   ```

3. **Displaying Ticket Details:**
   - Use the `DisplayAllTickets` method of the `TicketBookingSystem` class to display the details of all booked tickets. The system will print the starting station, ending station, passenger age category, ticket type, and fare for each ticket.

   Example:
   ```cpp
   ticketBookingSystem.DisplayAllTickets();
   ```

**Note:** 
- The fare calculation logic can be customized further based on specific requirements.
- Additional ticket types or age categories can be added by extending the existing logic in the `CalculateFare` method.

Feel free to modify and enhance the code to suit your project's needs!
