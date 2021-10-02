#include <iostream>

using namespace std;
class Contact {
    private:
        string first_name;
        string last_name;
        string email;
        string phone_number;
    
    public:
        Contact(string new_first="N/A", string new_last="N/A", string new_email="N/A", string new_number="N/A");
        void change_name(string new_first="N/A", string new_last="N/A");
        void change_email(string new_email);
        void change_number(string new_number);
        void view_contact();


};