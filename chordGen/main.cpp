//
//  main.cpp
//  chordGen
//
//  Created by Nicholas on 11/09/2015.
//  Copyright (c) 2015 Nicholas. All rights reserved.
//

#include <iostream>

void welcome()
{
    using std::string;
    string line1 = "***************************************** \n";
    string line3 = "\t \t \t Chord Generator";
    
    std::cout << line1
    << line1 << "\n"
    << line3
    << "\n" << "\n";
    std::cout << line1 << line1;
}
int main(int argc, const char * argv[]) {
    //create welcome message
    welcome();
    /*create a vector, stores time signature, key, number of bars
     *number of times the chord changes per bar. This is determined by
     a struct that holds these values*/
    
    
    /*calls a function that gets the attributes for the vector
     *via a pointer and sets them */
    
    /*send the vector to the chord generator
     *and it uses them to determine the chords that need to be generated
     returns this in a vector*/
    
}
