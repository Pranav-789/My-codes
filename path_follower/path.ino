void setup() {
    pinMode(2, INPUT);  // Left sensor
    pinMode(3, INPUT);  // Right sensor
    pinMode(8, OUTPUT);  // Left motor forward
    pinMode(9, OUTPUT);  // Left motor backward
    pinMode(10, OUTPUT); // Right motor forward
    pinMode(11, OUTPUT); // Right motor backward
  }
  
  void loop() {
    int ls = digitalRead(2); // Left sensor
    int rs = digitalRead(3); // Right sensor
  
    if (ls == LOW && rs == LOW) {  // Both on white -> STOP
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
    }
    
    else if (ls == LOW && rs == HIGH) { // Left on white, Right on black -> Turn RIGHT
      digitalWrite(8, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
    }
  
    else if (ls == HIGH && rs == LOW) { // Left on black, Right on white -> Turn LEFT
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
    }
  
    else if (ls == HIGH && rs == HIGH) { // Both on black -> MOVE FORWARD
      digitalWrite(8, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
    }
  }
  