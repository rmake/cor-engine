using CorCppDll;
using NUnit.Framework;

namespace CorBindingTest
{

    class CorBindingTestClassesCallback
    {
        public int count = 0;
        public void Callback()
        {
            count++;
        }

        public void CallbackDec()
        {
            count--;
        }
    }

    [TestFixture]
    class CorBindingTestClassesTest
    {

        [Test]
        public void ClassTest()
        {
            var testObjSp = CorBindingTestClasses.CreateSp(new CorBindingTestClasses());
            var testObj = CorBindingTestClasses.FromSp(testObjSp);

            Assert.AreEqual(CorBindingTestClasses.StaticCall(7), 10);

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

            var callback = new Callback();
            var callbackTest = new CorBindingTestClassesCallback();

            callback.SetStdFunc(callbackTest.CallbackDec);
            callback.CallStdFunc();
            Assert.AreEqual(callbackTest.count, -1);

            callback.SetFunc(callbackTest.Callback);
            callback.CallFunc();
            Assert.AreEqual(callbackTest.count, 0);

            callback.CallbackString("test", (string str) => {
                System.Console.WriteLine("str " + str);
            });


        }

        [Test]
        public void InheritanceTest()
        {
            var parent = new ParentClass();
            parent.SetNum(100);
            Assert.AreEqual(parent.GetText(), "parent_class 100");
            Assert.AreEqual(parent.GetNum(), 100);

            var child = new ChildClass();
            child.SetNum(500);
            Assert.AreEqual(child.GetText(), "child_class 500");
            Assert.AreEqual(child.GetNum(), 500);

            var childAsParent = child as ParentClass;
            Assert.AreEqual(childAsParent.GetText(), "child_class 500");
            Assert.AreEqual(childAsParent.GetNum(), 500);
        }

        [Test]
        public void EnumTest()
        {
            var enumClass = new EnumClass();

            Assert.AreEqual(EnumClass.A, 0);
            Assert.AreEqual(EnumClass.B, 1);

            enumClass.SetA(EnumClass.A);
            Assert.AreEqual(enumClass.GetA(), EnumClass.A);

            enumClass.SetVal(EnumClass.Val.A);
            Assert.AreEqual(enumClass.GetVal(), EnumClass.Val.A);

        }

        [Test]
        public void OverloadTest()
        {
            var overloadClass = new OverloadClass();

            Assert.AreEqual(overloadClass.OverloadedCall(9), 16);
            Assert.AreEqual(overloadClass.OverloadedCall("string input"), "overloaded string input");

        }

    }
}

