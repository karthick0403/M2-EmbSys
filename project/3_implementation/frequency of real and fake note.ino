#define s0 4
#define s1 5
#define s2 6
#define s3 7
#define sensorOut 8
int red = 0;
int green = 0;
int blue = 0;
void setup()
{
Serial.begin(9600);
pinMode(s0, OUTPUT);
pinMode(s1, OUTPUT);
pinMode(s2, OUTPUT);
pinMode(s3, OUTPUT);
pinMode(sensorOut, INPUT);
digitalWrite(s0, HIGH);
digitalWrite(s1, HIGH);
}
void loop()
{
digitalWrite(s2, LOW);
digitalWrite(s3, LOW);
//count OUT, pRed, RED
red = pulseIn(sensorOut,LOW);
//count OUT, pBLUE, BLUE
digitalWrite(s2,HIGH);
digitalWrite(s3,HIGH);
//count OUT, pGreen, GREEN
green = pulseIn(sensorOut,LOW);
//Serial.println();
digitalWrite(s2,LOW);
digitalWrite(s3,HIGH);
blue = pulseIn(sensorOut, LOW);
Serial.println(red);
Serial.println(green);
Serial.println(blue);
}