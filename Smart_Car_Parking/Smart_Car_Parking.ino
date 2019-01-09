#include <LiquidCrystal.h>
//                rs  en  d4 d5 d6 d7
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
int sen1 = A3, sen2 = A6, sen3 = A7;
int sens1, sens2, sens3;

int up1 = 10;
int dwn = 11;
int lft = 12;
int rht = 13;

int t1 = 0, t2=0, t6=0, t7=0;
int sw1 = A4, sw2 =  A5, sw3 = A0;
//int count = 0;

char c;
int cnt = 0;
char count;
int rfid = 0;

char input[12];
void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("Smart Car Parking");
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);
  pinMode(sw3, INPUT_PULLUP);//

  lcd.print("Smart Car Parking");
  delay(2000);
 
  hor(0, 1);
  while (digitalRead(sw3) == HIGH);
  hor(0, 0);
  up(0, 1);
  while (digitalRead(sw2) == HIGH);
  up(0, 0);
  delay(100);

}

void loop() {

  sensor();


  //  hor(0,1);
  //  while(digitalRead(sw3) == HIGH);
  //  hor(0,0);
  //  up(0,1);
  //  while(digitalRead(sw2)==HIGH);
  //  up(0,0);
  //  delay(100);
  //     pick6();
  //     drop7();
  while (digitalRead(sw3) == LOW)

  {
    if (Serial.available()) {

      while (Serial.available() && count < 12)
      {
        input[count] = Serial.read(); // Read 1 Byte of data and store it in the input[] variable
        Serial.print(input);
        count++; // increment counter
        delay(5);
      }
      if (count == 12) //
      {
        count = 0; // reset counter varibale to 0

        Serial.println();
        switch (input[11])
        {
          case 'F':
//            pick1();

if(t1==0){
  lcd.clear();
  lcd.print("Drop at Block1");
  drop1();
  
}else if(t1==1){
      lcd.clear();
  lcd.print("Pick from Block1");
  pick1();
}

            break;

          case '9':
//            pick2();
if(t2==0){
  lcd.clear();
  lcd.print("Drop at Block2");
  drop2();
  
}else if(t2==1){
      lcd.clear();
  lcd.print("Pick from Block2");
  pick2();
}
            break;

          case 'E':
//            pick6();
if(t6==0){
    lcd.clear();
  lcd.print("Drop at Block6");
  drop6();
  
}else if(t6==1){
      lcd.clear();
  lcd.print("Pick from Block6");
  pick6();
}
            break;

          case '3':
//            pick7();
if(t7==0){
    lcd.clear();
  lcd.print("Drop at Block7");
  drop7();
  
}else if(t7==1){
    lcd.clear();
  lcd.print("Pick from Block7");
  pick7();
}
            break;

        }

      }

      for (count = 0; count < 12; count++)
      {
        input[count] = 'A';
      }
      count = 0; // Reset counter variable
      cnt = 0;
    }

  }

}
/************************************************LOOP CLOSED**********************************************************************/
/****************************************************************************************************************************************/
void up(int up, int down) {
  digitalWrite(dwn, down);

  digitalWrite(up1, up);

}
void hor(int right, int left) {
  digitalWrite(rht, right);
  digitalWrite(lft, left);
}


