



using MathsWrapper maths = new();

string? question = null;
int answer = maths.PlusOne(41);

Console.WriteLine($"{question} = {answer}");
Console.WriteLine();


using StringsWrapper strings = new();

var appended = strings.Append("Manage", 'd', 5);

Console.WriteLine($"Managedly {appended}");