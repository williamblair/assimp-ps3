#ifndef AI_GLTF_TO_STRING_H_INCLUDED
#define AI_GLTF_TO_STRING_H_INCLUDED

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

