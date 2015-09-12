

#ifndef chordGen_attributes_h
#define chordGen_attributes_h
#include <string>
//creates a struct that holds the attributes for chord generation
struct attribute{
    int beats_per_bar = 0;
    int beat_note_value = 0;
    int bar_number = 0;
    int chord_change = 0;
    std::string key;
};

#endif
