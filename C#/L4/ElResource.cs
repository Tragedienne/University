using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace L4
{
    public enum ElResources
    {
        Portal,
        Site,
        Wikipedia
    }
    class ElResource : Edition
    {
        int year;
        string accsess;
        string domen;
        ElResources resources_type;
        public ElResource() : base()
        {
            year = 2000;
            accsess = "private";
            domen = ".ru";
            resources_type = ElResources.Portal;
        }
        public ElResource(int year, string accsess, string domen, ElResources resources_type, string type, string author, string language) : base(type, author, language)
        {
            this.year = year;
            this.accsess = accsess;
            this.domen = domen;
            this.resources_type = resources_type;
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
                return "\nYear: " + year + "\nAccess: " + accsess + "\nDomen: " + domen + "\nType of resource" + resources_type + base.Info;
            }
        }
    }
}
