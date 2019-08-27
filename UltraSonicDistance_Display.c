int trigPin = 13;    // Trigger
int echoPin = 12;    // Echo 
long duration, cm, inches;
int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;
int D1 = 9;
int D2 = 10;
int D3 = 11;
//int D4 = 12;
int D4 = 1;


int num_array[10][7] = {   LOW,LOW,LOW,LOW,LOW,LOW,HIGH ,    // 0
                          HIGH,LOW,LOW,HIGH,HIGH,HIGH,HIGH ,    // 1
                          LOW,LOW,HIGH,LOW,LOW,HIGH,LOW ,    // 2
                         LOW,LOW,LOW,LOW,HIGH,HIGH,LOW ,    // 3
                       HIGH,LOW,LOW,HIGH,HIGH,LOW,LOW ,    // 4
                       LOW,HIGH,LOW,LOW,HIGH,LOW,LOW ,    // 5
                    LOW,HIGH,LOW,LOW,LOW,LOW,LOW ,    // 6
                       LOW,LOW,LOW,HIGH,HIGH,HIGH,HIGH ,    // 7
                   LOW,LOW,LOW,LOW,LOW,LOW,LOW ,    // 8
                 LOW,LOW,LOW,HIGH,HIGH,LOW,LOW };   // 9
void setup() {
  pinMode(pinA, OUTPUT);     
  pinMode(pinB, OUTPUT);     
  pinMode(pinC, OUTPUT);     
  pinMode(pinD, OUTPUT);     
  pinMode(pinE, OUTPUT);     
  pinMode(pinF, OUTPUT);     
  pinMode(pinG, OUTPUT);   
  pinMode(D1, OUTPUT);  
  pinMode(D2, OUTPUT);  
  pinMode(D3, OUTPUT);  
  pinMode(D4, OUTPUT);  
  //Serial Port begin
  Serial.begin (9600);
  //Define inputs and outputs
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
 
void loop() {
  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  delay(200);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
 
  // Convert the time into a distance
  cm = (duration/2) / 29.1;     // Divide by 29.1 or multiply by 0.0343
  inches = (duration/2) / 74;   // Divide by 74 or multiply by 0.0135

  int i=0;
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  int digit[4] = {D1,D2,D3,D4};
  int pins[8] = {pinA,pinB,pinC,pinD,pinE,pinF,pinG};
  int n= cm;
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  int t[4];
 for(i=3;i>-1;i--)
  {
      t[i] = n%10;
       n=n/10;
  }
  for(i=0;i<4;i++)
  {
     Serial.print("t:");
     Serial.print(t[i]);
  }
for(int k=0;k<200;k++)
{


digitalWrite(D1, HIGH);
digitalWrite(D2, LOW);
digitalWrite(D3, LOW);
digitalWrite(D4, LOW); 
  //0

  digitalWrite(pinA, num_array[t[0]][0]);   
  digitalWrite(pinB, num_array[t[0]][1]);   
  digitalWrite(pinC, num_array[t[0]][2]);   
  digitalWrite(pinD, num_array[t[0]][3]);   
  digitalWrite(pinE, num_array[t[0]][4]);   
  digitalWrite(pinF, num_array[t[0]][5]);   
  digitalWrite(pinG, num_array[t[0]][6]); 
  //for (int j=0; j < 7; j++) 
   //     digitalWrite(pins[j], num_array[t[0]][j]);
  
 delay(1);               // wait for a second
  
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW); 
  //1
  digitalWrite(pinA, num_array[t[1]][0]);   
  digitalWrite(pinB, num_array[t[1]][1]);   
  digitalWrite(pinC, num_array[t[1]][2]);   
  digitalWrite(pinD, num_array[t[1]][3]);   
  digitalWrite(pinE, num_array[t[1]][4]);   
  digitalWrite(pinF, num_array[t[1]][5]);   
  digitalWrite(pinG, num_array[t[1]][6]); 
  //for (int j=0; j < 7; j++) 
   //     digitalWrite(pins[j], num_array[t[1]][j]);
 
  delay(1);                // wait for a second
  
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, LOW); 
  //2
  digitalWrite(pinA, num_array[t[2]][0]);   
  digitalWrite(pinB, num_array[t[2]][1]);   
  digitalWrite(pinC, num_array[t[2]][2]);   
  digitalWrite(pinD, num_array[t[2]][3]);   
  digitalWrite(pinE, num_array[t[2]][4]);   
  digitalWrite(pinF, num_array[t[2]][5]);   
  digitalWrite(pinG, num_array[t[2]][6]); 
  //for (int j=0; j < 7; j++) 
   //     digitalWrite(pins[j], num_array[t[2]][j]);
 
delay(1);               // wait for a second
  

  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, HIGH); 
  //3
  //for (int j=0; j < 7; j++) 
    //    digitalWrite(pins[j], num_array[t[3]][j]);
 digitalWrite(pinA, num_array[t[3]][0]);   
  digitalWrite(pinB, num_array[t[3]][1]);   
  digitalWrite(pinC, num_array[t[3]][2]);   
  digitalWrite(pinD, num_array[t[3]][3]);   
  digitalWrite(pinE, num_array[t[3]][4]);   
  digitalWrite(pinF, num_array[t[3]][5]);   
  digitalWrite(pinG, num_array[t[3]][6]); 
  //delay(50);               // wait for a second
  delay(1);

}
    digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, HIGH);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH);
}
