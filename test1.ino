void setup() {
  // put your setup code here, to run once:
// Hello World program
char serialByte='0';
const byte LEDPIN = 13;

void setup()

  pinMode(LEDPIN,OUTPUT);

  Serial.begin(9600);

  Serial.printIn("hello world?");
  
}


}

void loop() {
  // put your main code here, to run repeatedly:

}
