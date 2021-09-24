int sensorPin = A1;    // select the input pin for the sensor
int sensorValue = 0;  // variable to store the value coming from the sensor

int maxValue = 1024;  //values to be used if you want to disable auto zoom on plotter
int minValue = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  
  sensorValue = analogRead(sensorPin);  // read the value from the sensor:
  
    //toggle this block of code to disable auto zoom on plotter
      /*    Serial.print(minValue);
            Serial.print(" ");
            Serial.print(maxValue);
            Serial.print(" "); */
  
}
