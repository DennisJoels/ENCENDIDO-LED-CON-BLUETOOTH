int led1=12;
int led2=11;
int led3=10;
int led4=9;
int state=0;
void setup(){
pinMode(led1,OUTPUT);
 digitalWrite(led1,LOW);
  pinMode(led2,OUTPUT);
   digitalWrite(led1,LOW);
  pinMode(led3,OUTPUT);
   digitalWrite(led3,LOW);
  pinMode(led4,OUTPUT);
   digitalWrite(led4,LOW);
   Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available()>0){
  state=Serial.read(); 
  }
  
  
  if(state=='1'){
digitalWrite(led1,HIGH);
}
  if(state=='0'){
digitalWrite(led1,LOW);
}

  
  
  if(state=='2'){
digitalWrite(led2,HIGH);
}
  if(state=='3'){
digitalWrite(led2,LOW);
}
  
  
 if(state=='4'){
digitalWrite(led3,HIGH);
}
 if(state=='5'){
digitalWrite(led3,LOW);
}
  
  
  if(state=='6'){
digitalWrite(led4,HIGH);
}
  if(state=='7'){
digitalWrite(led4,LOW);
}
 
  // put your main code here, to run repeatedly:

}
