#define LED 5
void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(0,INPUT);

 pinMode (0,INPUT);
  pinMode(LED,OUTPUT );
}

void loop() {
  // put your main code here, to run repeatedly:

float i;
int YL69;
i= analogRead(0);
analogWrite(LED,i/2);
YL69 = 100-(i * 100)/1023;
Serial.print("SM amount = ");
Serial.println(i);
Serial.print(YL69);
Serial.println("%");
delay (500);
}
