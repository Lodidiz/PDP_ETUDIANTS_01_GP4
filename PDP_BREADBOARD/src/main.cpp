#include <DHT.h> 
#include <Adafruit_Sensor.h>

#define DHTPIN 33
#define DHTTYPE DHT11 
DHT dht(DHTPIN, DHTTYPE); // déclaration de la fonction


void setup() 
{

  Serial.begin(9600); 
  Serial.println("--------------------");
  Serial.println();
  dht.begin(); // Initialisation DHT22
}

void loop() 
{

  float humidity = dht.readHumidity();  
  float temp = dht.readTemperature();   

  Serial.print("Humidity sensor = ");
  Serial.print(humidity);
  Serial.println(" %");
  
  Serial.print("Température = ");
  Serial.print(temp);
  Serial.println(" °C");
  
  delay(5000);
}