
// Fill-in information from your Blynk Template here
#define BLYNK_TEMPLATE_ID "TMPLANZY0HVW"
#define BLYNK_DEVICE_NAME "nodeMCU"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
#define APP_DEBUG

#include "BlynkEdgent.h"

int IR_sensor = D0; // park 1 
int IR_sensor2 = D1;  // park 2
int IR_sensor3 = D6; // 
int IR_sensor4 = D4; // park 4 
int IR_sensor5 = D5; // park 5 
 // 0 1   4 5 6 7 8

WidgetLED led1(V2);// Virtual Pin V2
WidgetLED led2(V3);// Virtual Pin V2
WidgetLED led3(V4);// Virtual Pin V2
WidgetLED led4(V5);// Virtual Pin V2
WidgetLED led5(V6);// Virtual Pin V2


BlynkTimer timer;



void sensor1(){
  int value = digitalRead(IR_sensor);
  if(value == HIGH){
    led1.off();
    
  }
  else{
    led1.on();
   
  }  
}

void sensor2(){
  int value = digitalRead(IR_sensor2);
  if(value == HIGH){
    led2.off();
    
  }
  else{
    led2.on();   
  }  
}
 
void sensor3(){
  int value = digitalRead(IR_sensor3);
  if(value == HIGH){
    led3.off();
    
  }
  else{
    led3.on();
   
  }  
}

void sensor4(){
  int value = digitalRead(IR_sensor4);
  if(value == HIGH){
    led4.off();
    
  }
  else{
    led4.on();   
  }  
}

void sensor5(){
  int value = digitalRead(IR_sensor5);
  if(value == HIGH){
    led5.off();
    
  }
  else{
    led5.on();   
  }  
}

void setup()
{
 
  pinMode(IR_sensor,INPUT);
  pinMode(IR_sensor2,INPUT);
  pinMode(IR_sensor3,INPUT);
  pinMode(IR_sensor4,INPUT);
  pinMode(IR_sensor5,INPUT);

  
  timer.setInterval(300L,sensor1);
  timer.setInterval(300L,sensor2);
  timer.setInterval(300L,sensor3);
  timer.setInterval(300L,sensor4);
  timer.setInterval(300L,sensor5);


  Serial.begin(9600);
  delay(1000);

  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();
  timer.run();




}
