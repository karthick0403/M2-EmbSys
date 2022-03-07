//The code for checking the difference in frequencies for a real and fake note is givenbelow
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
14
digitalWrite(s2,LOW);
digitalWrite(s3,HIGH);
blue = pulseIn(sensorOut, LOW);
Serial.println(red);
Serial.println(green);
Serial.println(blue);
  
//The entire code for the identification of a 10 rupee real and fake note with the audio output is given below
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
red = pulseIn(sensorOut,LOW);
15
digitalWrite(s2,HIGH);
digitalWrite(s3,HIGH);
green = pulseIn(sensorOut,LOW);
//Serial.println();
digitalWrite(s2,LOW);
digitalWrite(s3,HIGH);
blue = pulseIn(sensorOut, LOW);
Serial.println(red);
Serial.println(green);
Serial.println(blue);
if ((red <=18 && red >=15) && (green <= 18 && green >= 15) && (blue
<= 18 && blue >= 15))
{
Serial.println(" TEN ");
delay(500);
}
else if ((red <= 25 && red >= 15) && (green <= 38 && green >= 31) &&(blue <=
24 && blue >= 19))
{
Serial.println(" FAKE ");
delay(500);
}
else{
Serial.println(" FAKE ");
delay (500);
}
}
