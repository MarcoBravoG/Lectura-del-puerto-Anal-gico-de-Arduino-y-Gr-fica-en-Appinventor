int value_pot0;

void setup() { 
  Serial.begin(9600);
}

void loop() { 
    value_pot0 = analogRead(A0);
    Serial.println(value_pot0);
    delay(100); 
}      
