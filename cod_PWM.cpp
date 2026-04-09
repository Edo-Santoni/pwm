int led=9;
int potenziometro=A0;
int valore;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(potenziometro, INPUT);
}

void loop()
{
  	valore= analogRead(potenziometro);
  	valore=map(valore,0,1023,0,255);
    analogWrite(led,valore);

}
