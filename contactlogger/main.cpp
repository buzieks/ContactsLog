#include <iostream>
#include "functions.hpp"

using namespace std;

int main() {
    Contact one("Kyle", "Vo", "kylevo@gmail.com", "805-123-4567");
    one.change_name("Aidan", "Cheng");
    one.change_email("aidancheng@gmail.com");
    one.view_contact();


}