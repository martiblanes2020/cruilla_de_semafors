int tempsVerd=5000;
int tempstaronja=2000;


void setup() {
  // put your setup code here, to run once:
pinMode (7,OUTPUT); // Vl  
pinMode (8,OUTPUT); // T1
pinMode (9,OUTPUT); // G1
pinMode (10,OUTPUT); // V2
pinMode (11,OUTPUT); // T2
pinMode (12,OUTPUT); // G2
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (7,HIGH);
digitalWrite (10,HIGH);
delay (1000);
digitalWrite (10,LOW);
digitalWrite (12,HIGH);
delay (tempsVerd);
digitalWrite (12,LOW);
digitalWrite (11,HIGH);
delay (tempstaronja);
digitalWrite (10,HIGH);
digitalWrite (11,LOW);
delay (1000);
digitalWrite (7,LOW);
digitalWrite (9,HIGH);
delay (tempsVerd);
digitalWrite (9,LOW);
digitalWrite (8,HIGH);
delay (tempstaronja);
digitalWrite (7,HIGH);
digitalWrite (8,LOW);

}
