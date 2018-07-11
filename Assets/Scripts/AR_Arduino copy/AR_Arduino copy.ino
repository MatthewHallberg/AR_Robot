
#include <SoftwareSerial.h> 
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>

int incomingByte = 0;  

int speed = 1023;//0 to 1023

int enA = 16;//d0
int in1 = 5;//d1
int in2 = 4;//d2

int enB = 14;//d5
int in3 = 0;//d3
int in4 = 2;//d4

//wifi stuff
const char* ssid     = "***********************"; // wifi network name
const char* password = "*****************"; // wifi network password

WiFiUDP Udp;
unsigned int localUdpPort = 1998;
char incomingPacket[255];
     
void setup(){
Serial.begin(115200);
delay(10);
Serial.println("Motor test!");

// We start by connecting to a WiFi network
Serial.print("Connecting to ");
Serial.println(ssid);
WiFi.begin(ssid, password);
while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
}
Serial.println("WiFi connected"); 
Serial.println("IP address: ");
Serial.println(WiFi.localIP());
Serial.println("Starting UDP");
Udp.begin(localUdpPort);  

pinMode(enA, OUTPUT);
pinMode(enB, OUTPUT);
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);
}
void right()
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  analogWrite(enA, speed);

  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  analogWrite(enB, speed);
}

void left()
{

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  analogWrite(enA, speed);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  analogWrite(enB, speed);
}

void forward()
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  analogWrite(enA, speed);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  analogWrite(enB, speed);
}

void backward()
{

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  analogWrite(enA, speed);

  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  analogWrite(enB, speed);
}

void stop()
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);  
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void ListenPacketRoutine(){
  //listen for packets
  int packetSize = Udp.parsePacket();
  if (packetSize){
    int len = Udp.read(incomingPacket, 255);
    Serial.printf("UDP packet contents: %s\n", incomingPacket);
    if (incomingPacket[0] == 'f'){
        forward();
    } else if (incomingPacket[0] == 'b'){
        backward();
    } else if (incomingPacket[0] == 'l'){
        left();
    } else if (incomingPacket[0] == 'r'){
        right();
    } else if (incomingPacket[0] == 's'){
        stop();
    }
  }
}

void ListenKeyboardRoutine(){

 if (Serial.available() > 0) {
    incomingByte = Serial.read();
    }
  
 switch(incomingByte)
  {
     case 's': 
      { stop();
       Serial.println("Stop\n"); 
       incomingByte='*';}
      
     break;
     
     case 'f':
     {  forward(); 
       
       Serial.println("Forward\n");
       incomingByte='*';}
     break;
    
      case 'b':  
    {   backward();
       
       Serial.println("Backward\n");
       incomingByte='*';}
     break;
     
     case 'r':
     {  
       right(); 
       Serial.println("Rotate Right\n");
       incomingByte='*';}
     break;

       case 'l':
      { 
       left();    
       Serial.println("Rotate Left\n");
       incomingByte='*';}
     break;       
  }
}

void loop()
{
    ListenPacketRoutine();
    ListenKeyboardRoutine();
}
