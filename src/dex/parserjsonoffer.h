#ifndef PARSERJSONOFFER_H
#define PARSERJSONOFFER_H

#include "dex/dexdto.h"

using namespace dex;

MyOfferInfo jsonToMyOfferInfo(const std::string &json, std::string &error);

#endif
