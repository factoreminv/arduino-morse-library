#include <Morse.h>

Morse morse(13, 100); // Sending pin to be used, the lenght of one transmission unit in milliseconds.

void setup() {
}

void loop() {
  morse.printString("Hello, world!!!");
  delay(5000);
}
