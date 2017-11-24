#ifndef __PATH_FINDER_H_INCLUDED__
#define __PATH_FINDER_H_INCLUDED__
#include <string>
#include "json.hpp"

using nlohmann::json;

std::string path_finder(json map);

#endif
