using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

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