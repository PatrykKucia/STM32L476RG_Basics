/*
 * MCP23S08.h
 *
 *  Created on: Apr 22, 2024
 *      Author: patti
 */
#pragma once

#include <stdint.h>

// mostly used MCP23S08
#define MCP_IODIR   0x00 // Ustawienie kierunku działania pinów
#define MCP_GPPU    0x06 // Włączenie pull-up dla wejść
#define MCP_GPIO    0x09 // Odczytanie stanu wejść
#define MCP_OLAT    0x0A // Zmiana stanu wyjść

// other registers MCP23S08
#define MCP_IPOL      0x01
#define MCP_GPINTEN   0x02
#define MCP_DEFVAL    0x03
#define MCP_INTCON    0x04
#define MCP_IOCON     0x05
#define MCP_INTF      0x07
#define MCP_INTCAP    0x08

// Register read
// reg - register to read
// return - value
uint8_t mcp_reg_read(uint8_t reg);

// Register write
// reg - register to write
// value - value to be writen
// return - void
void mcp_reg_write(uint8_t reg, uint8_t value);
