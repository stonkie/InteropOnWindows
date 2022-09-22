// Create the managed C++ object

void DoSomeStrings()
{
// Create the managed C++ object
    using StringsWrapper strings = new();

// Call into the C++ with some strings in and out
    var appended = strings.Append("Manage", 'd', 5);

    Console.WriteLine($"Managedly {appended}");
}

void DoSomeMaths()
{
    using MathsWrapper maths = new();

// Call into the C++
    int answer = maths.PlusOne(41);
    string? question = null;

    Console.WriteLine($"{question} = {answer}");
    Console.WriteLine();
}





DoSomeMaths();

DoSomeStrings();