#include <stdio.h>
#include <string.h>
#include "ZKX.h"

void ZKX::set_usluga(char n_usluga[]){
  strcpy(usluga,n_usluga);
}

char *ZKX::get_usluga(){
  return usluga;
}

void ZKX::set_org(char n_org[]){
  strcpy(org,n_org);  
}

char *ZKX::get_org(){
  return org;
}

void ZKX::set_cena(int n_cena){
  cena=n_cena;
}

int ZKX::get_cena(){
  return cena;
}

void ZKX::vvod(){
  printf("Name of usluga:\n");
  gets(usluga);
  printf("Type organization:\n");
  gets(org);
  printf("Stoimost:\n");
  scanf("%d", &cena);
}

void ZKX::vyvod() {
  printf("Usluga:\n");
  puts(usluga);
  printf("Organization:\n");
  puts(org);
  printf("Stoimost:\n");
  printf("%d\n", cena);
}





