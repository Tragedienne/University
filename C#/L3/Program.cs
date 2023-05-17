namespace L3
{
    internal class Program
    {
        public static void Main(string[] args)
        {
#if !DEBUG
            TextReader save_in = Console.In;
            TextWriter save_out = Console.Out;
            var reader = new StreamReader("in.txt");
            var writer = new StreamWriter("out.txt");
            Console.SetIn(reader);
            Console.SetOut(writer);

            Cylinder obj = new Cylinder();
            obj.Info();
            obj.GetV();
            obj.GetS();

            double r, h;

            try
            {
                var str_mas = Console.ReadLine().Split(' ');
                r = double.Parse(str_mas[0]);
                h = double.Parse(str_mas[1]);
            }
            catch(Exception)
            {
                Console.WriteLine("Incorrect value. Make random.");
                r = new Random().NextDouble();
                h = new Random().NextDouble();
            }

            Cylinder obj1 = new Cylinder(r, h);
            obj1.Info();
            obj1.GetV();
            obj1.GetS();

            Console.WriteLine("Объем статическим методом: " + Cylinder.GetV(r, h));
            Console.WriteLine("Площадь статическим методом: " + Cylinder.GetS(r, h));

            reader.Close();
            writer.Close();
#else
            Cylinder obj = new Cylinder();
            obj.Info();
            obj.GetV();
            obj.GetS();
            
            double r, h;

            while(true)
            {
                try
                {
                    Console.WriteLine("Enter R and H in one line:");
                    var str_mas = Console.ReadLine().Split(' ');
                    r = double.Parse(str_mas[0]);
                    h = double.Parse(str_mas[1]);
                    break;
                }
                catch (Exception)
                {
                    Console.WriteLine("Incorrect value.");
                }
            }
            
            Cylinder obj1 = new Cylinder(r, h);
            obj1.Info();
            obj1.GetV();
            obj1.GetS();

            Console.WriteLine("Объем статическим методом: " + Cylinder.GetV(r, h));
            Console.WriteLine("Площадь статическим методом: " + Cylinder.GetS(r, h));

            Console.ReadKey();
#endif
        }
    }
}
