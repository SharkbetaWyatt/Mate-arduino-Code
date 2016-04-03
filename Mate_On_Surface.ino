//Potentiometer Definitions Follow
int LeftRotPin = 0;
int LeftElbowOnePin = 1;
int LeftElbowTwoPin = 2;
int LeftClawRotatePin = 3;
int RightRotPin = 4;
int RightElbowOnePin = 5;
int RightElbowTwoPin = 6;
int RightClawRotatePin = 7;

//Defines Variables For Ease Of Typing
#define LP1 LeftRotPin
#define LP2 LeftElbowOnePin
#define LP3 LeftElbowTwoPin
#define LP4 LeftClawRotatePin
#define RP1 RightRotPin
#define RP2 RightElbowOnePin
#define RP3 RightElbowTwoPin
#define RP4 RightClawRotatePin

//Defines Variables For Analog Reading
int LP1R;
int LP2R;
int LP3R;
int LP4R;
int RP1R;
int RP2R;
int RP3R;
int RP4R;

void setup() {
  Serial.begin(9600);
}



void loop() {
  LP1R = analogRead(LP1);
  LP2R = analogRead(LP2);
  LP3R = analogRead(LP3);
  LP4R = analogRead(LP4);
  RP1R = analogRead(RP1);
  RP2R = analogRead(RP2);
  RP3R = analogRead(RP3);
  RP3R = analogRead(RP4);
  
}
