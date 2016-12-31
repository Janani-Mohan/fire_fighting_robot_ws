//s1 and s2 are PIR and temperature sensors

int s1 = 2;

int s2 = 3;

// p is water level indicator sensor

int p = 4;

// n is the RC out for nozzle control

int n = 5;

// m1 and m2 are the two motor outputs

int m1 = 11;

int m2 = 12;

// f is the fan output

int f = 9;

// outn1 and outn2 are nozzle motor control

int outn1 = 6;

int outn2 = 7;

// outp is the output to activate the pump

int outp = 8;

 

// function to initialize the inputs and outputs of the microcontroller

void setup()

{

 pinMode(s1,INPUT);

 pinMode(s2,INPUT);

 pinMode(p,INPUT);

 pinMode(n,INPUT);

 pinMode(m1,OUTPUT);

 pinMode(m2,OUTPUT);

 pinMode(f,OUTPUT);

 pinMode(outn1,OUTPUT);

 pinMode(outn2,OUTPUT);

 pinMode(outp,OUTPUT);

}

 

// while(1) loop to execute the algorithm

void loop()

{

  if( digitalRead(p)==LOW&&digitalRead(n)==LOW)

  {

     digitalWrite(f,LOW);

      digitalWrite(outp,LOW);

       digitalWrite(outn1,LOW);

        digitalWrite(outn2,LOW);

     if( digitalRead(s1)==LOW&&digitalRead(s2)==LOW)

     {

       digitalWrite(m1,LOW);

     digitalWrite(m2,LOW);

     }

     if( digitalRead(s1)==LOW&&digitalRead(s2)==HIGH)

     {

       digitalWrite(m1,LOW);

     digitalWrite(m2,HIGH);

     }

     if( digitalRead(s1)==HIGH&&digitalRead(s2)==LOW)

     {

       digitalWrite(m1,HIGH);

     digitalWrite(m2,LOW);

     }

     if( digitalRead(s1)==HIGH&&digitalRead(s2)==HIGH)

     {

       digitalWrite(m1,HIGH);

     digitalWrite(m2,HIGH);

     }

  }

    if( digitalRead(p)==HIGH&&digitalRead(n)==HIGH)

  {   digitalWrite(m1,LOW);

     digitalWrite(m2,LOW);

     digitalWrite(outp,HIGH);

     if( digitalRead(s1)==LOW&&digitalRead(s2)==LOW)

     {

       digitalWrite(outn1,LOW);

     digitalWrite(outn2,LOW);

     }

     if( digitalRead(s1)==LOW&&digitalRead(s2)==HIGH)

     {

       digitalWrite(outn1,LOW);

     digitalWrite(outn2,HIGH);

     }

     if( digitalRead(s1)==HIGH&&digitalRead(s2)==LOW)

     {

       digitalWrite(outn1,HIGH);

     digitalWrite(outn2,LOW);

     }

  }

 if( digitalRead(p)==LOW&&digitalRead(n)==HIGH&&digitalRead(s1)==HIGH&&digitalRead(s2)==HIGH)
{

       digitalWrite(f,HIGH);

}

}

