void setup() {
 #include <Servo.h> 
  
 Servo myservo;
 int joyPin1 = A1; // First analog input for Jostick
 int joyPin2 = A2; // Second analog input for Jostick
 int value1 = 0; // variable to read the value from the analog pin 0
 int value2 = 0; // variable to read the value from the analog pin 1
 int pos = 0; // variable to store the servo position 
 
 void setup() {
 pinMode(joyPin1, INPUT); 
 pinMode(joyPin2, INPUT); 
 myservo.attach(A7); // attaches the servo on pin A7 to the servo object 
 Serial.begin(9600);
 }
 
 void loop() {
 value1 = analogRead(joyPin1); 
 if (value1 > 525){ 
 if ( pos < 181 )
 pos++;
 }
 else if (value1 < 510){ 
 if ( -1 < pos )
 pos--;
 }
  
 delay(15);
 myservo.write(pos); 
  
  
 // delay(10); 
 // value2 = analogRead(joyPin2); 
 // delay(10); 
 
 
 Serial.print("first value : ");
 Serial.println(value1);
 Serial.print("second value : ");
 Serial.println(value2);
 Serial.println("---------------------");
 
 }

}

void loop() {
  // put your main code here, to run repeatedly:

}
