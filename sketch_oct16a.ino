#define D0 16
#define D1 5
#define D2 4
#define D3 0
#define D4 2
#define D5 14
#define D6 12
#define D7 13
#define D8 15
#define Rxio 3
#define Txio 1
#define Sd2io 9
#define Sd3io 10 
int dizi[5]={D0,D1,D2,D3,D4};
void blinks()
{
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<5;j++)
    {
      if(i==j)
      {
        digitalWrite(dizi[j],HIGH);
      } 
      else
      {
        digitalWrite(dizi[j],LOW);
      }
    
    }
    delay(100);
  }
  for(int i=4;i>=0;i--)
  {
    for(int j=0;j<5;j++)
    {
      if(i==j)
      {
        digitalWrite(dizi[j],HIGH);
      } 
      else
      {
        digitalWrite(dizi[j],LOW);
      }
    
    }
    delay(100);
  }
  
}
void setup() {
  
  for(int i=0;i<5;i++)
  {
    pinMode(dizi[i],OUTPUT);
  }
  
}

void loop() {
  blinks();
  
}
