/*
	Capitulo 17 de Arduino desde cero en Español.
	Programa que utiliza el modulo joystick KY-023 para encender LEDs mediante PWM
	y obtener una indicacion visual del movimiento de la palanca y cierre del
	interruptor incorporado.

	Autor: bitwiseAr  

*/

int X;				// variable para almacenar valor leido del eje X
int Y;				// variable para almacenar valor leido del eje y
int LED_IZQUIERDO = 3;		// LED izquierdo a pin digital 3
int LED_DERECHO = 5;		// LED derecho a pin digital 5
int LED_ABAJO = 6;		// LED de abajo a pin digital 6
int LED_ARRIBA = 9;		// LED de arriba a pin digital 9
int PULSADOR = 10;		// pulsador incorporado pin digital 10
int LED_SW = 11;		// LED de pulsador a pin digital 11
int SW;				// variable para almacenar valor leido del pulsador

void setup(){
  pinMode(LED_IZQUIERDO, OUTPUT);	// LED como salida
  pinMode(LED_DERECHO, OUTPUT);		// LED como salida
  pinMode(LED_ABAJO, OUTPUT);		// LED como salida
  pinMode(LED_ARRIBA, OUTPUT);		// LED como salida
  pinMode(LED_SW, OUTPUT);		// LED como salida
  pinMode(PULSADOR, INPUT);		// pulsador como entrada, es el cable blanco SW
  // entradas analogicas no requieren inicializacion
}

void loop(){

  X = analogRead(A0);			// lectura de valor de eje x
  Y = analogRead(A1);			// lectura de valor de eje x
  SW = digitalRead(PULSADOR);		// lectura de valor de pulsador
  if (X >= 0 && X < 480){					// si X esta en la zona izquierda
    analogWrite(LED_IZQUIERDO, map(X, 0, 480, 255, 0));		// brillo LED proporcional
  } else {
    analogWrite(LED_IZQUIERDO, 0);				// X en zona de reposo, apaga LED
  }
  if (X > 520 && X <= 1023){					// si X esta en la zona derecha
    analogWrite(LED_DERECHO, map(X, 520, 1023, 0, 255));	// brillo LED proporcional
  } else {
    analogWrite(LED_DERECHO, 0);				// X en zona de reposo, apaga LED
  }
  if (Y >= 0 && Y < 480){					// si Y esta en la zona de abajo
    analogWrite(LED_ABAJO, map(Y, 0, 480, 255, 0));		// brillo LED proporcional
  } else {
    analogWrite(LED_ABAJO, 0);					// Y en zona de reposo, apaga LED
  }
  if (Y > 520 && Y <= 1023){					// si Y esta en la zona de arriba
    analogWrite(LED_ARRIBA, map(Y, 520, 1023, 0, 255));		// brillo LED proporcional
  } else {
     analogWrite(LED_ARRIBA, 0);   				// Y en zona de reposo, apaga LED     
  }
         
  digitalWrite(LED_SW, !SW);		// escribe en LED valor opuesto al leido del pulsador
  
}