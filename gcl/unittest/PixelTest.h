/*
 * Copyright (C) 2011 by Francois Coulombe
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:

 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#pragma once

#include <gcl/UnitTest.h>
#include <gcl/Pixel.h>

using namespace GCL;
namespace PixelTest
{
void Test();
void Test()
{
	TEST_START

	{
		PixelMono p;
		std::stringstream s;
		s<< p.GetComponentType() << "==eMONO";
		AssertMsg_Test(p.GetComponentType()==eMONO, s.str().c_str());

		s.str("");
		s<< p.OffsetToNext() <<"==1";
		AssertMsg_Test(p.OffsetToNext() == 1,s.str().c_str());
	}

	{
		PixelRGB pt;
		std::stringstream s;
		s<< pt.GetComponentType() << "==eRGB";
		AssertMsg_Test(pt.GetComponentType()==(eRGB), s.str().c_str());
		s.str("");
		s<< pt.OffsetToNext() <<"==3";
		AssertMsg_Test(pt.OffsetToNext() == 3,s.str().c_str());
	}
	{
		PixelRGBA pt;
		std::stringstream s;
		s<< pt.GetComponentType() << "==eRGBA";
		AssertMsg_Test(pt.GetComponentType()==(eRGBA), s.str().c_str());
		s.str("");
		s<< pt.OffsetToNext() <<"==4";
		AssertMsg_Test(pt.OffsetToNext() == 4,s.str().c_str());
	}
}
}
