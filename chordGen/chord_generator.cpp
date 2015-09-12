//
//  chord_generator.cpp
//  chordGen
//
//  Created by Nicholas on 12/09/2015.
//  Copyright (c) 2015 Nicholas. All rights reserved.
//

#include "chord_generator.h"
#include "chord_type.h"
#include <vector>
#include <iostream>
#include <random>
inline int RandomNumber(int min, int max){
    std::random_device rd;
    std::uniform_int_distribution<> distr(min, max);
    return distr(rd);
}
void chord_picker(std::vector<chord_type> &chord, const int count)
{
    typedef chord_type C;
    chord_type chordA = chord[count-1];
    switch (chordA)
    {
        case C::I:
                switch (RandomNumber(0, 4))
                {
                    case 0:
                        chord.push_back(C::IV);
                        break;
                    case 1:
                        chord.push_back(C::V);
                        break;
                    case 2:
                        chord.push_back(C::VI);
                        break;
                    case 3:
                        chord.push_back(C::Ib);
                        break;
                    case 4:
                        chord.push_back(C::IIb);
                        break;
                }
            break;
        case C::Ib:
                switch (RandomNumber(0, 2))
                {
                    case 0:
                        chord.push_back(C::IV);
                        break;
                    case 1:
                        chord.push_back(C::IIb);
                        break;
                    case 2:
                        chord.push_back(C::VI);
                        break;
                }
            break;
        case C::II:
            chord.push_back(C::V);
            break;
        case C::IIb:
            chord.push_back(C::V);
            break;
        case C::III:
            break;
        case C::IV:
                switch (RandomNumber(0, 1))
                {
                    case 0:
                        chord.push_back(C::V);
                        break;
                    case 1:
                        chord.push_back(C::IIb);
                        break;
                }
            break;
        case C::V:
                switch (RandomNumber(0, 2))
                {
                    case 0:
                        chord.push_back(C::VI);
                        break;
                    case 1:
                        chord.push_back(C::I);
                        break;
                    case 2:
                        chord.push_back(C::Ib);
                        break;
                }
            break;
        case C::VI:
                switch (RandomNumber(0, 1))
                {
                    case 0:
                        chord.push_back(C::II);
                        break;
                    case 1:
                        chord.push_back(C::IIb);
                        break;
                }
            break;
        case C::VII:
            break;
        
    }
}
void chord_generator(std::vector<chord_type> &chord_vec, const int &bar_number,
                     const int &chord_changes, const int &beats_per_bar)
{
    //get the size of the vector
    const int chord_num = bar_number * beats_per_bar/chord_changes;

    
    
    for (int count = 0; count < chord_num; count++)
    {
        if (count == 0) chord_vec.push_back(chord_type::I);
        chord_picker(chord_vec, count);
    }
    
}