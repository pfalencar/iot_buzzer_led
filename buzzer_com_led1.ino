int ledPin1 = 11;
int botao1 = 4;
int ledPin2 = 13;
int botao2 = 12; 
int buzzer = 2;

void setup()
{
  pinMode(ledPin1, OUTPUT);
  pinMode(botao1, INPUT);
   pinMode(ledPin2, OUTPUT);
  pinMode(botao2, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  int val1 = digitalRead(botao1);
  
   if (val1 == HIGH) {         // check if the input is HIGH (button released)
    digitalWrite(ledPin1, HIGH);  // turn LED OFF
    digitalWrite(buzzer, HIGH);
    tone (7, 262, 200);
 	delay(200);
  } else {
    digitalWrite(ledPin1, LOW);  // turn LED ON
    digitalWrite(buzzer, LOW);
 	tone (7, 330, 200); // toca o buzzer em Mi, em 330Hz
  	delay(200); // deixa o buzzer tocando em 330Hz, e o led apagado por 200 milisegundos

  }
  
   int val2 = digitalRead(botao2);
  
   if (val2 == HIGH) {         // check if the input is HIGH (button released)
    digitalWrite(ledPin2, HIGH);  // turn LED OFF
    digitalWrite(buzzer, HIGH);
    tone (7, 262, 200);
 	delay(200);
  } else {
    digitalWrite(ledPin2, LOW);  // turn LED ON
    digitalWrite(buzzer, LOW);
 	tone (7, 330, 200); // toca o buzzer em Mi, em 330Hz
  	delay(200); // deixa o buzzer tocando em 330Hz, e o led apagado por 200 milisegundos

  }
  
}