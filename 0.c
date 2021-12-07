const int soundPin = A0;
const int threshold = 200;
void setup() {
  Serial.begin(9600);
  pinMode(soundPin,INPUT);
}

void loop() {
  int soundsens = analogRead(soundPin);
  soundsens = (soundsens+83.2073) / 11.003;
  Serial.println(soundsens);
}
