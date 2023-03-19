/*
  Morse::cpp - Library for flashing Morse code.
  Created by Özgür Soysal, April 9, 2021.
  Released into the public domain.
*/

#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin, int rate)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
  _rate = rate;
}

void Morse::dot()
{
  digitalWrite(_pin, HIGH);
  delay(_rate);
  digitalWrite(_pin, LOW);
  delay(_rate);  
}

void Morse::dash()
{
  digitalWrite(_pin, HIGH);
  delay(3*_rate);
  digitalWrite(_pin, LOW);
  delay(_rate);
}

void Morse::new_letter()
{
	delay(2*_rate);
}

void Morse::new_word()
{
	delay(6*_rate);
}

void Morse::printchar(char character)
{
	switch(character){
      case 'A' : Morse::dot(); Morse::dash(); break;
      case 'B' : Morse::dash(); Morse::dot(); Morse::dot(); Morse::dot(); break;
      case 'C' : Morse::dash(); Morse::dot(); Morse::dash(); Morse::dot(); break;
      case 'D' : Morse::dash(); Morse::dot(); Morse::dot(); break;
      case 'E' : Morse::dot(); break;
      case 'F' : Morse::dot(); Morse::dot(); Morse::dash(); Morse::dot(); break;
      case 'G' : Morse::dash(); Morse::dash(); Morse::dot(); break;
      case 'H' : Morse::dot(); Morse::dot(); Morse::dot(); Morse::dot(); break;
      case 'I' : Morse::dot(); Morse::dot(); break;
      case 'J' : Morse::dot(); Morse::dash(); Morse::dash(); Morse::dash(); break;
      case 'K' : Morse::dash(); Morse::dot(); Morse::dash(); break;
      case 'L' : Morse::dot(); Morse::dash(); Morse::dot(); Morse::dot(); break;
      case 'M' : Morse::dash(); Morse::dash(); break;
      case 'N' : Morse::dash(); Morse::dot(); break;
      case 'O' : Morse::dash(); Morse::dash(); Morse::dash(); break;
      case 'P' : Morse::dot(); Morse::dash(); Morse::dash(); Morse::dot(); break;
      case 'Q' : Morse::dash(); Morse::dash(); Morse::dot(); Morse::dash(); break;
      case 'R' : Morse::dot(); Morse::dash(); Morse::dot(); break;
      case 'S' : Morse::dot(); Morse::dot(); Morse::dot(); break;
      case 'T' : Morse::dash(); break;
      case 'U' : Morse::dot(); Morse::dot(); Morse::dash(); break;
      case 'V' : Morse::dot(); Morse::dot(); Morse::dot(); Morse::dash(); break;
      case 'W' : Morse::dot(); Morse::dash(); Morse::dash(); break;
      case 'X' : Morse::dash(); Morse::dot(); Morse::dot(); Morse::dash(); break;
      case 'Y' : Morse::dash(); Morse::dot(); Morse::dash(); Morse::dash(); break;
      case 'Z' : Morse::dash(); Morse::dash(); Morse::dot(); Morse::dot(); break;
	  case 'a' : Morse::dot(); Morse::dash(); break;
      case 'b' : Morse::dash(); Morse::dot(); Morse::dot(); Morse::dot(); break;
      case 'c' : Morse::dash(); Morse::dot(); Morse::dash(); Morse::dot(); break;
      case 'd' : Morse::dash(); Morse::dot(); Morse::dot(); break;
      case 'e' : Morse::dot(); break;
      case 'f' : Morse::dot(); Morse::dot(); Morse::dash(); Morse::dot(); break;
      case 'g' : Morse::dash(); Morse::dash(); Morse::dot(); break;
      case 'h' : Morse::dot(); Morse::dot(); Morse::dot(); Morse::dot(); break;
      case 'i' : Morse::dot(); Morse::dot(); break;
      case 'j' : Morse::dot(); Morse::dash(); Morse::dash(); Morse::dash(); break;
      case 'k' : Morse::dash(); Morse::dot(); Morse::dash(); break;
      case 'l' : Morse::dot(); Morse::dash(); Morse::dot(); Morse::dot(); break;
      case 'm' : Morse::dash(); Morse::dash(); break;
      case 'n' : Morse::dash(); Morse::dot(); break;
      case 'o' : Morse::dash(); Morse::dash(); Morse::dash(); break;
      case 'p' : Morse::dot(); Morse::dash(); Morse::dash(); Morse::dot(); break;
      case 'q' : Morse::dash(); Morse::dash(); Morse::dot(); Morse::dash(); break;
      case 'r' : Morse::dot(); Morse::dash(); Morse::dot(); break;
      case 's' : Morse::dot(); Morse::dot(); Morse::dot(); break;
      case 't' : Morse::dash(); break;
      case 'u' : Morse::dot(); Morse::dot(); Morse::dash(); break;
      case 'v' : Morse::dot(); Morse::dot(); Morse::dot(); Morse::dash(); break;
      case 'w' : Morse::dot(); Morse::dash(); Morse::dash(); break;
      case 'x' : Morse::dash(); Morse::dot(); Morse::dot(); Morse::dash(); break;
      case 'y' : Morse::dash(); Morse::dot(); Morse::dash(); Morse::dash(); break;
      case 'z' : Morse::dash(); Morse::dash(); Morse::dot(); Morse::dot(); break;
      case '.' : Morse::dot(); Morse::dash(); Morse::dot(); Morse::dash(); Morse::dot(); Morse::dash(); break;
      case ',' : Morse::dash(); Morse::dash(); Morse::dot(); Morse::dot(); Morse::dash(); Morse::dash(); break;
      case '?' : Morse::dot(); Morse::dot(); Morse::dash(); Morse::dash(); Morse::dot(); Morse::dot(); break;
      case '/' : Morse::dash(); Morse::dot(); Morse::dot(); Morse::dash(); Morse::dot(); break;
      case '@' : Morse::dot(); Morse::dash(); Morse::dash(); Morse::dot(); Morse::dash(); Morse::dot(); break;
      case '1' : Morse::dot(); Morse::dash(); Morse::dash(); Morse::dash(); Morse::dash(); break;
      case '2' : Morse::dot(); Morse::dot(); Morse::dash(); Morse::dash(); Morse::dash(); break;
      case '3' : Morse::dot(); Morse::dot(); Morse::dot(); Morse::dash(); Morse::dash(); break;
      case '4' : Morse::dot(); Morse::dot(); Morse::dot(); Morse::dot(); Morse::dash(); break;
      case '5' : Morse::dot(); Morse::dot(); Morse::dot(); Morse::dot(); Morse::dot(); break;
      case '6' : Morse::dash(); Morse::dot(); Morse::dot(); Morse::dot(); Morse::dot(); break;
      case '7' : Morse::dash(); Morse::dash(); Morse::dot(); Morse::dot(); Morse::dot(); break;
      case '8' : Morse::dash(); Morse::dash(); Morse::dash(); Morse::dot(); Morse::dot(); break;
      case '9' : Morse::dash(); Morse::dash(); Morse::dash(); Morse::dash(); Morse::dot(); break;
      case '0' : Morse::dash(); Morse::dash(); Morse::dash(); Morse::dash(); Morse::dash(); break;
      case ' ' : Morse::new_word(); break;
    }
    Morse::new_letter();
}

void Morse::printString(char *message)
{
	for (int byte_idx = 0; byte_idx < strlen(message); byte_idx++) {
		Morse::printchar(message[byte_idx]);
	}
}