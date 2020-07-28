bool isValidRange(float val, int min_val, int max_val){
  return !(val < min_val || val > max_val);
}

bool isBpOk(float bpm){
  return isValidRange(bpm,70,150);
}

bool isSpo2Ok(float spo2){
  return isValidRange(spo2,80,100);
}

bool isrespRateOk(float respRate){
  return isValidRange(respRate,30,60);
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return (isBpOk(bpm) && isSpo2Ok(spo2) && isrespRateOk(respRate));
}
