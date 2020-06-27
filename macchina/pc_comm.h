#ifndef PC_COMM_H
#define PC_COMM_H

#include <stdint.h>
#include <Arduino.h>

struct PCMSG { // Total 512 bytes
    uint16_t cmd_id;
    uint16_t arg_size;
    uint16_t args[508];
};


namespace PCCOMM {
    bool pollMessage(PCMSG *msg);
    void sendMessage(PCMSG *msg);
    void logToSerial(char* msg);
};


// Command ID's
#define CMD_LOG 0x01
#define CMD_VOLTAGE 0x02


#endif