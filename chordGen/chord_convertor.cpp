//
//  chord_convertor.cpp
//  chordGen
//
//  Created by Nicholas on 12/09/2015.
//  Copyright (c) 2015 Nicholas. All rights reserved.
//

#include "chord_convertor.h"
#include <vector>
#include <string>
#include <iostream>
#include "chord_type.h"
#include "key.h"
std::string key_values(const std::vector<std::string> &key,
                       const int &first, const int &second, const int &third)
{
    std::string str = " (" + key[first] + ", " + key[second] + ", "+key[third] + ")";
    return str;
}
std::vector<std::string> chord_convertor(const std::vector<chord_type> &chord_list,
                                         const std::string key_type)
{
    typedef chord_type C;
    std::vector<std::string> key = key_signature(key_type);
    std::vector<std::string> final_chord;
    
    for (auto chord : chord_list)
    {
        std::string str;
        switch (chord)
        {
            case C::I:
                str = "I" + key_values(key, 0, 2, 4);
                break;
            case C::II:
                str = "II" + key_values(key, 1, 3, 5);
                break;
            case C::Ib:
                str = "Ib" + key_values(key, 2, 4, 0);
                break;
            case C::IIb:
                str = "IIb" + key_values(key, 4, 0, 2);
                break;
            case C::III:
                str = "III" + key_values(key, 2, 4, 6);
                break;
            case C::IV:
                str = "IV" + key_values(key, 3, 5, 0);
                break;
            case C::V:
                str = "V" + key_values(key, 4, 6, 1);
                break;
            case C::VI:
                str = "VI" + key_values(key, 5, 0, 2);
                break;
            case C::VII:
                str = "VII" + key_values(key, 6, 1, 3);
                break;
            default:
                std::cerr << "Not a valid chord" << std::endl;
                exit(EXIT_FAILURE);
                break;
                
                
        }
        final_chord.push_back(str);
        str.clear();
    }
    return final_chord;
}