#pragma once

using namespace week02;

int Car::getSafetyRating() {
    int safetyRating = 0;
    if (m_numberOfAirBags >= 4) {
        safetyRating += 3;
    } else if (m_numberOfAirBags >= 2) {
        safetyRating += 2;
    } else if (m_numberOfAirBags > 0) {
        safetyRating += 1;
    }

    if (m_abs) {
        safetyRating += 2;
    }
    return safetyRating;
}
