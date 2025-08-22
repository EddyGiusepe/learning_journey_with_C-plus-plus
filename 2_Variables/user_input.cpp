// Senior Data Scientist: Dr. Eddy Giusepe Chirinos Isidro

/*
Neste script, vamos aprender a usar o cin para obter informações do usuário.
Para isso, vamos usar o arquivo constants.h, que contém as constantes para
cores. Ademais, para ver uma aplicação prática, vamos criar uma CALCULADORA
SIMPLES.

RUN
---
g++ -o user_input user_input.cpp && ./user_input

Para FORMATAR o código
----------------------
clang-format -i user_input.cpp
*/
#include <iostream>
using namespace std;
#include "constants.h" // IMPORTANDO O ARQUIVO DE CONSTANTES

int main() {
  int x;
  int y;
  cout << RED << "CALCULADORA SIMPLES" << RESET << endl;
  cout << YELLOW << "Digite o primeiro número inteiro: " << RESET;
  cin >> x;
  cout << YELLOW << "Digite o segundo número inteiro: " << RESET;
  cin >> y;
  cout << "A soma de " << x << " e " << y << " é: " << x + y << endl;

  return 0;
}
