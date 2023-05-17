using DLL;
namespace Lab6
{
    class Program
    {
        static void Main()
        {
            Console.WriteLine("Enter the name of the first file with '.txt': ");
            var input1 = Console.ReadLine();
            while (input1.Length == 0)
                input1 = Console.ReadLine();
            Console.WriteLine("\nEnter the name of the second file '.txt': ");
            var input2 = Console.ReadLine();
            while (input2.Length == 0)
                input2 = Console.ReadLine();
            Console.WriteLine("\nEnter the name of the output file '.txt': ");
            var output1 = Console.ReadLine();
            while (output1.Length == 0)
                output1 = Console.ReadLine();
            if (Matrica.function(input1, input2, output1))
                Console.WriteLine("\nThere is incorrect data in one or more of the specified files.");
            else
                Console.WriteLine("\nCompleted successfully))");
        }
    }
}
