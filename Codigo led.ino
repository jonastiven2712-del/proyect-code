sketch_oct9a.ino
int tiempo = 500; // Tiempo en milisegundos
int led_1_pin = 13;//el led 1 vale 13
int led_2_pin = 12;//el led 2 vale 12
/*este programa fue creado por [Jonathan Diaz]*/
void setup() {
  pinMode(led_1_pin, OUTPUT); // Configura el pin del LED 1 como salida
  pinMode(led_2_pin, OUTPUT); // Configura el pin del LED 2 como salida
}
void loop() {
  digitalWrite(led_1_pin, HIGH); // Enciende el LED 1
  digitalWrite(led_2_pin, LOW);  // Apaga el LED 2
  delay(tiempo);                  // Espera el tiempo definido

  digitalWrite(led_1_pin, LOW);  // Apaga el LED 1
  digitalWrite(led_2_pin, HIGH); // Enciende el LED 2
  delay(tiempo);                  // Espera el tiempo definido
}
