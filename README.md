# arduino_uart_converter

Convert 19200 (from LoRa)

to 57600 (usual mateksys speed for GPS)

SoftSerial PINS:

rxPIN 2

txPIN 3
```
SoftSerial(Pin2)(19200) -> Serial1(Usual)(57600)
```

Used Seeeduino XIAO

(double shortcircuit RST to enter bootloader to upload sketch)
