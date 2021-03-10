// WILLPOWER @ Swatch Exchange 2021

#define LED_BUILTIN 13 
#define LED 4 
//int sensor; 
int bendSensorValue;
int light;

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  //  sensor = 10;
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(A0, INPUT_PULLUP);
}

// the loop function runs over and over again forever
void loop() {
  bendSensorValue = analogRead(A0);

  //light = map(bendSensorValue, 600, 23, 0, 255);
  light = map(bendSensorValue, 740, 840, 255, 0);
  light = constrain(light, 0, 255);
  //analogWrite(6, light);
  digitalWrite(LED_BUILTIN, light);
  digitalWrite(LED, light);

  Serial.print(bendSensorValue);
//  Serial.print(",");
//  Serial.print(0);
//  Serial.print(",");
//  Serial.print(1023);
  Serial.println();

} 
