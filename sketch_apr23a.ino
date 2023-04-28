#define led 13
#define sound 3

boolean trig = true;
boolean state = true;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(sound, INPUT);
  Serial.begin(9600);
}

void loop()
{
  trig = digitalRead(sound);
  if(trig == false && state == false)
  {
    digitalWrite(led, HIGH);
    Serial.println("ON");
    state = true;
    delay(500);  
  }
  else if(trig == false && state == true)
  {
    digitalWrite(led, LOW);
    Serial.println("OFF");
    state = false;
    delay(500); 
  }  
}
