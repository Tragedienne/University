namespace L4
{
    internal class Edition
    {
        string type;
        string author;
        public string language;
        public string answer;
        public virtual string translate
        {
            get
            {
                return answer;
            }
            set
            {
                if (value == "russian" ||
                    value == "rus" ||
                    value == "ru")
                {
                    answer = "dont need.";
                }
                else
                    answer = "need.";
            }
        }
        public Edition()
        {
            type = "default";
            author = "unknown";
            language = "russian";
            translate = language;
        }
        public Edition(string type, string author, string language)
        {
            this.type = type;
            this.author = author;
            this.language = language;
            translate = language;
        }
        public virtual string Info
        {
            get
            {
                return "\nType: " + type + "\nAuthor: " + author + "\nLanguage: " + language + "\nTranslation required: " + answer;
            }
        }
    }
}
