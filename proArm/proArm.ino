#include <Servo.h> // Importação da biblioteca necessária 
//para utilizar os servo

Servo base; // Servo que movimenta a base do braço robótico
Servo altura; // Servo que movimenta a altura do braço robótico
Servo braco; // Servo que movimenta o braço do braço robótico
Servo garra; // Servo que movimenta a garra do braço robótico

void ex1() { // função chamada após realização do exercício 1
  Serial.println("ex1");
  for (int i = 90; i <= 180; i++) {
    base.write(i);
    delay(10);
  }
  delay(1000);
  for (int i = 180; i >= 0; i--) {
    base.write(i);
    delay(10);
  }
  delay(1000);
  for (int i = 0; i <= 90; i++) {
    base.write(i);
    delay(10);
  }
}

void ex2() { // função chamada após realização do exercício 2
  Serial.println("ex2");
  for (int i = 120; i >= 90; i--) {
    braco.write(i);
    delay(5);
  }
  for (int i = 120; i <= 180; i++) {
    altura.write(i);
    delay(10);
  }
  delay(1000);

  for (int i = 180; i >= 30; i--) {
    altura.write(i);
    delay(10);
  }
  delay(1000);
  for (int i = 30; i <= 120; i++) {
    altura.write(i);
    delay(10);
  }
  for (int i = 90; i <= 120; i++) {
    braco.write(i);
    delay(5);
  }
}
void ex3() { // função chamada após realização do exercício 3
  Serial.println("ex3");
  altura.write(140);
  for (int i = 120; i <= 170; i++) {
    braco.write(i);
    delay(10);
  }
  delay(1000);
  for (int i = 170; i >= 40; i--) {
    braco.write(i);
    delay(10);
  }
  delay(1000);
  for (int i = 40; i <= 120; i++) {
    braco.write(i);
    delay(10);
  }
}
void ex4() { // função chamada após realização do exercício 4
  Serial.println("ex4");

  for (int i = 100; i >= 0; i--) {
    garra.write(i);
    delay(10);
  }
  delay(1000);
  for (int i = 0; i <= 100; i++) {
    garra.write(i);
    delay(10);
  }
  delay(1000);
}

