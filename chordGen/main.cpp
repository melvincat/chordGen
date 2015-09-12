

#include <iostream>
#include <vector>
#include "attributes.h"
#include "set_attributes.h"
#include "chord_type.h"
#include "chord_generator.h"
#include "chord_convertor.h"
//creates a welcome message, could exist in main but is cleaner this way
void welcome()
{
    using std::string;
    string line1 = "***************************************** \n";
    string line3 = "\t \t \t Chord Generator";
    
    std::cout << line1
    << line1 << "\n"
    << line3
    << "\n" << "\n";
    std::cout << line1 << line1 << "\n";
}
//prints an int
inline void print(int print)
{
    std::cout <<print << "\n";
}
//prints a string, created for ease of use
inline void print(std::string print)
{
    std::cout << print << "\n";
}
int main(int argc, const char * argv[]) {
    //create welcome message
    welcome();
    /*create a vector, stores time signature, key, number of bars
     *number of times the chord changes per bar. This is determined by
     a struct that holds these values*/
    attribute chord_Attributes;
    
    /*calls a function that gets the attributes for the vector
     *via a pointer and sets them */
    set_attributes(&chord_Attributes);
    
    /* print(chord_Attributes.bar_number);
    print(chord_Attributes.chord_change);
    print(chord_Attributes.beats_per_bar);
    print(chord_Attributes.beat_note_value);
    print(chord_Attributes.key); */
    
    
    /*send the vector to the chord generator
     *and it uses them to determine the chords that need to be generated
     returns this in a vector*/
    std::vector<chord_type> chord_vec;
    chord_generator(chord_vec, chord_Attributes.bar_number,
                    chord_Attributes.chord_change, chord_Attributes.beats_per_bar);
    
    /*converts the enums to string and stores this as a vector, these strings are made up
     *the chord name as well as its corresponding notes */
    std::vector<std::string> final = chord_convertor(chord_vec, chord_Attributes.key);
    for (auto print_message : final) print(print_message);
    
    
}
