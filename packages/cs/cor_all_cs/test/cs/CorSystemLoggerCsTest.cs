using CorCppDll;
using NUnit.Framework;

namespace CorSystemTest
{

    [TestFixture]
    class CorSystemLoggerTest
    {

        [Test]
        public void ClassTest()
        {
            Logger.GetInstance().ClearPrintFunc();
            Logger.GetInstance().AddPrintFunc((LogType.Enum num, string str) => {
                System.Console.WriteLine("num " + num);
                System.Console.WriteLine(str);
            });
            Logger.Debug("test");
        }
    }

}
