#include <Wire.h>

void setup() {
  Wire.begin(10);               // Define o endereço I2C como 10
  Wire.onRequest(requestEvent); // Define a função de callback para lidar com solicitações do mestre
}

void loop() {
  delay(100); // Pequeno atraso para evitar a sobrecarga
}

void requestEvent() {
  Wire.write("CD"); // Envia "CD" para o mestre
}
