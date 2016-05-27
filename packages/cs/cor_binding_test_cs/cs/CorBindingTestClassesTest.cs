using CorCppDll;
using NUnit.Framework;

namespace CorBindingTest
{

    [TestFixture]
    class CorBindingTestClassesTest
    {

        [Test]
        public void ClassTest()
        {
            var testObjSp = CorBindingTestClasses.Create();
            var testObj = CorBindingTestClasses.FromSp(testObjSp);

            testObj.SetA(4);
            Assert.AreEqual(testObj.GetA(), 4);
            testObj.SetB(7.0f);
            Assert.AreEqual(testObj.GetB(), 7.0f);
            testObj.SetC("some string");
            Assert.AreEqual(testObj.GetC(), "some string");

            var someStruct = new SomeStruct();
            someStruct.a = 9;
            someStruct.b = 11.0f;
            someStruct.c = "string 3";
            someStruct.d = testObjSp;
            someStruct.e = CorBindingTestClasses.SpToWp(testObjSp);

            Assert.AreEqual(someStruct.a, 9);
            Assert.AreEqual(someStruct.b, 11.0f);
            Assert.AreEqual(someStruct.c, "string 3");
            Assert.IsTrue(
                CorBindingTestClasses.FromSp(someStruct.d).Equal(
                CorBindingTestClasses.FromSp(testObjSp))
            );
            Assert.IsTrue(
                CorBindingTestClasses.FromSp(CorBindingTestClasses.LockWp(someStruct.e)).Equal(
                CorBindingTestClasses.FromSp(testObjSp))
            );

            testObj.SetSomeStruct(someStruct);
            var gottenSomeStruct = testObj.GetSomeStruct();
            Assert.AreEqual(someStruct.a, gottenSomeStruct.a);
        }

    }
}

