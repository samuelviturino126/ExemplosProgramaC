//utiilzando ponteiro em C
#include <iostream>
int main(){
int a=2, y; //a e y são inteiros
int *p; //*p é um ponteiro para inteiro
p = &a; //o ponteiro recebe o endereço de a
y = *p; //y recebe o conteúdo que está naquele endereço, nesse caso "2"
std::cout << "Conteudo que esta no endereco de a: " << *p;
std::cout << "\n";
std::cout << "Endereco armazenado no ponteiro *p: " << p;
std::cout << "\nValor de y: " << y; 
*p = 5; //O conteúdo do ponteiro recebe o valor 5;
std::cout << "\n";
std::cout << "Novo conteudo armazenado no endereco %d: " << *p;
  std::cout << "\n";
  return 0;
}