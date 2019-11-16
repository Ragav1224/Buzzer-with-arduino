/*
 * For Q-feista Quator final
 * 
 * Developed by Ragavender S.
 * 
 * Organized By Helping hands, Feculty of Engineering, Univeersity of Jaffna.
 * 
 * For seven teams on same stage. A team has 3 buzzer switches. (5 members per team) 
 * buzzers will reset after 3 seconds
 */


//push buttons for buzzers

const int pushButton1 = 2;
const int pushButton2 = 3;
const int pushButton3 = 4;
const int pushButton4 = 5;
const int pushButton5 = 6;
const int pushButton6 = 7;
const int pushButton7 = 8;

//LED for teams
const int LED1 = 23;
const int LED2 = 24;
const int LED3 = 25;
const int LED4 = 26;
const int LED5 = 27;
const int LED6 = 28;
const int LED7 = 29;

//buzzer for generate buzzer tone
int buzzer = 10;


void setup() {
  // put your setup code here, to run once:
  pinMode(pushButton1, INPUT);
  pinMode(pushButton2, INPUT);
  pinMode(pushButton3, INPUT);
  pinMode(pushButton4, INPUT);
  pinMode(pushButton5, INPUT);
  pinMode(pushButton6, INPUT);
  pinMode(pushButton7, INPUT);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);


  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);

}

void loop() {

  //For team1
  if (digitalRead(pushButton1) == LOW) {
    delay(10);
    if (digitalRead(pushButton1) == LOW) {
      digitalWrite(LED1, HIGH);
      tone(buzzer, 500);
      delay(1000);
      noTone(buzzer);
      delay(2000);
      digitalWrite(LED1, LOW);
    }
  }


  //For team2
  if (digitalRead(pushButton2) == LOW) {
    delay(10);
    if (digitalRead(pushButton2) == LOW) {
      digitalWrite(LED2, HIGH);
      tone(buzzer, 500);
      delay(1000);
      noTone(buzzer);
      delay(2000);
      digitalWrite(LED2, LOW);
    }
  }

  //For team3
  if (digitalRead(pushButton3) == LOW) {
    delay(10);
    if (digitalRead(pushButton3) == LOW) {
      digitalWrite(LED3, HIGH);
      tone(buzzer, 500);
      delay(1000);
      noTone(buzzer);
      delay(2000);
      digitalWrite(LED3, LOW);
    }
  }


  //For team4
  if (digitalRead(pushButton4) == LOW) {
    delay(10);
    if (digitalRead(pushButton4) == LOW) {
      digitalWrite(LED4, HIGH);
      tone(buzzer, 500);
      delay(1000);
      noTone(buzzer);
      delay(2000);
      digitalWrite(LED4, LOW);
    }
  }


  //For team5
  if (digitalRead(pushButton5) == LOW) {
    delay(10);
    if (digitalRead(pushButton5) == LOW) {
      digitalWrite(LED5, HIGH);
      tone(buzzer, 500);
      delay(1000);
      noTone(buzzer);
      delay(2000);
      digitalWrite(LED5, LOW);
    }
  }


  //For team6
  if (digitalRead(pushButton6) == LOW) {
    delay(10);
    if (digitalRead(pushButton6) == LOW) {
      digitalWrite(LED6, HIGH);
      tone(buzzer, 500);
      delay(1000);
      noTone(buzzer);
      delay(2000);
      digitalWrite(LED6, LOW);
    }
  }


  //For team7
  if (digitalRead(pushButton7) == LOW) {
    delay(10);
    if (digitalRead(pushButton7) == LOW) {
      digitalWrite(LED7, HIGH);
      tone(buzzer, 500);
      delay(1000);
      noTone(buzzer);
      delay(2000);
      digitalWrite(LED7, LOW);
    }
  }

}
