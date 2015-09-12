//
//  set_attributes.cpp
//  chordGen
//
//  Created by Nicholas on 12/09/2015.
//  Copyright (c) 2015 Nicholas. All rights reserved.
//
#include <iostream>
#include "set_attributes.h"
#include "attributes.h"
#include <string>
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