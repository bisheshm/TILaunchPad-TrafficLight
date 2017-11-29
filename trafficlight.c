#define R1LED RED_LED               //This is the first red LED on pin 2
#define R2LED 8                               //This is the second red LED on pin 8

#define G1LED GREEN_LED         //This is the first green LED on pin 14
#define G2LED 10                            //This is the second green LED on pin 10

#define Y1LED 6                              //This is the first yellow LED on pin 6
#define Y2LED 18                            //This is the second yellow LED on pin 18
 
void setup() {                
  // initialize the digital pins as an output.
  pinMode(R1LED, OUTPUT);     
  pinMode(G1LED, OUTPUT); 
  pinMode(Y1LED, OUTPUT); 
  pinMode(R2LED, OUTPUT);     
  pinMode(G2LED, OUTPUT); 
  pinMode(Y2LED, OUTPUT); 
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(G1LED, HIGH);    // turn the first green LED to HIGH
  digitalWrite(R2LED, HIGH);    // turn the second red LED to HIGH
  delay(3000);                               // wait for three seconds
  digitalWrite(G1LED, LOW);     // turn the first green LED to LOW
  digitalWrite(Y1LED, HIGH);    // turn the first yellow LED to HIGH
  delay(3000);                               // wait for three seconds
  digitalWrite(Y1LED, LOW);     // turn the first yellow LED to LOW
  digitalWrite(R1LED, HIGH);    // turn the first red LED to HIGH
  delay(3000);                               // wait for three seconds
  digitalWrite(R2LED, LOW);     // turn the second red LED to LOW
  digitalWrite(G2LED, HIGH);    // turn the second green LED to HIGH
  delay(3000);                               // wait for three seconds
  digitalWrite(G2LED, LOW);     // turn the second green LED to LOW
  digitalWrite(Y2LED, HIGH);    // turn the second yellow LED to HIGH
  delay(3000);                               // wait for three seconds
  digitalWrite(Y2LED, LOW);     // turn the second yellow LED to LOW
  digitalWrite(R2LED, HIGH);    // turn the second red LED to HIGH
  delay(3000);                               // wait for three seconds
  digitalWrite(R1LED, LOW);     // turn the second red LED to LOW
}
