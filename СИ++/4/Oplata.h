#include "ZKX.h"

class Oplata:public ZKX{
  char name[80];
  int suma;
  public:
    Oplata();
    Oplata(char *, char *, int, char *, int);
    Oplata(Oplata *n,ZKX &b);

    void set_name(char *name);
    void set_suma(int suma);

    char *get_name();
    int get_suma();

    void vvod();
    void vyvod();
};