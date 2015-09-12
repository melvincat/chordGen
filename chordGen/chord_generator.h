//
//  chord_generator.h
//  chordGen
//
//  Created by Nicholas on 12/09/2015.
//  Copyright (c) 2015 Nicholas. All rights reserved.
//

#ifndef __chordGen__chord_generator__
#define __chordGen__chord_generator__

#include <stdio.h>
#include "chord_generator.h"
#include "chord_type.h"
#include <vector>
void chord_generator(std::vector<chord_type> &chord_vec, const int &bar_number,
                     const int &chord_changes, const int &beats_per_bar);
#endif /* defined(__chordGen__chord_generator__) */
