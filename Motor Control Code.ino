// C++ code
//
void setup()
{
 
  pinMode(10, OUTPUT); //input1
  pinMode(6, OUTPUT); //input2
  pinMode(7, OUTPUT); //input3
  pinMode(8, OUTPUT); //inpute4
}

void loop()
{
  //Motor 1(connected with yellow wires) in Clockwise direction 
  
  digitalWrite(10, HIGH); //set high (change to LOW if counter clockwise is desierd)
  digitalWrite(6, LOW); // set low (change to HIGH if counter clockwise is desierd)
  
  //Motor 2(connected with grey wires) in  Counter Clockwise direction 
  
  digitalWrite(7, LOW); //set high (change to HIGH if clockwise is desierd)
  digitalWrite(8, HIGH); // set low (change to LOW if clockwise is desierd)
  
 }