byte lm35= A0;
int nilai;
int lamp = 2;
void setup(){
 pinMode (lm35, INPUT);
 pinMode (lamp, OUTPUT);
 Serial.begin(9600);
}
void loop(){
 nilai= analogRead(lm35);
 nilai= nilai*0.488;
 Serial.println(nilai);
 delay(500);
 if (nilai < 40)
 {
 digitalWrite (lamp, HIGH);
 }
 else
 {
 digitalWrite (lamp, LOW);
 }
 }
