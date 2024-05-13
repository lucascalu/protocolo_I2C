#include <Wire.h>

void setup() {
  Serial.begin(9600);
  Wire.begin();        
}

void loop() {
  // Solicita 2 bytes do escravo com endereço 9
  Wire.requestFrom(9, 2); 
  while (Wire.available()) {
    char c = Wire.read(); // Lê o byte recebido do escravo
    Serial.print(c);      // Exibe na porta serial
  }
  
  // Solicita 2 bytes do escravo com endereço 10
  Wire.requestFrom(10, 2); 
  while (Wire.available()) {
    char c = Wire.read(); // Lê o byte recebido do escravo
    Serial.print(c);      // Exibe na porta serial
  }
  
  Serial.println();       // Adiciona uma nova linha para melhor legibilidade
  delay(500);             // Aguarda um pouco antes de solicitar novamente
}
