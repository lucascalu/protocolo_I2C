   #include <Wire.h>

void setup() {
  Wire.begin(9);                // Define o endereço I2C como 9
  Wire.onRequest(requestEvent); // Define a função de callback para lidar com solicitações do mestre
}

void loop() {
  delay(100); // Pequeno atraso para evitar a sobrecarga
}

void requestEvent() {
  Wire.write("AB"); // Envia "AB" para o mestre
}
