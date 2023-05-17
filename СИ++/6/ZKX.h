#ifndef H_ZKX
#define H_ZKX
class ZKX {
  private:
    char usluga[80];
    char org[80];
    int cena;
  public:
    ZKX();
    ZKX(char *u, char *o, int c);
    ZKX(ZKX &);
    ZKX(char *u);
    //ZKX(ZKX *u, ZKX &o);

    void operator-=(char);
        
    void set_usluga(char *u);
    void set_org(char *o);
    void set_cena(int a);

    char *get_usluga();
    char *get_org();
    int get_cena();
  	
    void vvod();
    void vyvod();
};
#endif
