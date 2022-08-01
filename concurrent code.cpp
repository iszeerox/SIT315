int sensorstate = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  // read the state of the sensor
  sensorstate = digitalRead(2);
  // Turn on LED if sensorState is High
  if (sensorstate == HIGH) {
    digitalWrite(13, HIGH);
    Serial.println("Congratulations, sensor is now activated");
  } else {
    digitalWrite(13, LOW);
  }
  delay(1000); // Delay a bit to improve performance of the solution
}