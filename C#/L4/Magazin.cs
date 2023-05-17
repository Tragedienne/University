namespace L4
{
    public enum Magazins
    {
        Mishutka,
        Neznaika,
        Ymnyasha,
        Kalambur
    }
    class Magazin : Edition
    {
        int year;
        string audience;
        Magazins magazine_type;
        public Magazin() : base()
        {
            year = 2000;
            audience = "children";
            magazine_type = Magazins.Mishutka;
        }
        public Magazin(int year, string audience, Magazins magazine_type, string type, string author, string language) : base(type, author, language)
        {
            this.year = year;
            this.audience = audience;
            this.magazine_type = magazine_type;
        }
        public override string translate
        {
            get
            {
                return answer;
            }
            set
            {
                if (value == "german" ||
                    value == "ger")
                {
                    answer = "need.";
                }
                else
                    answer = "dont need.";
            }
        }
        public override string Info
        {
            get
            {
                return "\nYear: " + year + "\nAudience: " + audience + "\nType of magazine: " + magazine_type + base.Info;
            }
        }
    }
}
