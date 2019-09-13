// Humidity and Temperature information collector
 #include <DHT.h>
 #define dataPin 2
 #define DHTType DHT22
 DHT dht = DHT(dataPin, DHTType);
 
void setup() {
  Serial.begin(9600);
  dht.begin();
  
}

void loop() {
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  if (isnan(h) || isnan(t)){
    Serial.println("Failed to read from the DHT sensor, check wiring.");
    return;
}
Serial.print("Humidity: ");
Serial.print(h);
//Print out the Temperature
Serial.print("% || Temperature: ");
Serial.print(t);
Serial.print("°C ");

//Print new line
Serial.println();
}
