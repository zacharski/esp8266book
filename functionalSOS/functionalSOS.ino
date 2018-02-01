int led = 2;
int dotLength = 150;
int dashLength = 450;

void setup() {
    pinMode(led, OUTPUT);
}

void dot(){
    //this is how you 'dot'
    digitalWrite(led, HIGH);
    delay(dotLength);
    digitalWrite(led, LOW);
    delay(dotLength);
}

void dash(){
    //this is how you 'dash'
    digitalWrite(led, HIGH);
    delay(dashLength);
    digitalWrite(led, LOW);
    delay(dotLength);
}

void endLetter(){
    delay (dotLength * 2);
}

void endWord(){
    delay (dotLength * 4);
}

        // 
       //    L E T T E R S
      //
     //

void A(){
   dot();
   dash();
   endLetter();
}

void E(){
  dot();
  endLetter();
}

void S(){
  dot();
  dot();
  dot();
  endLetter();
}

void O(){
  dash();
  dash();
  dash();
  endLetter();
  
}

   //
  //   END OF LETTERS
 //
//


void loop() {
  S();
  O();
  S();
  endWord();


}

