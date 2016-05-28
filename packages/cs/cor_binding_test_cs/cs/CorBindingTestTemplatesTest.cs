using CorCppDll;
using NUnit.Framework;
using System;

namespace CorBindingTest
{
    [TestFixture]
    class CorBindingTestTemplatesTest
    {

        [Test]
        public void TemplateTest()
        {
            {
                var s = new SimpleTemplateInt32();
                s.SetV(123);
                Assert.AreEqual(s.GetV(), 123);
            }

            {
                var s = new SimpleTemplateDouble();
                s.SetV(543.432);
                Assert.AreEqual(s.GetV(), 543.432);
            }

            {
                var s = new SimpleTemplateString();
                s.SetV("string example.");
                Assert.AreEqual(s.GetV(), "string example.");
            }

        }

        [Test]
        public void TemplateOperatorTest()
        {
            {
                var s0 = new SimpleTemplateInt32();
                var s1 = new SimpleTemplateInt32();
                s0.SetV(123);
                s1.SetV(456);
                Assert.AreEqual((s0.Add(s1)).GetV(), 579);
            }

            {
                var s0 = new SimpleTemplateDouble();
                var s1 = new SimpleTemplateDouble();
                s0.SetV(123.45);
                s1.SetV(456.67);
                Assert.IsTrue(Math.Abs((s0.Add(s1)).GetV() - 580.12) < 0.0001);
            }


        }

    }
}

