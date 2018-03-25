#pragma once
#include "bicycle.h"

using namespace week02;

Bicycle::getSafetyRating(){
    if (m_helmetUsed) {
        return 5;
    } else {
        return 0;
    }
}
