void setup() {
  
}
my_time = millis();
void loop() {
  

}

void interrupt(){
  time_delay = millis();
  if(time_delay-my_time>172800000){ // Time since last call
    digitalWrite(2,HIGH); // Turn on pump
    delay(3000);
    digitalWrite(2,LOW); // Turn off pump after 3 sec
    my_time = millis(); // Resets value after each watering
  }
}
