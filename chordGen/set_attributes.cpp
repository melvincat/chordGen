
#include <iostream>
#include "set_attributes.h"
#include "attributes.h"
#include <string>
//sets the attributes for chord generation, calling a pointer to
//a struct
void set_attributes(attribute * att)
{
    using std::cout; using std::cin;
    cout << "Enter the number of bars: ";
    cin >> att->bar_number;
    cout << "Enter the key signature: ";
    cin.ignore();
    std::getline(cin, att->key);
    cout << "Enter the time signature (bar lenght followed by note value)\n";
    cout << "Bar lenght: ";
    cin >> att->beats_per_bar;
    cout << "Note Value: ";
    cin >> att->beat_note_value;
    cout << "Enter how often the chord will change (per beat): ";
    cin >> att->chord_change;
}