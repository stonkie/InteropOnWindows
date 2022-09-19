using System.Runtime.InteropServices;

namespace PInvoke.CSharp;

internal class Strings
{
    public static void Do()
    {
        IntPtr result = Native.Append("Joyeux Noël et bonne ann", 'é', 80);

        string? appendedString = Marshal.PtrToStringAuto(result);

        Native.Free(result);

        Console.WriteLine($"Managedly : {appendedString}");
        Console.WriteLine();
    }
}