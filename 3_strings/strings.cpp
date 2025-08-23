// Senior Data Scientist: Dr. Eddy Giusepe Chirinos Isidro

/*
RUN
---
g++ -o strings strings.cpp && ./strings

Para FORMATAR o código
----------------------
clang-format -i strings.cpp
*/

#include <iostream>
using namespace std;
#include "../2_Variables/constants.h" // IMPORTANDO O ARQUIVO DE CONSTANTES

int main() {
  string texto = "ABCDEFGHTASDFGHJKQWERTYUIOPZXCVBNM";
  cout << RED << "O tamanho da string, usando .lenght() é: " << RESET
       << texto.length() << endl;
  cout << "Usando .size() para obter o tamanho da string: " << texto.size()
       << endl;

  // ACESSANDO ELEMENTOS DA STRING
  cout << BLUE << "O primeiro elemento da string é: " << RESET << texto[0]
       << endl;

  return 0;
}