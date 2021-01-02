void setup() {

  // Setting up pins
  pinMode(2, OUTPUT); // Pin D2 will control relay, will go to pin IN1 on the relay\
  
  pinMode(3, INPUT); // Setting up interrupt pin
  attachInterrupt(3, interrupt, RISING); // Should trigger (hopefully) once in the morning

}

void loop() {
  

}
