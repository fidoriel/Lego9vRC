#include <Lego9vRC.h>

// connect 940nm ir led to pin 3 (Uno)
// See IRLib2 for other boards

Train9vIR train(Channel::CH1);

void setup() {
    Serial.begin(9600);
    Serial.println("Press f for forward, b for backward or s for stop to controll the train.");
}

void loop() {
    if (Serial.available() > 0) {
        char inp = Serial.read();
        if (inp == 'f') {
            train.increment();
            Serial.println("train fwd");
        } else if (inp == 'b') {
            train.decrement();
            Serial.println("train bwd");
        } else if (inp == 's') {
            train.stop();
            Serial.println("train stp");
        }
    }
}
