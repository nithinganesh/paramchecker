#include <limits.h>

bool isValid(float val, int min_val = INT_MIN, int max_val = INT_MAX){
  return !(val < min_val || val > max_val);
}

bool isBpOk(float bpm){
  return isValid(bpm,70,150);
}

bool isSpo2Ok(float spo2){
  return isValid(spo2,80);
}

bool isrespRateOk(float respRate){
  return isValid(respRate,30,60);
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return (isBpOk(bpm) && isSpo2Ok(spo2) && isrespRateOk(respRate));
}
