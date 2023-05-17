#ifndef H_COLLECTION
#define H_COLLECTION
#include "ZKX.h"

class Collection{
  private:
    ZKX *pmas[10];
    int size;
  public:
    Collection();
    ~Collection();

    void operator+=(ZKX *);    
    friend void operator+=(Collection &, ZKX &);
    int operator-(Collection &);
    void operator-=(char *);
    ZKX *operator[](int);
    ZKX *operator[](char *);

    void add(ZKX *);
    void del(int);
    int kol();
    ZKX *getobj(int);
    void swap(int, int);

    int countS(char S);

    void sort();
    void print();
};
#endif
