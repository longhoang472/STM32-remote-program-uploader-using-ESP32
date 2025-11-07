void setup() {
  Serial1.begin(115200, SERIAL_8N1, 17, 16);
  Serial.begin(115200);
}

void loop() {
  String a = Serial1.readString();
  Serial.println(a);
  Serial1.write("Hello World");
}
