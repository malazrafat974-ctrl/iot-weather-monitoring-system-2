#include <DHT.h>
#include <LiquidCrystal.h>

// DHT11
#define DHT_PIN 2
#define DHT_TYPE DHT11

// LDR
#define LDR_PIN A0

// LCD: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(7, 6, 5, 4, 3, 8);

DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  Serial.begin(9600);

  dht.begin();
  lcd.begin(16, 2);

  lcd.setCursor(0, 0);
  lcd.print("Weather Monitor");

  lcd.setCursor(0, 1);
  lcd.print("Starting...");

  delay(2000);
  lcd.clear();
}

void loop() {

  // Read sensors
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  int lightIntensity = analogRead(LDR_PIN);

  // Check DHT11
  if (isnan(temperature) || isnan(humidity)) {

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("DHT11 Error!");

    Serial.println("Error: Failed to read from DHT11.");

    delay(2000);
    return;
  }

  // Serial Monitor
  Serial.println("IoT Weather Monitoring System");
  Serial.println("-----------------------------");

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  Serial.print("Light Intensity: ");
  Serial.println(lightIntensity);

  Serial.println("-----------------------------");

  // LCD - Temperature
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature, 1);
  lcd.print((char)223);
  lcd.print("C");

  lcd.setCursor(0, 1);
  lcd.print("Humidity: ");
  lcd.print(humidity, 0);
  lcd.print("%");

  delay(3000);

  // LCD - Light
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Light:");

  lcd.setCursor(0, 1);
  lcd.print(lightIntensity);

  delay(2000);
}
