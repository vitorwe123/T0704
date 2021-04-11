#include <stdio.h>
#include <stdlib.h>

int main() {

  // Partipantes da Equipe
  float p1, p2, p3, p4, p5, p6;

  // Maiores notas
  float a, b, c, d;
  a = 0;
  b = 0;
  c = 0;
  d = 0;


  // Coleta de Dados
  printf("Digite, respectivamente, a nota de cada integrante da equipe:\n");

  printf("Atleta 1: ");
  scanf(" %f", &p1);
  printf("Atleta 2: ");
  scanf(" %f", &p2);
  printf("Atleta 3: ");
  scanf(" %f", &p3);
  printf("Atleta 4: ");
  scanf(" %f", &p4);
  printf("Atleta 5: ");
  scanf(" %f", &p5);
  printf("Atleta 6: ");
  scanf(" %f", &p6);

  // Trabalho da Máquina
  if (p1 > a) { a = p1; }
  if (p2 > a) { a = p2; }
  if (p3 > a) { a = p3; }
  if (p4 > a) { a = p4; }
  if (p5 > a) { a = p5; }
  if (p6 > a) { a = p6; }

  if (p1 > b && p1 < a) { b = p1; }
  if (p2 > b && p2 < a) { b = p2; }
  if (p3 > b && p3 < a) { b = p3; }
  if (p4 > b && p4 < a) { b = p4; }
  if (p5 > b && p5 < a) { b = p5; }
  if (p6 > b && p6 < a) { b = p6; }

  if (p1 > c && p1 < b) { c = p1; }
  if (p2 > c && p2 < b) { c = p2; }
  if (p3 > c && p3 < b) { c = p3; }
  if (p4 > c && p4 < b) { c = p4; }
  if (p5 > c && p5 < b) { c = p5; }
  if (p6 > c && p6 < b) { c = p6; }

  if (p1 > d && p1 < c) { d = p1; }
  if (p2 > d && p2 < c) { d = p2; }
  if (p3 > d && p3 < c) { d = p3; }
  if (p4 > d && p4 < c) { d = p4; }
  if (p5 > d && p5 < c) { d = p5; }
  if (p6 > d && p6 < c) { d = p6; }

  float m = (a + b + c + d)/4;

  printf("\nMaiores notas: %.2f, %.2f, %.2f, %.2f", a, b, c, d);
  printf("\nMedia da equipe: %.2f", m);

  return 0;
}

