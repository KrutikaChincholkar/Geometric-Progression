
using System;

class Program
{
    static void Main()
    {
        int a, r, n;

        Console.Write("Enter first term (a): ");
        a = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter common ratio (r): ");
        r = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter number of terms (n): ");
        n = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Geometric Progression:");

        for (int i = 0; i < n; i++)
        {
            double term = a * Math.Pow(r, i);
            Console.Write($"{term:F0} ");
        }

        Console.WriteLine();
    }
}
