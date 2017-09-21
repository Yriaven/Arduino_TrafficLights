
int ledRed = 10;
int ledY = 9;
int ledG = 6;
int button = 2;
int ard = 13;


void setup ()
{
  pinMode(ledRed, OUTPUT);
  pinMode(ledY, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(button, INPUT);

}



void loop ()
{

  digitalWrite(ard, LOW);
  if (digitalRead(button) == LOW)
  {
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledG, LOW);
    digitalWrite(ledY, LOW);

  }

  else
  {
    while (digitalRead(button) == HIGH)
    {
      digitalWrite(ledRed, LOW);

      for (int i = 0; i <= 5; i++)
      {
        digitalWrite(ledY, HIGH);
        delay(500);
        digitalWrite(ledY, LOW);
        delay(500);
       
      }

      digitalWrite(ledG, HIGH);
      delay(5000);

    }


  }


}

