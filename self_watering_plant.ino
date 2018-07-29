#define PUMP 2
#define READSOILMOISTURE A0
#define MAXIMUMDRYNESS 700
void setup()
{
  Serial.begin(9600);
  pinMode(READSOILMOISTURE, INPUT);
  pinMode(PUMP, OUTPUT);
}

void loop()
{
  int SensorValue = analogRead(READSOILMOISTURE);
  Serial.print(SensorValue);
  if(SensorValue >= MAXIMUMDRYNESS) 
  {
   Serial.println("Since Soil is dry......... Start watering");
   digitalWrite(PUMP, HIGH);
   delay(1000);
   digitalWrite(PUMP, LOW);
   delay(4000);
  }
  
  delay(50);
}

