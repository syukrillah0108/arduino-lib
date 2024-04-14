#include "./function/MacAddress/esp32.h"
//#include "./function/MacAddress/esp8266.h"
uint8_t broadcastAddress[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};

void setup(){
    Serial.begin(115200);
    //pinMode(A0, INPUT);
    setupRec();
    //setupTrans(broadcastAddress);
}

void loop(){
    /*
    sendData(
        broadcastAddress);
    myData.data = analogRead(A0);
    delay(500);
    */
}