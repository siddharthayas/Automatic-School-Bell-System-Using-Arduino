#include <LiquidCrystal_I2C.h>
#include <DS3231.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
// Set the LCD address to 0x27 by Teach Me Something
LiquidCrystal_I2C lcd(0x27, 16, 2);   
int relayPin = 4;
DS3231 rtc(SDA, SCL);

const int OnHour1 = 9; // First bell time (24 hour format)
const int OnMin1 = 15;

const int OnHour2 = 10; // Second bell time
const int OnMin2 = 0;

const int OnHour3 = 10; // Third bell time
const int OnMin3 = 24;

const int OnHour4 = 11; // forth bell time
const int OnMin4 = 30;

const int OnHour5 = 11; // fifth bell time
const int OnMin5 = 35;

const int OnHour6 = 12; // sixth bell time
const int OnMin6 = 20;

const int OnHour7 = 13; // seventh bell time
const int OnMin7 = 5;

const int OnHour8 = 13; // Eight bell time
const int OnMin8 = 35;

const int OnHour9 = 14; // ninth bell time
const int OnMin9 = 20;

const int OnHour10 = 15; // tenth bell time
const int OnMin10 = 5;

const int OnHour11 = 15; // eleventh bell time
const int OnMin11 = 10;

const int OnHour12 = 15; // twelve bell time
const int OnMin12 = 55;

const int OnHour13 = 16; //  thirtheen bell time
const int OnMin13 = 40;

const int bellDuration = 10000; // duration to keep the relay on in milliseconds

void setup() {
  Serial.begin(9600);
  rtc.begin();
  lcd.begin();  
  lcd.print("    WELCOME");
  delay(4000);  
  lcd.clear();
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, HIGH); // turn off the relay initially
}

void loop() {
  Time t = rtc.getTime();
  
  // Show the current time in the serial monitor
  Serial.print(rtc.getDOWStr());
  Serial.print(" ");
  // Serial.print(rtc.getDateStr());
Serial.println(rtc.getTimeStr());  
  Serial.print(" -- ");
  lcd.setCursor(0,0);
  lcd.print("Time: ");
  lcd.print(rtc.getTimeStr());
  
  lcd.setCursor(0,1);
 lcd.print(" ") ;
//  lcd.print(rtc.getDateStr());
//  lcd.print("  ") ;
//   lcd.print(rtc.getDOWStr());
//   Serial.println(rtc.getTimeStr());  
lcd.print("Automatic Bell");

  
  // Check if it's time for the first bell
  if (t.hour == OnHour1 && t.min == OnMin1 && t.sec == 0) {
    digitalWrite(relayPin, LOW); // turn on the relay
    Serial.println("First bell triggered!");
  
    delay(bellDuration);
    digitalWrite(relayPin, HIGH); // turn off the relay
    Serial.println("First bell stopped");
  }
  
  // Check if it's time for the second bell
  if (t.hour == OnHour2 && t.min == OnMin2 && t.sec == 0) {
    digitalWrite(relayPin, LOW);
    Serial.println("Second bell triggered!");
    delay(bellDuration);
    digitalWrite(relayPin, HIGH);
    Serial.println("Second bell stopped");
  }
  // Check if it's time for the third bell
  if (t.hour == OnHour3 && t.min == OnMin3 && t.sec == 0) {
    digitalWrite(relayPin, LOW);
    Serial.println("Third bell triggered!");
    delay(bellDuration);
    digitalWrite(relayPin, HIGH);
    Serial.println("Third bell stopped");
  }


  // Check if it's time for the forth bell
  if (t.hour == OnHour4 && t.min == OnMin4 && t.sec == 0) {
    digitalWrite(relayPin, LOW);
    Serial.println("Third bell triggered!");
    delay(bellDuration);
    digitalWrite(relayPin, HIGH);
    Serial.println("Third bell stopped");
  }
    // Check if it's time for the fifth bell
  if (t.hour == OnHour5 && t.min == OnMin5 && t.sec == 0) {
    digitalWrite(relayPin, LOW);
    Serial.println("Third bell triggered!");
    delay(bellDuration);
    digitalWrite(relayPin, HIGH);
    Serial.println("Third bell stopped");
  }

    // Check if it's time for the sixth bell
  if (t.hour == OnHour6 && t.min == OnMin6 && t.sec == 0) {
    digitalWrite(relayPin, LOW);
    Serial.println("Third bell triggered!");
    delay(bellDuration);
    digitalWrite(relayPin, HIGH);
    Serial.println("Third bell stopped");
  }


    // Check if it's time for the seventh bell
  if (t.hour == OnHour7 && t.min == OnMin7 && t.sec == 0) {
    digitalWrite(relayPin, LOW);
    Serial.println("Third bell triggered!");
    delay(bellDuration);
    digitalWrite(relayPin, HIGH);
    Serial.println("Third bell stopped");
  }

    // Check if it's time for the eighth bell
  if (t.hour == OnHour8 && t.min == OnMin8 && t.sec == 0) {
    digitalWrite(relayPin, LOW);
    Serial.println("Third bell triggered!");
    delay(bellDuration);
    digitalWrite(relayPin, HIGH);
    Serial.println("Third bell stopped");
  }

    // Check if it's time for the ningth bell
  if (t.hour == OnHour9 && t.min == OnMin9 && t.sec == 0) {
    digitalWrite(relayPin, LOW);
    Serial.println("Third bell triggered!");
    delay(bellDuration);
    digitalWrite(relayPin, HIGH);
    Serial.println("Third bell stopped");
  }
    // Check if it's time for the tenth bell
  if (t.hour == OnHour10 && t.min == OnMin10 && t.sec == 0) {
    digitalWrite(relayPin, LOW);
    Serial.println("Third bell triggered!");
    delay(bellDuration);
    digitalWrite(relayPin, HIGH);
    Serial.println("Third bell stopped");
  }
  
    // Check if it's time for the eleventh bell
  if (t.hour == OnHour11 && t.min == OnMin11 && t.sec == 0) {
    digitalWrite(relayPin, LOW);
    Serial.println("Third bell triggered!");
    delay(bellDuration);
    digitalWrite(relayPin, HIGH);
    Serial.println("Third bell stopped");
  }
    // Check if it's time for the twelveth bell
  if (t.hour == OnHour12 && t.min == OnMin12 && t.sec == 0) {
    digitalWrite(relayPin, LOW);
    Serial.println("Third bell triggered!");
    delay(bellDuration);
    digitalWrite(relayPin, HIGH);
    Serial.println("Third bell stopped");
  }
      // Check if it's time for the thirtheen bell
  if (t.hour == OnHour13 && t.min == OnMin13 && t.sec == 0) {
    digitalWrite(relayPin, LOW);
    Serial.println("Third bell triggered!");
    delay(bellDuration);
    digitalWrite(relayPin, HIGH);
    Serial.println("Third bell stopped");
  }

  delay(1000); // wait for a second before checking the time again
}

