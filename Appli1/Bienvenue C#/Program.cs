using System;

class Program
{
    static void Main(string[] args)
    {
        // Demande à l'utilisateur d'entrer son nom
        Console.Write("Entrez votre nom : ");
        string nom = Console.ReadLine();

        // Affiche un message de bienvenue
        Console.WriteLine($"Bienvenue, {nom} !");
    }
}
