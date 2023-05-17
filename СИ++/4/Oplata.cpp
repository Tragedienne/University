#include <stdio.h>
#include <string.h>
#include "Oplata.h"

Oplata::Oplata(): ZKX() {
  name[0] = 0;
  suma = 0;
}

Oplata::Oplata(char *u, char *o, int c, char *n_name, int n_suma)
  : ZKX(u, o, c), suma(n_suma) {
  strcpy(name, n_name);
}

void Oplata::set_name(char *n_name) {
  strcpy(name, n_name);
}

void Oplata::set_suma(int n_suma) {
  suma=n_suma;
}

char *Oplata::get_name() {
  return name;
}

int Oplata::get_suma() {
  return suma;
}

void Oplata::vvod() {
  ZKX::vvod();
  printf("Name of platelschik:\n");
  flushall();
  gets(name);
  printf("Obschaya stoimost:\n");
  scanf("%d", &suma);
}

void Oplata::vyvod() {
  ZKX::vyvod();
  printf("Name of platelschik: %s\n", name);
  printf("Obschaya stoimost: %d\n",suma);
}

Oplata::Oplata(Oplata *n,ZKX &b){
  strcpy(name,n->name);
  suma=n->suma;
 // strcpy(set_usluga(),b.get_usluga());
 // strcpy(set_org(),b.get_org());
  b.set_usluga(get_usluga());
  b.set_org(get_org());
  b.set_cena(get_cena());
}



