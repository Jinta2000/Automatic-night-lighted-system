#define LAMP 8 // initialising pins for each components 
#define PIR 13
#define LDR A0

void setup() {
  // put your setup code here, to run once:
 
      pinMode(LAMP, OUTPUT);// declare lamp as input and sensors as output
      pinMode(PIR, INPUT);
      pinMode(LDR, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
      int value_ldr = analogRead(LDR); // read LDR value
      int value_pir = digitalRead(PIR); // read input value
  
  
 if((300> value_ldr) && ( value_pir==HIGH) ){
      digitalWrite(LAMP,1);  // Turn ON the light
      delay(6000);
       
}
else {
  
      digitalWrite(LAMP,0); // Turn OFF the light
       
}
}