void ex5() { // função chamada após realização do exercício 5
  Serial.println("ex5");
  altura.write(140);
  for (int i = 120; i <= 170; i++) {
    braco.write(i);
    delay(10);
  }
  delay(1000);
  for (int i = 90; i >= 0; i--) {
    base.write(i);
    delay(10);
  }
  delay(1000);
  for (int i = 0; i <= 90; i++) {
    base.write(i);
    delay(10);
  }
  for (int i = 170; i >= 120; i--) {
    braco.write(i);
    delay(10);
  }
}
void ex6() { // função chamada após realização do exercício 6
  Serial.println("ex6");
  for (int i = 120; i >= 90; i--) {
    braco.write(i);
    delay(5);
  }
  for (int i = 120; i <= 180; i++) {
    altura.write(i);
    delay(10);
  }
  delay(1000);
  for (int i = 100; i >= 0; i--) {
    garra.write(i);
    delay(10);
  }
  delay(1000);
  for (int i = 0; i <= 100; i++) {
    garra.write(i);
    delay(10);
  }
  delay(1000);

  for (int i = 180; i >= 120; i--) {
    altura.write(i);
    delay(10);
  }
  for (int i = 90; i <= 120; i++) {
    braco.write(i);
    delay(5);
  }
}
void ex7() { // função chamada após realização do exercício 7
  Serial.println("ex7");
  altura.write(140);
  for (int i = 120; i >= 40; i--) {
    braco.write(i);
    delay(10);
  }
  delay(1000);
  for (int i = 90; i <= 160; i++) {
    base.write(i);
    delay(10);
  }
  delay(1000);
  for (int i = 40; i <= 170; i++) {
    braco.write(i);
    delay(10);
  }
  for (int i = 160; i >= 0; i--) {
    base.write(i);
    delay(10);
  }
  delay(1000);
  for (int i = 0; i <= 90; i++) {
    base.write(i);
    delay(10);
  }
  delay(1000);
  for (int i = 170; i >= 120; i--) {
    braco.write(i);
    delay(10);
  }

}
void c1() { // Função chamada após o recebimento do comando "1"
  delay(1000);
}
void c2() { // Função chamada após o recebimento do comando "1"
  for (int i = 100; i >= 0; i--) {
    garra.write(i);
    delay(10);
  }
  delay(500);
}
void c3() { // Função chamada após o recebimento do comando "1"
  for (int i = 0; i <= 100; i++) {
    garra.write(i);
    delay(10);
  }
  delay(500);
}
void c4() { // Função chamada após o recebimento do comando "1"
  altura.write(140);
  for (int i = 120; i <= 170; i++) {
    braco.write(i);
    delay(10);
  }
  delay(500);
  for (int i = 170; i >= 120; i--) {
    braco.write(i);
    delay(10);
  }
}
void c5() { // Função chamada após o recebimento do comando "1"
  altura.write(140);
  for (int i = 120; i >= 40; i--) {
    braco.write(i);
    delay(10);
  }
  delay(500);
  for (int i = 40; i <= 120; i++) {
    braco.write(i);
    delay(10);
  }
}
void c6() { // Função chamada após o recebimento do comando "1"
  for (int i = 90; i >= 0; i--) {
    base.write(i);
    delay(10);
  }
  delay(500);
  for (int i = 0; i <= 90; i++) {
    base.write(i);
    delay(10);
  }
}
void c7() { // Função chamada após o recebimento do comando "1"
  for (int i = 90; i <= 180; i++) {
    base.write(i);
    delay(10);
  }
  delay(500);
  for (int i = 180; i >= 90; i--) {
    base.write(i);
    delay(10);
  }
}
void c8() { // Função chamada após o recebimento do comando "1"
  for (int i = 120; i <= 180; i++) {
    altura.write(i);
    delay(10);
  }
  delay(500);
  for (int i = 180; i >= 120; i--) {
    altura.write(i);
    delay(10);
  }
}
void c9() { // Função chamada após o recebimento do comando "1"
  for (int i = 120; i >= 30; i--) {
    altura.write(i);
    delay(10);
  }
  delay(500);
  for (int i = 30; i <= 120; i++) {
    altura.write(i);
    delay(10);
  }
}
void calibrar() {
  base.write(90);
  altura.write(120);
  braco.write(120);
  garra.write(100);
}

void setup() {
  base.attach(7); //Definindo servo da base ao pino 7
  altura.attach(6);//Definindo servo de altura ao pino 6
  braco.attach(5);//Definindo servo do braço ao pino 5
  garra.attach(4);//Definindo servo da garra ao pino 4
  Serial.begin(9600);//Estabelecendo comunicação serial
  calibrar(); //Função destinada para calibração dos servos
}
void loop() {

  char comando = Serial.read(); //armazenando um comando
  if (comando == 'a') //Se o comando for igual a "a" chama a função "ex1".
    ex1();
  if (comando == 'b') //Se o comando for igual a "b" chama a função "ex2".
    ex2();
  if (comando == 'c') //Se o comando for igual a "c" chama a função "ex3".
    ex3();
  if (comando == 'd') //Se o comando for igual a "d" chama a função "ex4".
    ex4();
  if (comando == 'e') //Se o comando for igual a "e" chama a função "ex5".
    ex5();
  if (comando == 'f') //Se o comando for igual a "f" chama a função "ex6".
    ex6();
  if (comando == 'g') //Se o comando for igual a "f" chama a função "ex7".
    ex7();
  if (comando == '1') //Se o comando for igual a "f" chama a função "c1".
    c1();
  if (comando == '2') //Se o comando for igual a "f" chama a função "c2".
    c2();
  if (comando == '3') //Se o comando for igual a "f" chama a função "c3".
    c3();
  if (comando == '4') //Se o comando for igual a "f" chama a função "c4".
    c4();
  if (comando == '5') //Se o comando for igual a "f" chama a função "c5".
    c5();
  if (comando == '6') //Se o comando for igual a "f" chama a função "c6".
    c6();
  if (comando == '7') //Se o comando for igual a "f" chama a função "c7".
    c7();
  if (comando == '8') //Se o comando for igual a "f" chama a função "c8".
    c8();
  if (comando == '9') //Se o comando for igual a "f" chama a função "c9".
    c9();
  calibrar(); //Calibragem dos servos
}
