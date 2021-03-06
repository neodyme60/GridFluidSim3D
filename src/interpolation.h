/*
Copyright (c) 2016 Ryan L. Guy
This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.
Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:
1. The origin of this software must not be misrepresented; you must not
   claim that you wrote the original software. If you use this software
   in a product, an acknowledgement in the product documentation would be
   appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be
   misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.
*/
#ifndef INTERPOLATION_H
#define INTERPOLATION_H

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <assert.h>

namespace Interpolation {

    extern double cubicInterpolate(double p[4], double x);
    extern double bicubicInterpolate(double p[4][4], double x, double y);
    extern double tricubicInterpolate(double p[4][4][4], double x, double y, double z);
    extern double trilinearInterpolate(double p[8], double x, double y, double z);
}

#endif