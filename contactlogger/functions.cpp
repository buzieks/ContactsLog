#include <iostream>
#include "functions.hpp"

using namespace std;

Contact::Contact(string new_first, string new_last, string new_email, string new_number) {
    first_name = new_first;
    last_name = new_last;
    email = new_email;
    phone_number = new_number;
}

void Contact::change_name(string new_first, string new_last) {
    first_name = new_first;
    last_name = new_last;
}

void Contact::change_email(string new_email) {
    email = new_email;
}

void Contact::view_contact() {
    cout << "First Name: " << first_name << "\n";
    cout << "Last Name: " << last_name << "\n";
    cout << "Phone Number: " << phone_number << "\n";
    cout << "Email: " << email << "\n";
}