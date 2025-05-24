#include <Lego9vRC.h>

// connect 940nm ir led to pin 3 (Uno)
// See IRLib2 for other boards
// note: this is not closed loop control, the train can get out of sync

Train9vIR train(Channel::CH1);

void setup() {
    train.stop();
    delay(1000);
}

void loop() {
    train.setSpeed(Speed::FORWARD2);
    delay(1000);
    train.setSpeed(Speed::BACKWARD2);
    delay(1000);
}
