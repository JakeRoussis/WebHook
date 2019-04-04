// Declare pins/variables
int photoresistor = A5;
int val;

void setup() {
  pinMode(photoresistor, INPUT);

}

void loop() {
    val = analogRead(photoresistor);
    // check to see what the value of the photoresistor or phototransistor is and store it in the int variable analogvalue
    String lightReading = String(val);
    Particle.publish("lightReading", lightReading, PRIVATE);
    delay(5000);
}
