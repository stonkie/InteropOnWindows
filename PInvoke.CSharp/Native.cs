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

    [DllImport("../../../pinvoke_rust/target/debug/pinvoke_rust.dll", EntryPoint = "concatenate")]
    public static extern IntPtr ConcatenateInRust([MarshalAs(UnmanagedType.LPStr)] string baseString);

    [DllImport("../../../pinvoke_rust/target/debug/pinvoke_rust.dll", EntryPoint = "release")]
    public static extern void FreeInRust(IntPtr stringToRelease);
}