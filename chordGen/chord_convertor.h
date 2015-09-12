//
//  chord_convertor.h
//  chordGen
//
//  Created by Nicholas on 12/09/2015.
//  Copyright (c) 2015 Nicholas. All rights reserved.
//

#ifndef __chordGen__chord_convertor__
#define __chordGen__chord_convertor__

#include <stdio.h>
#include <vector>
#include <string>
#include "chord_type.h"
std::vector<std::string> chord_convertor(const std::vector<chord_type> &chord_list,
                                         const std::string key_type);
#endif /* defined(__chordGen__chord_convertor__) */
