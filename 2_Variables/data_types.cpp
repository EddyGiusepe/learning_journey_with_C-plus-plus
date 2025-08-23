// Senior Data Scientist: Dr. Eddy Giusepe Chirinos Isidro

/*
RUN
---
g++ -o data_types data_types.cpp && ./data_types

Para FORMATAR o código
----------------------
clang-format -i data_types.cpp
*/

#include <iostream>
using namespace std;
#include "constants.h" // IMPORTANDO O ARQUIVO DE CONSTANTES

int main() {
  // TIPOS NUMÉRICOS
  double snack_expense = 107.5;
  cout << YELLOW << "Meus gastos hoje no lache foi de: " << RESET
       << snack_expense << YELLOW << " reais." << RESET << endl;

  // TIPOS BOOLEANOS
  bool is_am_hungry = true;
  cout << CYAN << "Estou com muita fome? " << RESET << is_am_hungry
       << "\n1 --> Sim e 0 --> Não" << endl;

  // TIPO STRING
  string my_name = "Eddy Giusepe";
  cout << GREEN << "Meu nome é: " << RESET << my_name << endl;

  return 0;
}
