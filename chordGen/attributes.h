//
//  attributes.h
//  chordGen
//
//  Created by Nicholas on 11/09/2015.
//  Copyright (c) 2015 Nicholas. All rights reserved.
//

#ifndef chordGen_attributes_h
#define chordGen_attributes_h
#include <string>
struct attribute{
    int beats_per_bar = 0;
    int beat_note_value = 0;
    int bar_number = 0;
    int chord_change = 0;
    std::string key;
};

#endif
