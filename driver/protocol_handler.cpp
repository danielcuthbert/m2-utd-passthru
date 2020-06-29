#include "pch.h"
#include "protocol_handler.h"
#include "Logger.h"
#include "usbcomm.h"

protocol_handler::protocol_handler(unsigned long channelID)
{
	this->channelid = channelID;
	this->baud = 0;
	this->flags = 0;
}

void protocol_handler::setFlags(unsigned long flags)
{
	this->flags = flags;
}

void protocol_handler::setBaud(unsigned long baud)
{
	this->baud = baud;
}

unsigned long protocol_handler::getBaud()
{
	return this->baud;
}

iso9141_handler::iso9141_handler(unsigned long channelID) : protocol_handler(channelID)
{
	LOGGER.logDebug("ISO9141", "Handler created");
}

iso15765_handler::iso15765_handler(unsigned long channelID) : protocol_handler(channelID)
{
	LOGGER.logDebug("ISO15765", "Handler created");
}

can_handler::can_handler(unsigned long channelID) : protocol_handler(channelID)
{
	LOGGER.logDebug("CAN", "Handler created");
}