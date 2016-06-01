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
            Logger.GetInstance().AddPrintCharPtrFunc((LogType.Enum num, string str) => {
                Assert.AreEqual(num, LogType.Enum.Debug);
                Assert.AreEqual(str, "test");
            });
            Logger.Debug("test");
        }
    }

}
