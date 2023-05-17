namespace L5
{
    public class Cabinet : InOut
    {
        private int cabinetNumber;

        public Cabinet()
        {
            cabinetNumber = 0;
        }

        public Cabinet(int cabinetNumber)
        {
            this.cabinetNumber = cabinetNumber;
        }

        public int getCabinetNumberNumber()
        {
            return cabinetNumber;
        }

        public void setCabinetNumber(int classNumber)
        {
            this.cabinetNumber = classNumber;
        }

        public void fill()
        {
            Console.WriteLine("\nCabinet\ncabinetNumber(int):\n");
            while (true)
            {
                try
                {
                    cabinetNumber = int.Parse(Console.ReadLine());
                    break;
                }
                catch (Exception e)
                {
                    Console.WriteLine(e);
                }
            }
        }

        public void toString()
        {
            Console.Write("\nCabinet:\n" +
                    "Cabinet_Number = " + cabinetNumber + "\n");
        }
    }
}
