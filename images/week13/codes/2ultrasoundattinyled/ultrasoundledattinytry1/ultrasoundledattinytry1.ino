
//Program that ONs the LED on Pin 13 when the distance in Ultrasonic Sensor HC-04 becomes less then 25 cm.
//Ref: Blink Example, http://howtomechatronics.com/tutorials/arduino/ultrasonic-sensor-hc-sr04/ , https://www.arduino.cc/en/reference/else

// defines pins numbers
const int trigPin = 3;
const int echoPin = 7;
const int ledPin = 0;

//define RGB LED pin numbers
int redPin= 0;
int greenPin = 2;
int bluePin = 1;


// defines variables
long duration;
int distance;


// the setup function runs once when you press reset or power the board
void setup() {

pinMode(ledPin, OUTPUT); // Sets the ledPin as an Output
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);


//Serial.begin(9600); // Starts the serial communication
}

// the loop function runs over and over again forever
void loop() {

// Clears the trigPin in the ultrasonic sensor
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
//distance= duration;
// Prints the distance on the Serial Monitor
//Serial.print("Distance: ");
//Serial.println(distance);
setColor(255, 255, 255);
delay (1000);
setColor(0, 0, 0);
delay (1000);
if (distance>25) 
  setColor(255, 255, 255); // RGB
  else 
  setColor(0, 0, 0);
  
  
}

void setColor(int redValue, int greenValue, int blueValue) {
//  analogWrite(redPin, redValue);
//  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
