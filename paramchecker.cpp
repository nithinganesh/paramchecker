
bool isBpOk(float bpm){
  return !(bpm < 70 || bpm > 150);
}

bool isSpo2Ok(float spo2){
  return !(spo2 < 80);
}

bool isrespRateOk(float respRate){
  return !(respRate < 30 || respRate > 60);
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return (isBpOk(bpm) && isSpo2Ok(spo2) && isrespRateOk(respRate));
}
