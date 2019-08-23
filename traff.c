
#define IFGREEN(num) num == 'g'? 1:0
#define IFHIGH(val) val>0?'HIGH':'LOW'
int lane1[2] ={0,1};
int lane2[2] ={2,3};
int lane3[2] ={4,5};
int lane4[2] ={6,7};


void setColor(char color, int highOrLow)
{ 
   if(IFGREEN(color))
   {
     digitalWrite(lane1[1],IFHIGH(highOrLow)); 
     digitalWrite(lane2[1],IFHIGH(highOrLow)); 
     digitalWrite(lane3[1],IFHIGH(highOrLow)); 
   }
   else
   {
     digitalWrite(lane1[0],IFHIGH(highOrLow)); 
     digitalWrite(lane2[0],IFHIGH(highOrLow)); 
     digitalWrite(lane3[0],IFHIGH(highOrLow)); 
   }
   
  
}

void sequence(int ,int);
void setup() {
  // put your setup code here, to run once:
  pinMode(lane1[0], OUTPUT);
  pinMode(lane1[1], OUTPUT);
  pinMode(lane2[0], OUTPUT);
  pinMode(lane2[1], OUTPUT);
  pinMode(lane3[0], OUTPUT);
  pinMode(lane3[1], OUTPUT);
  pinMode(lane4[0], OUTPUT);
  pinMode(lane4[1], OUTPUT);
    setColor('r',1);
  setColor('g',0);

}

void loop() {
  // put your main code here, to run repeatedly:

  
  sequence(1,2);
  sequence(2,2);
  sequence(3,2);
  sequence(4,2);

  //signal(SIGINT, sigIntHandler);
}
void sequence(int lane,int duration)
{
  if(lane==1)
  {
    digitalWrite(lane1[0], LOW);
    digitalWrite(lane1[1], HIGH);
    delay((1000*duration));
    digitalWrite(lane1[1], LOW);
    digitalWrite(lane1[0], HIGH);
  }
  else if(lane==2)
  {
    digitalWrite(lane2[0], LOW);
    digitalWrite(lane2[1], HIGH);
    delay((1000*duration));
    digitalWrite(lane2[1], LOW);
    digitalWrite(lane2[0], HIGH);
  }
  else if(lane==3)
  {
    digitalWrite(lane3[0], LOW);
    digitalWrite(lane3[1], HIGH);
    delay((1000*duration));
    digitalWrite(lane3[1], LOW);
    digitalWrite(lane3[0], HIGH);
  }
  else
  {
    digitalWrite(lane4[0], LOW);
    digitalWrite(lane4[1], HIGH);
    delay((1000*duration));
    digitalWrite(lane4[1], LOW);
    digitalWrite(lane4[0], HIGH);
  }
  
}
