#include <iostream>

int main() {
  // Exibir uma mensagem de saudação
  std::cout << "Olá, mundo!" << std::endl;

  // Declarar e inicializar variáveis
  int numeroInteiro = 10;
  double numeroFlutuante = 3.14;
  char caractere = 'a';

  // Exibir os valores das variáveis
  std::cout << "Número inteiro: " << numeroInteiro << std::endl;
  std::cout << "Número flutuante: " << numeroFlutuante << std::endl;
  std::cout << "Caractere: " << caractere << std::endl;

  // Obter um número inteiro do usuário
  int numeroInserido;
  std::cout << "Digite um número inteiro: ";
  std::cin >> numeroInserido;

  // Exibir o número inserido pelo usuário
  std::cout << "Você digitou: " << numeroInserido << std::endl;

  // Operações matemáticas básicas
  int soma = numeroInteiro + 5;
  int subtracao = numeroInteiro - 3;
  int multiplicacao = numeroInteiro * 2;
  int divisao = numeroInteiro / 4;

  std::cout << "Soma: " << soma << std::endl;
  std::cout << "Subtração: " << subtracao << std::endl;
  std::cout << "Multiplicação: " << multiplicacao << std::endl;
  std::cout << "Divisão: " << divisao << std::endl;

  // Estruturas de controle de fluxo
  if (numeroInteiro > 0) {
    std::cout << numeroInteiro << " é um número positivo" << std::endl;
  } else if (numeroInteiro == 0) {
    std::cout << numeroInteiro << " é zero" << std::endl;
  } else {
    std::cout << numeroInteiro << " é um número negativo" << std::endl;
  }

  // Laços de repetição
  for (int i = 0; i < 5; i++) {
    std::cout << "Valor do loop: " << i << std::endl;
  }

  int j = 0;
  while (j < 5) {
    std::cout << "Valor do while: " << j << std::endl;
    j++;
  }

  // Funções
  int resultado = somar(numeroInteiro, 10);
  std::cout << "Resultado da soma: " << resultado << std::endl;

  return 0;
}

// Função para somar dois números inteiros
int somar(int numero1, int numero2) {
  return numero1 + numero2;
}

