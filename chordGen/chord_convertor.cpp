
#include "chord_convertor.h"
#include <vector>
#include <string>
#include <iostream>
#include "chord_type.h"
#include "key.h"
//creates a string that returns the corresponding notes of a chord
//based on the key signature
std::string key_values(const std::vector<std::string> &key,
                       const int &first, const int &second, const int &third)
{
    std::string str = "\t(" + key[first] + ", " + key[second] + ", "+key[third] + ")";
    return str;
}
std::vector<std::string> chord_convertor(const std::vector<chord_type> &chord_list,
                                         const std::string key_type)
{
    //create a type def of Chord_type for easy use
    typedef chord_type C;
    //creates a vector that holds the key signature of the chords
    //and the corresponding note values
    std::vector<std::string> key = key_signature(key_type);
    //create a vector key, that is returned to the calling function
    std::vector<std::string> final_chord;
    
    //for all the elements of the vecotr chord_list
    for (auto chord : chord_list)
    {
        //create an unitialised string that is evaluated in one of the cases
        //depending on the value of an element chord_list
        std::string str;
        switch (chord)
        {
            case C::I:
                //calls key values with the corresponding note values of the chord
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
                //if one of the chords is not here
                //this should never be exicuted as they are all enums already
                //defined
                std::cerr << "Not a valid chord" << std::endl;
                exit(EXIT_FAILURE);
                break;
                
                
        }
        //push the initialised version of str to final_chord
        final_chord.push_back(str);
        //clear str and make it unitialised
        str.clear();
    }
    return final_chord;
}