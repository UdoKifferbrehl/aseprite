// Aseprite Code Generator
// Copyright (c) 2015 David Capello
//
// This file is released under the terms of the MIT license.
// Read LICENSE.txt for more information.

#ifndef GEN_SKIN_CLASS_H_INCLUDED
#define GEN_SKIN_CLASS_H_INCLUDED
#pragma once

#include <string>
#include "tinyxml.h"

void gen_skin_class(TiXmlDocument* doc, const std::string& inputFn);

#endif
