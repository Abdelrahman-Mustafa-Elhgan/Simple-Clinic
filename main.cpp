#include <iostream>
using namespace std;


int main()
{

    string username, password;
    cout << "Enter A Username: ";
    cin >> username;
    cout << "Enter A Password: ";
    cin >> password;

    if (username == "admin" && password == "1234") {
        cout << "Login successful\n";
    } else {
        cout << "Login Fail\n";
    }

    int choice;
    cout << "Choose Appointment Type:\n";
    cout << "1 - New Checkup\n";
    cout << "2 - Follow-up\n";
    cout << "3 - Cancel Appointment\n";
    cin >> choice;

    switch (choice) {
        case 1: cout << "Booking a new checkup\n"; break;
        case 2: cout << "Booking a follow-up\n"; break;
        case 3: cout << "Cancelling appointment\n"; return 0;
        default: cout << "Invalid choice.\n"; return 0;
    }


    int day;
    double price;
    cout << "Choose day of the week (1-7): ";
    cin >> day;

    switch (day) {
        case 1: price = 500; break;  // Saturday
        case 2: price = 600; break;  // Sunday
        case 3: price = 650; break;  // Monday
        case 4: price = 550; break;  // Tuesday
        case 5: price = 700; break;  // Wednesday
        case 6: price = 750; break;  // Thursday
        case 7: price = 400; break;  // Friday
        default:
        cout << "Invalid day.\n";
        return 0;
    }

    double finalPrice = (price > 500) ? price * 0.9 : price; 
    cout << "Original price: " << price << " EGP\n";
    cout << "Final price after discount (if any): " << finalPrice << " EGP\n";


}




	
	