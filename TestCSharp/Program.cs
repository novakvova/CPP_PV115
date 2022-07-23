using System.Text;

namespace TestCSharp
{
    class Program
    {
        public static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.Unicode;
            Console.InputEncoding = Encoding.Unicode;
            //char, string, bool, int, float, double, decimal
            //if() { }
            int n;
            Console.WriteLine("Вкажіть розмір масиву:");
            n = int.Parse(Console.ReadLine());
            int []mas=new int[n];
            Random random = new Random();
            for (int i = 0; i < n; i++)
            {
                mas[i] = random.Next(-20, 20);
            }
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine($"a[{i}]={mas[i]}");
            }
        }
    }
}

