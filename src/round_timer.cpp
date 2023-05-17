#include "round_timer.h"

//constructor - does nothing
RoundTimer::RoundTimer(void) {
    }

uint16_t RoundTimer::get_roundtrip_reset(void) {           
    uint16_t time_span = millis() - _data.millis_old;
    _data.millis_old = millis();
    return time_span;
    }