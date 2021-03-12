#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_2.3/FuzzyNumber.h"
#include "../Lab_2.3/FuzzyNumber.cpp"
#include "../Lab_2.3/Multi_and_Addit.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab23
{
	TEST_CLASS(UnitTestLab23)
	{
	public:
		
		TEST_METHOD(Test_Addit)
		{
			FuzzyNumber A(2.0, 3.0, 4.0),
				        B(2.0, 3.0, 4.0),
				        C(0.0, 0.0, 0.0);

			C = A + B;
			Assert::AreEqual(C.get_x(), -2.0);
		}
	};
}
