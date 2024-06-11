#include "CppUnitTest.h"
#include "../FigurySymetryczne/figurySymetryczne.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FigurySymetryczneTests
{
	TEST_CLASS(FigurySymetryczneTests)
	{
	public:
		
		TEST_METHOD(ProstokatDefaultCtor)
		{
			Prostokat p;
			Assert::AreEqual(0.0, p.pole());
			Assert::AreEqual(0.0, p.obwod());
		}
		TEST_METHOD(ProstokatPoleObwod1)
		{
			Prostokat p(6, 4);
			Assert::AreEqual(24.0, p.pole());
			Assert::AreEqual(20.0, p.obwod());
		}
		TEST_METHOD(ProstokatPoleObwod2)
		{
			Prostokat p(10, 5);
			FiguraSymetryczna* fsp = &p;
			Assert::AreEqual(50.0, fsp->pole());
			Assert::AreEqual(30.0, p.obwod());
		}
		TEST_METHOD(ProstokatSygnatura)
		{
			Prostokat p(6, 4);
			FiguraSymetryczna* fsp = &p;
			const string s = "Prostokat(6,4)";
			Assert::AreEqual(s, fsp->sygnatura());
		}
		TEST_METHOD(TrojkatDefaultCtor)
		{
			Trojkat t;
			Assert::AreEqual(0.0, t.pole());
			Assert::AreEqual(0.0, t.obwod());
		}

		TEST_METHOD(TrojkatPoleObwod1)
		{
			Trojkat t(6,4);
			Assert::AreEqual(12.0, t.pole());
			Assert::AreEqual(16.0, t.obwod());
		}
		TEST_METHOD(TrojkatPoleObwod2)
		{
			Trojkat t(10, 5);
			FiguraSymetryczna* fst = &t;
			Assert::AreEqual(25.0, fst->pole());
			Assert::AreEqual(24.142, fst->obwod(), 0.01);
		}
		TEST_METHOD(TrojkatSygnatura)
		{
			Trojkat t(6, 4);
			FiguraSymetryczna* fsp = &t;
			const string& s = "Trojkat(6,4)";
			Assert::AreEqual(s, fsp->sygnatura());
		}
	};
}
