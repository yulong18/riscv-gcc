/* { dg-do compile } */
/* { dg-options "-misa=sm_75" } */

#if __PTX_SM__ != 750
#error wrong value for __PTX_SM__
#endif
