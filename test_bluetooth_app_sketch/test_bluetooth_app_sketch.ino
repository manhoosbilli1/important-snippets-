String c;

void setup() {
  // put your setup code here, to run once:
  Serial1.begin(9600);
  Serial.begin(9600);
  delay(1000);
  Serial1.println("stop");
  delay(3000);
  Serial1.print("obstacle detected");
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    c = Serial.readString();
    Serial1.println(c);
  }
  if(Serial1.available()){
     c = Serial1.readString();
    Serial.println(c);
  }

}
