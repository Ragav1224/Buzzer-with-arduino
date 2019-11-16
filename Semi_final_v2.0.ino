/*
 * For Q-feista Semi finals & finals (Code version 2.0)
 * 
 * Developed by Ragavender S.    
 * 
 * Organized By Helping hands, Feculty of Engineering, Univeersity of Jaffna.
 * 
 *  For two teams on same stage. A team has 5 buzzer switches. (5 members per team)
 *  buzzers will reset after 3 seconds  
 *  
  */


//push buttons for buzzers

const int pushButton1 = 2;
const int pushButton2 = 3;
const int pushButton3 = 4;
const int pushButton4 = 5;
const int pushButton5 = 6;
const int pushButton6 = 7;
const int pushButton7 = 8;
const int pushButton8 = 9;
const int pushButton9 = 10;
const int pushButton10 = 11;

//LED for players
const int LED1 = 23;
const int LED2 = 24;
const int LED3 = 25;
const int LED4 = 26;
const int LED5 = 27;
const int LED6 = 28;
const int LED7 = 29;
const int LED8 = 31;
const int LED9 = 33;
const int LED10 = 35;

//buzzer for generate buzzer tone
int buzzer = 50;


void setup() {
  // put your setup code here, to run once:
  pinMode(pushButton1, INPUT);
  pinMode(pushButton2, INPUT);
  pinMode(pushButton3, INPUT);
  pinMode(pushButton4, INPUT);
  pinMode(pushButton5, INPUT);
  pinMode(pushButton6, INPUT);
  pinMode(pushButton7, INPUT);
  pinMode(pushButton8, INPUT);
  pinMode(pushButton9, INPUT);
  pinMode(pushButton10, INPUT);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
  pinMode(LED10, OUTPUT);


  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  digitalWrite(LED9, LOW);
  digitalWrite(LED10, LOW);

}

void loop() {

  //For team 01
  if (digitalRead(pushButton1) == HIGH  ||  digitalRead(pushButton2) == HIGH || digitalRead(pushButton3) == HIGH || digitalRead(pushButton4) == HIGH || digitalRead(pushButton5) == HIGH) {
    //For player1
    if (digitalRead(pushButton1) == HIGH) {
      delay(10);
      if (digitalRead(pushButton1) == HIGH) {
        digitalWrite(LED1, HIGH);
        tone(buzzer, 500);
        delay(1000);
        noTone(buzzer);
        delay(2000);
        digitalWrite(LED1, LOW);
      }
    }


    //For player2
    else if (digitalRead(pushButton2) == HIGH) {
      delay(10);
      if (digitalRead(pushButton2) == HIGH) {
        digitalWrite(LED2, HIGH);
        tone(buzzer, 500);
        delay(1000);
        noTone(buzzer);
        delay(2000);
        digitalWrite(LED2, LOW);
      }
    }

    //For player3
    else if (digitalRead(pushButton3) == HIGH) {
      delay(10);
      if (digitalRead(pushButton3) == HIGH) {
        digitalWrite(LED3, HIGH);
        tone(buzzer, 500);
        delay(1000);
        noTone(buzzer);
        delay(2000);
        digitalWrite(LED3, LOW);
      }
    }


    //For player4
    else if (digitalRead(pushButton4) == HIGH) {
      delay(10);
      if (digitalRead(pushButton4) == HIGH) {
        digitalWrite(LED4, HIGH);
        tone(buzzer, 500);
        delay(1000);
        noTone(buzzer);
        delay(2000);
        digitalWrite(LED4, LOW);
      }
    }


    //For player5
    else if (digitalRead(pushButton5) == HIGH) {
      delay(10);
      if (digitalRead(pushButton5) == HIGH) {
        digitalWrite(LED5, HIGH);
        tone(buzzer, 500);
        delay(1000);
        noTone(buzzer);
        delay(2000);
        digitalWrite(LED5, LOW);
      }
    }
  }

      //For team 02
  else if (digitalRead(pushButton6) == HIGH  ||  digitalRead(pushButton7) == HIGH || digitalRead(pushButton8) == HIGH || digitalRead(pushButton9) == HIGH || digitalRead(pushButton10) == LOW) {
    //For player6
    if (digitalRead(pushButton6) == HIGH) {
      delay(10);
      if (digitalRead(pushButton6) == HIGH) {
        digitalWrite(LED6, HIGH);
        tone(buzzer, 500);
        delay(1000);
        noTone(buzzer);
        delay(2000);
        digitalWrite(LED6, LOW);
      }
    }


    //For player7
    else if (digitalRead(pushButton7) == HIGH) {
      delay(10);
      if (digitalRead(pushButton7) == HIGH) {
        digitalWrite(LED7, HIGH);
        tone(buzzer, 500);
        delay(1000);
        noTone(buzzer);
        delay(2000);
        digitalWrite(LED7, LOW);
      }
    }


    //For player8
    else if (digitalRead(pushButton8) == HIGH) {
      delay(10);
      if (digitalRead(pushButton8) == HIGH) {
        digitalWrite(LED8, HIGH);
        tone(buzzer, 500);
        delay(1000);
        noTone(buzzer);
        delay(2000);
        digitalWrite(LED8, LOW);
      }
    }


    //For player9
    else if (digitalRead(pushButton9) == HIGH) {
      delay(10);
      if (digitalRead(pushButton9) == HIGH) {
        digitalWrite(LED9, HIGH);
        tone(buzzer, 500);
        delay(1000);
        noTone(buzzer);
        delay(2000);
        digitalWrite(LED9, LOW);
      }
    }


    //For player10
    else if (digitalRead(pushButton10) == HIGH) {
      delay(10);
      if (digitalRead(pushButton10) == HIGH) {
        digitalWrite(LED10, HIGH);
        tone(buzzer, 500);
        delay(1000);
        noTone(buzzer);
        delay(2000);
        digitalWrite(LED10, LOW);
      }
    }
  }

}
