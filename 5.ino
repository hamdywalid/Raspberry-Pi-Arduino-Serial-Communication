 // On the Arduino:

#include <Ethernet.h>

byte mac[] = {0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED};
IPAddress ip(192, 168, 1, 100);
EthernetServer server(8888);

void setup() {
  Ethernet.begin(mac, ip);
  server.begin();
}

void loop() {
  EthernetClient client = server.available();
  if (client) {
    while (client.connected()) {
      if (client.available()) {
        char c = client.read();
        
        if (c == '11') {
          digitalWrite(2, HIGH);
        } else if (c == '99') {
          digitalWrite(2, LOW);
          
        } else if (c == '13') {
          digitalWrite(3, HIGH);
        } else if (c == '98') {
          digitalWrite(3, LOW);
          
        } else if (c == '15') {
          digitalWrite(3, HIGH);
        } else if (c == '97') {
          digitalWrite(3, LOW);

        } else if (c == '16') {
          digitalWrite(3, HIGH);
        } else if (c == '96') {
          digitalWrite(3, LOW);
          
        } else if (c == '18') {
          digitalWrite(3, HIGH);
        } else if (c == '95') {
          digitalWrite(3, LOW);

        } else if (c == '19') {
          digitalWrite(3, HIGH);
        } else if (c == '94') {
          digitalWrite(3, LOW);
            
        } else if (c == '21') {
          digitalWrite(3, HIGH);
        } else if (c == '93') {
          digitalWrite(3, LOW);

        } else if (c == '22') {
          digitalWrite(3, HIGH);
        } else if (c == '92') {
          digitalWrite(3, LOW);       
          
        }
      }
    }
  }
}
