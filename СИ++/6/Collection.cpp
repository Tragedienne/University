#include <stdio.h>
#include <string.h>
#include <windows.h>
#include "Collection.h"


Collection::Collection(){
    size=0;
}

Collection::~Collection(){
  for(int i=0;i<size;i++)
    delete pmas[i];   
}

Collection::Collection(Collection &collect) : masK(collect.masK) {
  for (int i = 0; i < masK; ++i) {
    pmas[i] = new City((collect.pmas[i]));
  }
}

void Collection::operator+=(ZKX *pzkx) {
  add_item(pex);
}

//Друг класса
void operator+=(Collection &coll, City &ex) {
  City *pex = new City(ex);
  coll.add_item(pex);
}

void Collection::operator-=(int j) {
  remove_item(j);
}

//Использовать для поиска operator[](int ).
void Collection::operator-=(char *str) {
  for (int i = 0; i < masK; ++i)
    if (strcmp(str, (*this)[i]->get_name()) == 0) {
      remove_item(i);
      return;
    }
  printf("\nОшибка. Объект с таким именем отсутствует.\n");
}

City *Collection::operator[](int j) {
  return get_pointer(j);
}

City *Collection::operator[](char *str) {
  for (int i = 0; i < masK; ++i)
    if (strcmp(str, get_pointer(i)->get_name()) == 0)
      return get_pointer(i);
  printf("\nОшибка. Объект с таким именем отсутствует.\n");
  return NULL;
}

void Collection::add(ZKX *zkx){
  pmas[size] = zkx;
  size++;
}
/*DOP
int kols(char S, char *str){
  int kol=0;
  for(int i=0;str[i]!=0;i++)
    if (str[i]==S)
      kol++;
  return kol;
}
int Collection::countS(char S){
  int r=0;
  for(int i=0; i<size; i++)
    r += kols(S, pmas[i]->get_usluga())+kols(S,pmas[i]->get_org());
  return r;
}
*/
void Collection::del(int j){
  delete pmas[j];
  for(int i = j; i < size-1; i++)
    pmas[i] = pmas[i+1];
  size--;
}

int Collection::kol(){
  return size;
}

ZKX *Collection::getobj(int n){
    return pmas[n];
}

void Collection::swap(int i1, int i2){
  ZKX *pzkx = pmas[i1];
  pmas[i1] = pmas[i2];
  pmas[i2] = pzkx;
}

void Collection::sort(){
  for(int i = 0; i < size; i++)
    for(int k = i+1; k < size; k++)
      if(strcmp(pmas[i]->get_usluga(),pmas[k]->get_usluga()) > 0)
        swap(i, k);
}

void Collection::print(){
  for(int i = 0; i < size; i++){
    pmas[i]->vyvod();
    printf("\n");
  }
}
  
  
  
  
  
  
