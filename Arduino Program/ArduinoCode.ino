#include <IRremote.h> 
 IRrecv irrecv(7);  
decode_results results;  

String incoming = ""; // for incoming serial data
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);   
}

void loop() {

  
  if (irrecv.decode(&results)){
        Serial.print(results.value, HEX);
        irrecv.resume();
  }




  
 /* if (Serial.available() > 0) {
    // read the incoming byte:
    incoming = Serial.readString();    
    incoming[incoming.length()-1]='\0';    
    if(incoming==("AuthLogin")){
      Serial.print("DoneAuth");
      }
  }*/

//  delay(1000);
 // Serial.print("Hai");
}
