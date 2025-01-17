void setup(){

  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);

  unsigned long tiempoAnterior = 0; // Almacena el tiempo del último mensaje
  const unsigned long intervalo = 15000; // Intervalo de 15 segundos (15000 ms)

  Serial.begin(9600);
  Serial.println("Introduce un numero: ");

}

void loop(){

  if(Serial.available()>0){
    
    int numero = Serial.parseInt();
    pines(numero);

  }
}

void pines(int numero){
   if(numero==1){
      digitalWrite(9,HIGH);
      digitalWrite(8,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
    }if(numero==2){
      digitalWrite(9,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
    }if(numero==3){
      digitalWrite(9,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
    }if(numero==4){
      digitalWrite(9,LOW);
      digitalWrite(8,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
    }if(numero==5){
      digitalWrite(9,HIGH);
      digitalWrite(8,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
    }if(numero==6){
      digitalWrite(9,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
    }if(numero==7){
      digitalWrite(9,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
    }if(numero==8){
      digitalWrite(9,LOW);
      digitalWrite(8,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,HIGH);
    }if(numero==9){
      digitalWrite(9,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(2,HIGH);
    }

}