#include <stdio.h>
#include <string.h>
#include "ZKX.h"

ZKX::ZKX() {
  usluga[0] = 0;
  org[0] = 0;
  cena = 0;
}

ZKX::ZKX(char *u, char *o, int c) {
  strcpy(usluga, u);
  strcpy(org, o);
  cena=c;
}

ZKX::ZKX(ZKX &zkx){
  strcpy(usluga,zkx.usluga);
  strcpy(org,zkx.org);
  cena=zkx.cena;
}

ZKX::ZKX(char *u) {
  strcpy(usluga, u);
  org[0] = 0;
  cena = 0;
}

void ZKX::set_usluga(char *u) {
  strcpy(usluga, u);
}

void ZKX::set_org(char *o) {
  strcpy(org, o);
}

void ZKX::set_cena(int c) {
  cena = c;
}

char *ZKX::get_usluga() {
  return usluga;
}

char *ZKX::get_org() {
  return org;
}

int ZKX::get_cena() {
  return cena;
}

void ZKX::vvod() {
  printf("Usluga: ");
  gets(usluga);
  printf("Organization: ");
  gets(org);
  printf("Cena: ");
  scanf("%d", &cena);
}

void ZKX::vyvod() {
  printf("Usluga: ");
  puts(usluga);
  printf("Organization: ");
  puts(org);
  printf("Cena: ");
  printf("%d\n",cena);
}




