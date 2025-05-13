/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep
*/

#include <Servo.h>
int ldrPin = A0;

int intensidad = 0; //guarda la cantidad de luz
int intensidadMapeada = 0; //guardar la cantidad de luz 
//despues de ajustarla al rango del servo
int servoMax = 150;
int servoMin = 30;
Servo miServo1;  
int pos = 0;    // variable to store the servo position

void setup() {
  miServo1.attach(3);  // attaches the servo on pin 9 to the Servo object
}

void loop() {
    intensidad = analogRead(A0);
    intensidadMapeada = map(intensidad, 0, 1023, servoMin,servoMax);
    pos = intensidadMapeada;
    //qué variable va a escribir en mi servo
    miServo1.write(pos);              // tell servo to go to position in variable 'pos'

}
