#define LED_PIN 13

class Led 
{
private:

public:

};



void setup()
{
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
digitalWrite(LED_PIN, HIGH);  // turn the LED on (HIGH is   the voltage level)
delay(500);  // wait for a second 
digitalWrite(LED_PIN, LOW);   // turn the LED off by making  thevoltage LOW
delay(500);  // wait for a second
}

 

