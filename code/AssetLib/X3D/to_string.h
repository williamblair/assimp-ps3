#ifndef AI_X3D_TO_STRING_H_INCLUDED
#define AI_X3D_HALFLIFE_TO_STRING_H_INCLUDED

#include <sstream>
#include <string>

/** Replacement for std::to_string */
template<typename T>
static inline std::string to_string(T val) {
    std::stringstream ss;
    ss << val;
    return ss.str();
}

#endif

