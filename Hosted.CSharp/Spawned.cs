namespace Hosted.CSharp
{
    public static class Spawned
    {
        public static int Spawn(IntPtr arg, int argLength)
        {
            Console.WriteLine("I just spawned once!");

            return 0;
        }
    }
}