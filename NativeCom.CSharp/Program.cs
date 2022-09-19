


using System.Reflection;
using NativeCom.Cpp.sxs.interop;


Console.WriteLine("Hello, World!");

try
{
    var maths = new MathsClass();

    maths.PlusOne(4, out int output);

    Console.WriteLine(output);

    // var type = Type.GetTypeFromCLSID(Guid.Parse("0c72d0b6-61fa-419a-bf83-6164a296cd71"));

    // var instance = Activator.CreateInstance(type);

    Console.WriteLine($"{maths}");

}
catch (Exception ex)
{
    Console.WriteLine($"Exception {ex}");
}