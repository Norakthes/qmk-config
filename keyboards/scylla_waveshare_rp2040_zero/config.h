#pragma once

// EEPROM handedness — flash each half once with uf2-split-left / uf2-split-right
#define EE_HANDS

// Serial pin for split communication (PIO vendor driver on RP2040)
//#define SERIAL_USART_TX_PIN GP0

#define SERIAL_DEBUG

#define SPLIT_DEBUG
#define DEBUG_MATRIX_SCAN_RATE