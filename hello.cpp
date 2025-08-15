// Senior Data Scientist.: Dr. Eddy Giusepe Chirinos Isidro

// #include é uma diretiva de pré-processamento
// <iostream> é uma biblioteca padrão que fornece funcionalidades de entrada e saída
// iostream = Input/Output Stream (fluxo de entrada/saída)
// Sem esta biblioteca, você não pode usar cout, cin, endl, etc.

// using namespace std;
// * namespace é como um "container" que agrupa nomes relacionados
// * std é o namespace padrão onde ficam as funções da biblioteca padrão do C++
// * Sem esta linha, você teria que escrever std::cout em vez de apenas cout
// * É uma questão de conveniência, mas alguns programadores preferem usar std:: explicitamente

// int main() {
// * int indica que a função retorna um número inteiro
// * main() é a função principal - todo programa C++ DEVE ter uma função main
// * É o ponto de entrada do programa - a execução sempre começa aqui
// * Os parênteses () indicam que não há parâmetros (por enquanto)
// * A chave { marca o início do bloco da função


// cout << "Olá, Mundo!" << endl;
// * cout = Character OUTput (saída de caracteres)
// * << é o operador de inserção (stream insertion operator)
// * "Olá, Mundo!" é uma string literal - texto entre aspas
// * endl significa end line - quebra de linha e força o buffer a ser esvaziado
// * ; marca o fim da instrução - obrigatório em C++

// return 0;
// * return indica que a função terminou com sucesso
// * 0 é o código de saída padrão (0 = sucesso, 1 = erro)
// * Não é obrigatório, mas é uma boa prática para indicar o sucesso da execução


// RUN:
// g++ -o hello hello.cpp && ./hello
#include <iostream>
using namespace std;

int main() {
    cout << "Olá, Mundo!" << endl;
    cout << "Sou o Dr. Eddy Giusepe e juntos vamos aprender C++!" << endl;
    return 0;
} // A chave } marca o fim do bloco da função main
