


// Basic Bluetooth test sketch 5a for the Arduino Mega. 
// AT mode using button switch
// HC-05 with EN pin and button switch
//
// Uses serial with the host computer and serial1 for communication with the Bluetooth module
//
//  Pins
//  BT VCC to Arduino 5V out. Disconnect before running the sketch
//  BT GND to Arduino GND
//  BT RX (through a voltage divider) to Arduino TX1 (pin 18)
//  BT TX  to Arduino RX1 (no need voltage divider)   (pin 19)
//
// When a command is entered in to the serial monitor on the computer 
// the Arduino will relay it to the Bluetooth module and display the result.
//


//Mke sure to select tools > Board:Arduino/Genuino Mega or Mega 2560 and select a port under Tools > Port
//Do not press button on bt module
 
char serialByte = '0';
const byte  LEDPIN = 13; 
 
void setup() 
{
    pinMode(LEDPIN, OUTPUT);
 
    // communication with the host computer
    Serial.begin(9600);  
 
    Serial.println("Do not power the BT module");
 
    // communication with the BT module on serial1
    Serial1.begin(9600);
}
 
 
void loop() 
{
    // listen for communication from the BT module and then write it to the serial monitor
    if ( Serial1.available() )   {  Serial.println( Serial1.readString() );  }
 
    // listen for user input and send it to the HC-05
   if ( Serial.available() )   {  Serial1.println( Serial.readString() );  }
}
