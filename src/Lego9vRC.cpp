#include "Lego9vRC.h"

IRsendRaw irsender;

void sendCommand(Channel channel, Command command, bool toggle) {
    int index = channel * 6 + command * 2 + (toggle ? 1 : 0);
    irsender.send(const_cast<uint16_t *>(all_commands[index]), PAYLOAD_LEN, FREQ_KHZ);
}

Train9vIR::Train9vIR(Channel channel) { this->channel = channel; }

void Train9vIR::toggle() { this->toggleVal = !this->toggleVal; }

void Train9vIR::stop() {
    sendCommand(this->channel, Command::STOP, this->toggleVal);
    delay(RESEND_DELAY);
    sendCommand(this->channel, Command::STOP, this->toggleVal);
    this->toggle();
    sendCommand(this->channel, Command::STOP, this->toggleVal);
    delay(RESEND_DELAY);
    sendCommand(this->channel, Command::STOP, this->toggleVal);
    this->speed = 0;
    this->toggle();
}

void Train9vIR::increment() {
    if (this->speed >= 7)
        return;

    sendCommand(this->channel, Command::FORWARD, this->toggleVal);
    delay(RESEND_DELAY);
    sendCommand(this->channel, Command::FORWARD, this->toggleVal);
    this->speed++;
    this->toggle();
}

void Train9vIR::decrement() {
    if (this->speed <= -7)
        return;

    sendCommand(this->channel, Command::BACKWARD, this->toggleVal);
    delay(RESEND_DELAY);
    sendCommand(this->channel, Command::BACKWARD, this->toggleVal);
    this->speed--;
    this->toggle();
}

void Train9vIR::setSpeed(Speed speed) {

    while (this->speed != speed) {
        Serial.println(this->speed);
        if (this->speed < speed) {
            this->increment();
        } else {
            this->decrement();
        }
        delay(100);
    }
}