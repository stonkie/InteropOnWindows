using System.Runtime.InteropServices;

namespace ComVisible.CSharp
{
    [ComVisible(true)]
    [Guid("fe7b93df-048c-40bb-ba50-e9bd0e3ea1ba")]
    [InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
    public interface IVeryClassy
    {
        void PlusOne(int input, ref int output);
    }

    [ComVisible(true)]
    [Guid("0a2784c8-3eb1-4566-9f7f-9b4fbe2800bf")]
    public class VeryClassy : IVeryClassy
    {
        public VeryClassy()
        {

        }

        public void PlusOne(int input, ref int output)
        {
            output = input + 1;
        }
    }

}