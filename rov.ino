int buttonPin1 = 2;
int buttonPin2 = 3;
int buttonPin3 = 4;
int buttonPin4 = 5;
int buttonPin5 = 6;
int buttonPin6 = 7;
int buttonPin7 = 8;
void setup() {
pinMode(buttonPin1, INPUT_PULLUP);
pinMode(buttonPin2, INPUT_PULLUP);
pinMode(buttonPin3, INPUT_PULLUP);
pinMode(buttonPin4, INPUT_PULLUP);
pinMode(buttonPin5, INPUT_PULLUP);
pinMode(buttonPin6, INPUT_PULLUP);
pinMode(buttonPin7, INPUT_PULLUP);
Serial.begin(9600);
}
void loop() { 
int buttonValue1 = digitalRead(buttonPin1);
int buttonValue2 = digitalRead(buttonPin2);
int buttonValue3 = digitalRead(buttonPin3);
int buttonValue4 = digitalRead(buttonPin4);
int buttonValue5 = digitalRead(buttonPin5);
int buttonValue6 = digitalRead(buttonPin6);
int buttonValue7 = digitalRead(buttonPin7);   
if (buttonValue5 == LOW && buttonValue6 == LOW && buttonValue4 == HIGH)
{
Serial.write(1); 
}   
else if (buttonValue5 == LOW && buttonValue6 == LOW && buttonValue4 == LOW)
{
Serial.write(2);   
}
else if (buttonValue3 == LOW && buttonValue7 == LOW && buttonValue4 == HIGH)
{
Serial.write(3);      
}   
else if (buttonValue3 == LOW && buttonValue7 == LOW && buttonValue4 == LOW)
{
Serial.write(4); 
}     
else if (buttonValue7 == LOW && buttonValue5 == LOW && buttonValue4 == HIGH)
{
Serial.write(5);   
}   
else if (buttonValue7 == LOW && buttonValue5 == LOW && buttonValue4 == LOW)
{
Serial.write(6);    
}     
else if (buttonValue6 == LOW && buttonValue3 == LOW && buttonValue4 == HIGH)
{
Serial.write(7);  
}   
else if (buttonValue6 == LOW && buttonValue3 == LOW && buttonValue4 == LOW)
{
Serial.write(8); 
}
else if (buttonValue1 == LOW && buttonValue4 ==HIGH)
{
Serial.write(9); 
}     
else if (buttonValue1 == LOW && buttonValue4 ==LOW)
{
Serial.write(10); 
} 
else if (buttonValue2 == LOW && buttonValue4 ==HIGH)
{
Serial.write(11); 
}
else if (buttonValue2 == LOW && buttonValue4 ==LOW)
{
Serial.write(12);    
}    
else  if (buttonValue5 == LOW && buttonValue4 ==HIGH)
{
Serial.write(13); 
}    
else  if (buttonValue5 == LOW && buttonValue4 ==LOW)
{
Serial.write(14); 
}    
else  if (buttonValue6 == LOW && buttonValue4 == HIGH)
{
Serial.write(40); 
}   
 else  if (buttonValue6 == LOW && buttonValue4 == LOW)
{
Serial.write(50); 
}
else  if (buttonValue3 == LOW && buttonValue4 == HIGH)
{
Serial.write(17); 
}    
else  if (buttonValue3 == LOW && buttonValue4 == LOW)
{
Serial.write(18); 
}    
else  if (buttonValue7 == LOW && buttonValue4 == HIGH)
{
Serial.write(60); 
}    
else  if (buttonValue7 == LOW && buttonValue4 == LOW)
{
Serial.write(80); 
} 
else if (buttonValue4 == LOW)
{
Serial.write(21); 
}          
else 
{
Serial.write(100); 
}}