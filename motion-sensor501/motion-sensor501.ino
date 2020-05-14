#define pirPin 2

int val = 0;
bool motionState = false;
int saveval = 0;
int countstate = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(pirPin);
  if(saveval == val && countstate < 5)
  {
    Serial.print(".");
    countstate++;
  }
  else if(saveval != val)
  {
    Serial.println();
    Serial.print(val);
    saveval = val;
    countstate = 0;
  }
  delay(3000);
}
