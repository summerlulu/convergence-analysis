#ifndef _VECOP_H_
#define _VECOP_H_

// @result inner product of vec1 and vec2
// @vec_len the length of vectors
void vec_dot(double *result,double *vec1,double *vec2,int vec_len);

// @result_vec result vector of factor1*vec1+factor2*vec2;
// @vec_len the legnth of vectors
void vec_add(double *result_vec,double *vec1,double *vec2,int vec_len,double factor1,double factor2);

// @dest destination of copy vector @src
// @vec_len the length of vectors
void vec_cpy(double *dest,double *src,int vec_len);

#endif