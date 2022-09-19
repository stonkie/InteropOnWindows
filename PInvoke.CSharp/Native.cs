using System.Runtime.InteropServices;

namespace PInvoke.CSharp;

public static class Native
{
    [DllImport("PInvoke.Cpp.dll")]
    public static extern int PlusOne(int value);

    [DllImport("PInvoke.Cpp.dll")]
    public static extern IntPtr Append([MarshalAs(UnmanagedType.LPWStr)] string baseString, char letter, int times);

    [DllImport("PInvoke.Cpp.dll")]
    public static extern void Free(IntPtr appendedString);
}