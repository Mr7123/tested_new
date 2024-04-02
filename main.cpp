using System;

namespace _02._04._24
{
    class Program
    {
        static void Main(string[] args)
        {
            int _A = Convert.ToInt32(Console.ReadLine());
            int _B = Convert.ToInt32(Console.ReadLine());
            int _Summa = _A + _B;
            Console.WriteLine("Сумма введённых чисел равна: ");
            Console.Write(_Summa);
        }
    }
}
