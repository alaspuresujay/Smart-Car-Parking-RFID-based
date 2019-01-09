void pick1() {

  up(1, 0);
  while (analogRead(sen1) > 500);
  up(0, 0);
  hor(1, 0);
  while (analogRead(sen2) > 500);
  hor(0, 0);
  up(1, 0);
  delay(2000);
  while (analogRead(sen2) > 500);
  up(0, 0);
  hor(0, 1);
  while (analogRead(sen3) > 500);
  hor(0, 0);
  up(0, 1);
  while (digitalRead(sw2) == HIGH);
  up(0, 0);

  hor(0, 1);
  while (digitalRead(sw3) == HIGH);
  hor(0, 0);
  t1=0;
//    while (digitalRead(sw2) == LOW);
}

void pick2(){

up(1,0);
while(analogRead(sen1)>500);
up(0,0);
hor(1,0);
while(analogRead(sen2)>500);
hor(1,0);
delay(2000);
while(analogRead(sen2)>500);
hor(0,0);
up(1,0);
delay(2000);
while(analogRead(sen2)>500);
up(0,0);
hor(0,1);
while(analogRead(sen3)>500);
hor(0,0);
up(0,1);
while(digitalRead(sw2)==HIGH);
up(0,0);
hor(0,1);
while(digitalRead(sw3)==HIGH);
hor(0,0);
t2=0;
}


void drop1() {
hor(1,0);
while(analogRead(sen2)>500);
hor(0,0);
up(1,0);
while(analogRead(sen1)>500);
up(1,0);
delay(3000);
while(analogRead(sen1)>500);
up(1,0);
while(analogRead(sen1)>500);
up(0,0);
hor(1,0);
while(analogRead(sen2)>500);
hor(0,0);
up(0,1);
delay(2000);
while(analogRead(sen2)>500);
up(0,0);
hor(0,1);
while(digitalRead(sw3)==HIGH);
hor(0,0);
up(0,1);
while(digitalRead(sw2)==HIGH);
up(0,0);
t1=1;
  
}

void drop2(){
  hor(1,0);
  while(analogRead(sen2)>500);
  hor(0,0);
  up(1,0);
  while(analogRead(sen1)>500);
  up(1,0);
  delay(2000);
  while(analogRead(sen1)>500);
  up(0,0);
  hor(1,0);
  while(analogRead(sen2)>500);
  hor(1,0);
  delay(2000);
  while(analogRead(sen2)>500);
  hor(0,0);
  up(0,1);
  delay(2000);
  while(analogRead(sen2)>500);
  up(0,0);
  hor(0,1);
 
  while(digitalRead(sw3)==HIGH);
  hor(0,0);
  up(0,1);
  while(digitalRead(sw2)==HIGH);
  up(0,0);
  t2=1;
//  while(digitalRead(sw2)==LOW);
  
}


void pick6(){

up(1,0);
while(analogRead(sen1)>500);
up(1,0);
delay(2000);
while(analogRead(sen1)>500);
up(0,0);
hor(1,0);
while(analogRead(sen2)>500);
hor(0,0);
up(1,0);
delay(2000);
while(analogRead(sen2)>500);
up(0,0);
hor(0,1);
while(analogRead(sen3)>500);
hor(0,0);
up(0,1);
while(digitalRead(sw2)==HIGH);
up(0,0);
hor(0,1);
while(digitalRead(sw3)==HIGH);
hor(0,0);
t6=0;
//while(digitalRead(sw2)==LOW);

  
}

void pick7(){

up(1,0);
while(analogRead(sen1)>500);
up(1,0);
delay(2000);
while(analogRead(sen1)>500);
up(0,0);
hor(1,0);
while(analogRead(sen2)>500);
hor(1,0);
delay(2000);
while(analogRead(sen2)>500);
hor(0,0);
up(1,0);
delay(2000);
while(analogRead(sen2)>500);
up(0,0);
hor(0,1);
while(analogRead(sen3)>500);
hor(0,0);
up(0,1);
while(digitalRead(sw2)==HIGH);
up(0,0);
hor(0,1);
while(digitalRead(sw3)==HIGH);
hor(0,0);
t7=0;
//while(digitalRead(sw2)==LOW);

  
}

void drop6(){

hor(1,0);
while(analogRead(sen2)>500);
hor(0,0);
up(1,0);
while(analogRead(sen1)>500);
up(1,0);
delay(2000);
while(analogRead(sen1)>500);
up(1,0);
delay(2000);
while(analogRead(sen1)>500);
up(0,0);
hor(1,0);
while(analogRead(sen2)>500);
hor(0,0);
up(0,1);
delay(2000);
while(analogRead(sen2)>500);
up(0,0);
hor(0,1);
while(digitalRead(sw3)==HIGH);
hor(0,0);
up(0,1);
while(digitalRead(sw2)==HIGH);
up(0,0);
t6=1;
//while(digitalRead(sw3)==LOW);

  
}

void drop7(){
  
hor(1,0);
while(analogRead(sen2)>500);
hor(0,0);
up(1,0);
while(analogRead(sen1)>500);
up(1,0);
delay(2000);
while(analogRead(sen1)>500);
up(1,0);
delay(2000);
while(analogRead(sen1)>500);
up(0,0);
hor(1,0);
while(analogRead(sen2)>500);
hor(1,0);
delay(2000);
while(analogRead(sen2)>500);
hor(0,0);
up(0,1);
delay(2000);
while(analogRead(sen2)>500);
up(0,0);
hor(0,1);
while(digitalRead(sw3)==HIGH);
hor(0,0);
up(0,1);
while(digitalRead(sw2)==HIGH);
up(0,0);
t7=1;
//while(digitalRead(sw3)==LOW);

  
}

