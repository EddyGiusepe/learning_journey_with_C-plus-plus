// Senior Data Scientist: Dr. Eddy Giusepe Chirinos Isidro

/*
Declaração de variáveis

RUN
---
g++ -o variables variables.cpp && ./variables
*/
#include <iostream>
using namespace std;

int main() {

  // DECLARANDO VARIÁVEIS
  int age = 25;
  double price = 19.99;
  char letter = 'A';
  string name = "Eddy Giusepe";
  bool isActive = true;

  cout << "A minha idade é: " << age << " anos." << endl;
  cout << "O preço do caderno é: " << price << " reais" << endl;

  // DECLARANDO MULTIPLAS VARIÁVEIS
  int a = 10;
  float b = 4.0f; // Melhor usar o f no final para indicar que é um float
  int c = 5;
  cout << "A soma de a, b,c é: " << a + b + c << endl;

  // IDENTIFICADORES
  int ageMyBrother = 40;
  int myAge = 43;

  cout << "A minha idade é " << myAge << " e a do meu irmão é " << ageMyBrother
       << endl;

  // CONSTANTES
  const int MAX_AGE = 100;
  cout << "A idade máxima é: " << MAX_AGE << endl;

  // EXEMPLO DA VIDA REAL
  string name_of_profession = "Senior Data Scientist";
  string professional_name = "Eddy Giusepe Chirinos Isidro";
  int professional_age = 43;
  double professional_salary = 100000.00;
  bool professional_is_active = true;
  const char *professional_email = "eddy.giusepe@gmail.com";
  const long professional_number_cpf = 12345678900; // Não usar int porque causa OVERFLOW
  const string professional_nationality = "Brazilian";

  cout << "O nome da minha profissão é ---> " << name_of_profession << endl;
  cout << "Meu nome completo é ---> " << professional_name << endl;
  cout << "Minha idade, atualmente, é ---> " << professional_age << endl;
  cout << "Meu salário, atualmente, é ---> " << professional_salary << endl;
  cout << "Estou ativo, atualmente, ---> " << professional_is_active << endl;
  cout << "Meu e-mail, atualmente, é ---> " << professional_email << endl;
  cout << "Meu número de CPF é ---> " << professional_number_cpf << endl;
  cout << "Minha nacionalidade é ---> " << professional_nationality << endl;

  return 0;
}
