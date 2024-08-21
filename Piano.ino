int led1 = 3;
int sw1= 6;
int led2 = 4;
int sw2 = 7;
int led3 = 5;
int sw3 = 8;
int buzz =13;
void setup(){
pinMode(buzz, OUTPUT);
pinMode(led1, OUTPUT);
pinMode(sw1, INPUT_PULLUP);
pinMode(led2, OUTPUT);
pinMode(sw2, INPUT_PULLUP);
pinMode(led3, OUTPUT);
pinMode(sw3, INPUT_PULLUP);

}

void loop(){
if (digitalRead(sw1) == 0){ 
 tone(buzz, 346);

  digitalWrite(led1, HIGH);
}

else{
  digitalWrite(led1, LOW);
  noTone(buzz);
}
  
  
  
  
if (digitalRead(sw2) == 0){ 
 tone(buzz, 168);

 
  digitalWrite(led2, HIGH);
}

else{
  digitalWrite(led2, LOW);
  noTone(buzz);
}
  
  
  
if (digitalRead(sw3) == 0){ 
 tone(buzz, 476);

 
  digitalWrite(led3, HIGH);
}

else{
  digitalWrite(led3, LOW);
  noTone(buzz);
}

}

