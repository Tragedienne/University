class ZKX {
  private:
    char usluga[80];
    char org[80];
    int cena;
  public:
  	void set_usluga(char usluga[]);
  	char *get_usluga();
  	
  	void set_org(char org[]);
  	char *get_org();
  	
  	void set_cena(int cena);
  	int get_cena();
  	
  	void vvod();
        void vyvod();
};
