// pre-processor directives: none
// pin name definitions
#define ANALOG_IN_PIN A0
#define ANALOG_OUT_PIN 9

// class declarations: none
// global variables:
int sensorValue;
int brightness = 0;  // LED brightness value
int fadeAmount = 5;  // how many points to fade the LED

void setup() {
  // configure HIGH SPEED data communication
  Serial.begin(115200);
  // code that runs only once
  Serial.println("Analog Input and Output Test Program");
  delay(1000);
  // initialize analog output pin as output
  pinMode(ANALOG_OUT_PIN, OUTPUT);
}

void loop() {
  // read analog input
  sensorValue = analogRead(ANALOG_IN_PIN);
  
  // set the brightness of LED:
  brightness = sensorValue / 4;
  //(brightness = sensorValue >> 2).
  // data communication
  
  // print sensor Value and brightness value in Serial Monitor
  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);
  Serial.print("\tLED Brightness: ");
  Serial.println(brightness);
  
  // set the brightness of LED:
  analogWrite(ANALOG_OUT_PIN, brightness);
  
  // data processing
  // change the brightness for next time through the loop:
  //brightness = brightness + fadeAmount;
  
  
  // reverse the direction of the fading at the ends of the fade:
  //if (brightness <= 0 || brightness >= 255) {
   // fadeAmount = -fadeAmount;
  //}
  // wait for 30 milliseconds to see the dimming effect
  
  delay(30);
}