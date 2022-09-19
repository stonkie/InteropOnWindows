namespace PInvoke.CSharp;

public static class Maths
{
    public static void Do()
    {
        var plusOne = Native.PlusOne(18);

        Console.WriteLine($"18 PlusOned : {plusOne}");
        Console.WriteLine();
    }
}