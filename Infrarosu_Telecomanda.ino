#include<IRremote.h>
const int RECV_PIN = 9;
IRrecv irrecv(RECV_PIN);
decode_results results;
//VERSIUNEA 2.5.0 by shirrif
void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);

}

void loop() {
  if (irrecv.decode(&results))
   {
      switch (results.value){
        case 0xE0E040BF:
          Serial.println("shut down");
      }
      irrecv.resume();
   }

}
