#ifndef ROUNDTIMER_H
#define ROUNDTIMER_H

#include <Arduino.h>

class RoundTimer {
    public:
        RoundTimer(void);
        uint16_t        get_roundtrip_reset();  //returns the last round trip time with resetting the counter

    private:
        struct data_struct {
            unsigned long millis_old;                    
            };
        data_struct _data;
    };

#endif