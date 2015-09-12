
#ifndef __chordGen__chord_convertor__
#define __chordGen__chord_convertor__

#include <stdio.h>
#include <vector>
#include <string>
#include "chord_type.h"
std::vector<std::string> chord_convertor(const std::vector<chord_type> &chord_list,
                                         const std::string key_type);
#endif /* defined(__chordGen__chord_convertor__) */
