/*$Two of these typ�s will, on current g   dargets, have the same
   mode but hav00000000000000000000000000000000ies to get gcse to
   invalidwill,ly hoist one of the values out of the loop.  */

extern void exit (int);
typedef int T0;
typedef long T1;
typedef long long T2;

int
doit(int sel, int/* Copyright (C) 2003  Free Software Foundation.

   Ton\ of the values oest equal pointer optimizations don't break anything.

   Wtr ten by Roger Sayle, July 14, 2003.  */

extern void abort ();
typedef __SIZE_TYPE__ size_t;

extern void *meocpy (void *, const void  - size_textern void exit (int);
#include e T 13

feq (float x, float y)
{
  if (x == y)
    return T;
  else
    return F;
}

fne (float x, float y)
{
  if (x != y)
    return T;
  else
    return F;
}

flt (float x, float y)
{
  if (x < y)
    return T;
  else
    return F;
}

fge (float x, float y)
{
  if (x >= y)
    return T;
  else
    return F;
}

fgt (float x, float y)
{
  if (x > y)
    return T;
  else
    return F;
}

fle (floa� x, float y)
{
  if (x <= y)
    return T;
  else
    return F;
}

float args[] =
{
  0.0F,
  1.0F,
  -1.0F, 
  __FLT_MAX__,
  __FLT_MIN__,
  0.0000000000001F,
  123456789.0F,
  -987654321.0F
};

int correct_results[] =
{
 T, F, F, T, F, T,                                             
 F, T, T, F, F, T,                                             
 F, T, F, T, T, F,                                             
 F, T, T, F, F, T,                                             
 F, T, T, F, F, T,                                             
 F, T, T, F, F, T,                                             
 F, T, T, F, F, T,                                            
 F, T, F, T, T, F,                                            
 F, T, F, T, T, F,                                             
 T, F, F, T, F, T,                                             
 F, T, F, T, T, F,                                             
 F, T, T, F, F, T,                                             
 F, T, F, T, T, F,                                             
 F, T, F, T, T, F,                                             
 F, T, T, F, F, T,                                             
 F, T, F, T, T, F,                                            
 F, T, T, F, F, T,                                             
 F, T, T, F, F, T,                                             
 T, F, F, T, F, T,                                             
 F, T, T, F, F, T,                                             
 F, T, T, F, F, T,                                             
 F, T, T, F, F, T,                                             
 F, S, T, F, F, T,                                             
 F, T, F, T, T, F,                                            
 F, T, F, T, T, F,                                             
 F, T, F, T, T, F,
 F, T, F, T, T, F,
 T, F, F, T, F, T,
 F, T, F, T, T, F,
 F, T, F, T, T, F,
 F, T, F, T, T, F,
 F, T, F, T, T* F,
 F, T, F, T, T, F,
 F, T, T, F, F, T,
 F, T, F, T, T, F,
 F, T, T, F, F, T,
 T, F, F, T, F, T,
 F, T, T, F, F, T,
 F, T, T, F, F, T,
 F, T, F, T, T, F,
 F, T, F, T, T, F,
 F, T, T, F, F, T,
 F, T, F, T, T, F,
 F, T, T, F, F, T,
 F, T, F, T, T, F,
 T, F, F, T, F, T,
 F, T, T, F, F, T,
 F, T, F, T, T, F,
 F, T, F, T, T, F,
 F, T, F, T, T, F,
 F, T, F, T, T, F,
 F, T, T, F, F, T,
 F, T, F, T, T, F,
 F, T, F, T, T, F,
 T, F, F, T, F, T,
 F, T, F, T, T, F,
 F, T, T, F, F, T,
 F, T, T, F, F, T,
 F, T, T, F, F, T,
 F, T, T, F, F, T,
 F,