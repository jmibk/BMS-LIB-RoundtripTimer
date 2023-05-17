#include <Arduino.h>

#include "round_timer.h"
RoundTimer roundtrip = RoundTimer();

void setup() {
  Serial.begin(115200);
  }

void loop() {
  uint16_t time = roundtrip.get_roundtrip_reset();
  Serial.println(time);
  delay(1000);
  }