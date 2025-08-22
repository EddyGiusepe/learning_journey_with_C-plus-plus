// Senior Data Scientist: Dr. Eddy Giusepe Chirinos Isidro

/*
Este arquivo é um módulo reutilizável que define 
constantes para cores.

ARQUIVO DE CONSTANTES - MÓDULO REUTILIZÁVEL

Para usar o arquivo de constantes, basta incluir o arquivo no seu código:
#include "constants.h"
*/
#ifndef CONSTANTS_H // IF NOT DEFINED CONSTANTS_H ---> #ifndef NOME_DO_ARQUIVO_H
#define CONSTANTS_H // Define o nome do arquivo CONSTANTS_H

#include <string>
using namespace std;

// CONSTANTES DE CORES ANSI
const string RED = "\033[31m";
const string GREEN = "\033[32m";
const string BLUE = "\033[34m";
const string YELLOW = "\033[33m";
const string MAGENTA = "\033[35m";
const string CYAN = "\033[36m";
const string WHITE = "\033[37m";
const string RESET = "\033[0m";

// CONSTANTES MATEMÁTICAS
const double PI = 3.14159;
const int MAX_VALUE = 1000;

#endif // CONSTANTS_H
