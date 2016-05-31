using CorCppDll;
using NUnit.Framework;

namespace CorEigenTest
{

    [TestFixture]
    class CorEigenVector3Test
    {

        [Test]
        public void ClassTest()
        {
            var v = new Vector3F(1.0f, 2.0f, 3.0f);
            Assert.AreEqual(v.GetX(), 1.0f);
            Assert.AreEqual(v.GetY(), 2.0f);
            Assert.AreEqual(v.GetZ(), 3.0f);
        }
    }

}
