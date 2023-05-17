namespace L4
{
    public enum Books
    {
        Lolita,
        Hamlet,
        Revizor,
        VoinaIMir,
        RomeoIJuliet
    }
    class Book : Edition
    {
        int year;
        int page_count;
        string city;
        Books book_type;
        public Book() : base()
        {
            year = 2000;
            page_count = 0;
            city = "Unknown";
            book_type = Books.Lolita;
        }
        public Book(int year, int page_count, string city, Books book_type, string type, string author, string language) : base(type, author, language)
        {
            this.year = year;
            this.page_count = page_count;
            this.city = city;
            this.book_type = book_type;
        }
        public override string translate
        {
            get
            {
                return answer;
            }
            set
            {
                if (value == "english" ||
                    value == "en")
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
                return "\nYear: " + year + "\nCount of pages: " + page_count + "\nCity: " + city + "\nBook type: " + book_type + base.Info;
            }
        }
    }
}
