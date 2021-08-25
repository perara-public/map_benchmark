#pragma once

#include "Hash.h"
#include <perhash/PerHash.h>

static const char* MapName = "perhash::hash_map";

template <class Key, class Val>
using Map = PerHash::HashMap<Key, Val>;
