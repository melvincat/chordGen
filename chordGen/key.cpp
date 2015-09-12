//
//  key.cpp
//  chordGen
//
//  Created by Nicholas on 12/09/2015.
//  Copyright (c) 2015 Nicholas. All rights reserved.
//
#include "key.h"
#include <vector>
#include <string>
#include <iostream>

//this function returns a vector full of strings holding the values of a key
//It gets a string that it uses to determine which key
std::vector<std::string> key_signature(std::string key) {
    using std::vector;
    vector<std::string> KEY;
    if (key == "A") { return KEY = { "A", "B", "C#", "D", "E", "F#", "G#" }; }
    else if (key == "Bb") { return KEY = { "Bb, C, D, Eb, F, G, Ab" }; }
    else if (key == "B") { return KEY = { "B", "C#", "D#", "E", "F#", "G#" }; }
    else if (key == "C") { return KEY = { "C", "D", "E", "F", "G", "A", "B" }; }
    else if (key == "Db") { return KEY = { "Db", "Eb", "F", "Gb", "Ab", "Bb", "C" }; }
    else if (key == "D") { return KEY = { "D", "E", "F#", "G", "A", "B", "C#" }; }
    else if (key == "Eb") { return KEY = { "Eb", "F", "G", "Ab", "Bb", "C", "D" }; }
    else if (key == "E") { return KEY = { "E", "F#", "G#","A", "B", "C#", "D" }; }
    else if (key == "F") { return KEY = { "F", "G", "Bb", "C", "D", "E" }; }
    else if (key == "F#") {return KEY = { "F#", "G#","A#", "B", "C#", "D#", "E"}; }
    else if (key == "G") { return KEY = { "G", "A", "B", "C", "D", "E", "F#" }; }
    else if (key == "Ab") { return KEY = { "Ab", "Bb", "C", "Db", "Eb", "F", "G" }; }
    else
    {
        std::cerr << "Not a valid input, Goodbye!" << std::endl;
        exit(EXIT_FAILURE);
    }
}