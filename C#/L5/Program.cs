namespace L5
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            while (true)
            {
                Console.WriteLine("\n1 - Выход\n2 - Создание объекта\n");
                var str = Console.ReadLine();
                switch (str)
                {
                    case "1":
                        return;
                    case "2":
                        Console.WriteLine("\n1 - Вернуться назад\n2 - Cabinet\n3 - Class\n4 - Lesson\n5 - Olimpiad" +
                            "\n6 - Pupil\n7 - Ratings\n8 - Subject\n9 - Teacher\n10 - Timetable\n11 - Title");
                        var flag = false;
                        while (flag == false)
                        {
                            str = Console.ReadLine();
                            switch (str)
                            {
                                case "1":
                                    flag = true;
                                    break;
                                case "2":
                                    var obj = new Cabinet();
                                    Console.WriteLine("1 - Заполнить объект с клавиатуры))");
                                    str = Console.ReadLine();
                                    if (str == "1")
                                        obj.fill();
                                    Console.WriteLine("1 - Вывести объект на экран)))");
                                    str = Console.ReadLine();
                                    if (str == "1")
                                        obj.toString();
                                    flag = true;
                                    break;
                                case "3":
                                    var obj1 = new Class();
                                    Console.WriteLine("1 - Заполнить объект с клавиатуры))");
                                    str = Console.ReadLine();
                                    if (str == "1")
                                        obj1.fill();
                                    Console.WriteLine("1 - Вывести объект на экран)))");
                                    str = Console.ReadLine();
                                    if (str == "1")
                                        obj1.toString();
                                    flag = true;
                                    break;
                                case "4":
                                    var obj2 = new Lesson();
                                    Console.WriteLine("1 - Заполнить объект с клавиатуры?))");
                                    str = Console.ReadLine();
                                    if (str == "1")
                                        obj2.fill();
                                    Console.WriteLine("1 - Вывести объект на экран)))");
                                    str = Console.ReadLine();
                                    if (str == "1")
                                        obj2.toString();
                                    flag = true;
                                    break;
                                case "5":
                                    var obj3 = new Olympiad();
                                    Console.WriteLine("1 - Заполнить объект с клавиатуры))");
                                    str = Console.ReadLine();
                                    if (str == "1")
                                        obj3.fill();
                                    Console.WriteLine("1 - Вывести объект на экран?)))");
                                    str = Console.ReadLine();
                                    if (str == "1")
                                        obj3.toString();
                                    flag = true;
                                    break;
                                case "6":
                                    var obj4 = new Pupil();
                                    Console.WriteLine("1 - Заполнить объект с клавиатуры))");
                                    str = Console.ReadLine();
                                    if (str == "1")
                                        obj4.fill();
                                    Console.WriteLine("1 - Вывести объект на экран)))");
                                    str = Console.ReadLine();
                                    if (str == "1")
                                        obj4.toString();
                                    flag = true;
                                    break;
                                case "7":
                                    var obj5 = new Ratings();
                                    Console.WriteLine("1 - Заполнить объект с клавиатуры))");
                                    str = Console.ReadLine();
                                    if (str == "1")
                                        obj5.fill();
                                    Console.WriteLine("1 - Вывести объект на экран)))");
                                    str = Console.ReadLine();
                                    if (str == "1")
                                        obj5.toString();
                                    flag = true;
                                    break;
                                case "8":
                                    var obj6 = new Subject();
                                    Console.WriteLine("1 - Заполнить объект с клавиатуры))");
                                    str = Console.ReadLine();
                                    if (str == "1")
                                        obj6.fill();
                                    Console.WriteLine("1 - Вывести объект на экран)))");
                                    str = Console.ReadLine();
                                    if (str == "1")
                                        obj6.toString();
                                    flag = true;
                                    break;
                                case "9":
                                    var obj7 = new Teacher();
                                    Console.WriteLine("1 - Заполнить объект с клавиатуры))");
                                    str = Console.ReadLine();
                                    if (str == "1")
                                        obj7.fill();
                                    Console.WriteLine("1 - Вывести объект на экран)))");
                                    str = Console.ReadLine();
                                    if (str == "1")
                                        obj7.toString();
                                    flag = true;
                                    break;
                                case "10":
                                    var obj8 = new Timetable();
                                    Console.WriteLine("1 - Заполнить объект с клавиатуры))");
                                    str = Console.ReadLine();
                                    if (str == "1")
                                        obj8.fill();
                                    Console.WriteLine("1 - Вывести объект на экран)))");
                                    str = Console.ReadLine();
                                    if (str == "1")
                                        obj8.toString();
                                    flag = true;
                                    break;
                                case "11":
                                    var obj9 = new Title();
                                    Console.WriteLine("1 - Заполнить объект с клавиатуры))");
                                    str = Console.ReadLine();
                                    if (str == "1")
                                        obj9.fill();
                                    Console.WriteLine("1 - Вывести объект на экран)))");
                                    str = Console.ReadLine();
                                    if (str == "1")
                                        obj9.toString();
                                    flag = true;
                                    break;
                            }
                        }
                        break;
                    default:
                        Console.WriteLine("Ошибка. Попробуйте еще раз. Для этого нажмите любую клавишу))))");
                        Console.ReadKey();
                        break;
                }
            }
        }
    }
}
