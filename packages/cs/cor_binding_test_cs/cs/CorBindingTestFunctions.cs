using CorCppDll;
using NUnit.Framework;

namespace CorBindingTest
{
    [TestFixture]
    class CorBindingTestFunctions
    {

        [Test]
        public void AddTest()
        {
            Assert.AreEqual(CorBindingTestGlobal.AddInt(1, 3), 4);
            Assert.AreEqual(CorBindingTestGlobal.AddDouble(1.0, 3.0), 4.0);
            Assert.AreEqual(CorBindingTestGlobal.AddString("aa", "bc"), "aabc");
            Assert.AreEqual(CorBindingTestGlobal.Overloaded(2), 3);
            Assert.AreEqual(CorBindingTestGlobal.Overloaded("test"), "test1");
        }

    }
}

