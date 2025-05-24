#pragma once

#include <IRLibSendBase.h>
#include <IRLib_HashRaw.h>

#define SEQ__1 270
#define SEQ__4 860
#define SEQ__8 1900

#define PAYLOAD_LEN 35
#define RESEND_DELAY 115
#define FREQ_KHZ 36

#define CH1_FWD_0 {SEQ__1, SEQ__8, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1}
#define CH1_FWD_1 {SEQ__1, SEQ__8, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1}

#define CH1_BWD_0 {SEQ__1, SEQ__8, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1}
#define CH1_BWD_1 {SEQ__1, SEQ__8, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1}

#define CH1_STP_0 {SEQ__1, SEQ__8, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1}
#define CH1_STP_1 {SEQ__1, SEQ__8, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1}

#define CH2_FWD_0 {SEQ__1, SEQ__8, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1}
#define CH2_FWD_1 {SEQ__1, SEQ__8, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1}

#define CH2_BWD_0 {SEQ__1, SEQ__8, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1}
#define CH2_BWD_1 {SEQ__1, SEQ__8, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1}

#define CH2_STP_0 {SEQ__1, SEQ__8, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1}
#define CH2_STP_1 {SEQ__1, SEQ__8, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1}

#define CH3_FWD_0 {SEQ__1, SEQ__8, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1}
#define CH3_FWD_1 {SEQ__1, SEQ__8, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1}

#define CH3_BWD_0 {SEQ__1, SEQ__8, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1}
#define CH3_BWD_1 {SEQ__1, SEQ__8, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1}

#define CH3_STP_0 {SEQ__1, SEQ__8, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1}
#define CH3_STP_1 {SEQ__1, SEQ__8, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1}

#define CHA_FWD_0 {SEQ__1, SEQ__8, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1}
#define CHA_FWD_1 {SEQ__1, SEQ__8, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1}

#define CHA_BWD_0 {SEQ__1, SEQ__8, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1}
#define CHA_BWD_1 {SEQ__1, SEQ__8, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1}

#define CHA_STP_0 {SEQ__1, SEQ__8, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1}
#define CHA_STP_1 {SEQ__1, SEQ__8, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__4, SEQ__1, SEQ__1, SEQ__1, SEQ__1, SEQ__1}

// clang-format off
const uint16_t all_commands[][PAYLOAD_LEN] = {
    CH1_FWD_0, CH1_FWD_1, CH1_BWD_0, CH1_BWD_1, CH1_STP_0, CH1_STP_1,
    CH2_FWD_0, CH2_FWD_1, CH2_BWD_0, CH2_BWD_1, CH2_STP_0, CH2_STP_1,
    CH3_FWD_0, CH3_FWD_1, CH3_BWD_0, CH3_BWD_1, CH3_STP_0, CH3_STP_1,
    CHA_FWD_0, CHA_FWD_1, CHA_BWD_0, CHA_BWD_1, CHA_STP_0, CHA_STP_1,
};
// clang-format on

enum Channel {
    CH1,
    CH2,
    CH3,
    ALL,
};

enum Command {
    FORWARD,
    BACKWARD,
    STOP,
};

enum Speed {
    FORWARD7 = 7,
    FORWARD6 = 6,
    FORWARD5 = 5,
    FORWARD4 = 4,
    FORWARD3 = 3,
    FORWARD2 = 2,
    FORWARD1 = 1,
    BRAKE = 0,
    BACKWARD1 = -1,
    BACKWARD2 = -2,
    BACKWARD3 = -3,
    BACKWARD4 = -4,
    BACKWARD5 = -5,
    BACKWARD6 = -6,
    BACKWARD7 = -7,
};

class Train9vIR {
  private:
    bool toggleVal = true;
    Channel channel;

  public:
    Train9vIR(Channel channel);

    void stop();
    void toggle();
    void increment();
    void decrement();
    void setSpeed(Speed speed);

    int8_t speed = 0;
};
