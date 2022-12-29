#define usbVoltage 5           //電圧が5V以外の時には変更
#define analogPort 0

void setup() {
  Serial.begin( 9600 );
}

void loop() {
  int val;
  float temp;
  val = analogRead(analogPort);
  temp = ((float(usbVoltage)*val)/1024)*100;

  delay(500);

  Serial.println(temp);
}


