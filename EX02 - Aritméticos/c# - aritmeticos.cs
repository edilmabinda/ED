using System;

class Program {
    static void Main() {
        // Solicitando dois números ao usuário
        Console.Write("Digite o primeiro número: ");
        int num1 = Convert.ToInt32(Console.ReadLine());
        Console.Write("Digite o segundo número: ");
        int num2 = Convert.ToInt32(Console.ReadLine());
        
        // Realizando operações aritméticas
        Console.WriteLine("Soma: " + (num1 + num2));
        Console.WriteLine("Subtração: " + (num1 - num2));
        Console.WriteLine("Multiplicação: " + (num1 * num2));
        
        if (num2 != 0) {
            Console.WriteLine("Divisão: " + (num1 / (float)num2));
        } else {
            Console.WriteLine("Erro: Divisão por zero!");
        }
    }
}
