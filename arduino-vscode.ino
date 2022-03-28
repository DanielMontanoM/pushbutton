const int button1Pin = 2; 
const int button2Pin = 3; 
const int ledPin =  13; 

int button1State, button2State; 

void setup()
{
    Serial.begin(9600);

  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);

  pinMode(ledPin, OUTPUT);      
}

void loop()
{
  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);

if ((button1State == HIGH) && (button2State == HIGH)) {
    digitalWrite(13, LOW);
    Serial.println("Button pushed");

}else {
    digitalWrite(13, HIGH);
    Serial.println("Button is Pressed"); 

}
