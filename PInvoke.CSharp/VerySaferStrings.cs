using System.Runtime.InteropServices;

namespace PInvoke.CSharp;

internal class VerySaferStrings
{
    public static void Do()
    {
        IntPtr result = Native.ConcatenateInRust("Double");

        string? appendedString = Marshal.PtrToStringAnsi(result);

        Native.FreeInRust(result);

        Console.WriteLine($"From Rusty : {appendedString}");
        Console.WriteLine();
    }
}