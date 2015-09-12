//
//  key.h
//  chordGen
//
//  Created by Nicholas on 12/09/2015.
//  Copyright (c) 2015 Nicholas. All rights reserved.
//

#ifndef __chordGen__key__
#define __chordGen__key__

#include <stdio.h>
#include <vector>
#include <string>

//this function returns a vector full of strings holding the values of a key
//It gets a string that it uses to determine which key
std::vector<std::string> key_signature(std::string key);
#endif /* defined(__chordGen__key__) */
