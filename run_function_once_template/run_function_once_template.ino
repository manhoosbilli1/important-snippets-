bool playFlag = true;
bool timerFlag = true;
unsigned long timer;
String command;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    char c = Serial.read();
    if(c == 'y'){
      playFlag = true;
      timerFlag = true;
    }
  }
  if (playFlag) {
    if (timerFlag) {
      timer = millis();
      timerFlag = false;
    }
    Serial.println("playing audio");
    if (millis() - timer > 5000) {
      playFlag = false;
      Serial.println("audio stopped");
    }

  } else Serial.println("Not inside the main thing");
}
