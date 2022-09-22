using NativeCom.Cpp.sxs.interop;

try
{
    var maths = new MathsClass();

    int input = 4;
    maths.PlusOne(input, out int output);

    Console.WriteLine($"Can you even math? {input} + 1 = {output}");
}
catch (Exception ex)
{
    Console.WriteLine($"Exception {ex}");
}