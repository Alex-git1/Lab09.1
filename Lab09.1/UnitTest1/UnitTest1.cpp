#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab09.1/sum.h"
#include "../Lab09.1/dod.h"
#include "../Lab09.1/var.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsVar;
using namespace nsSum;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			x = 1.0;        
			eps = 0.0001;  
			S = 0;          
			sum();
			double expectedValue = exp(-x * x);

			Assert::IsTrue(abs(S - expectedValue) < eps);
		}
	};
}


