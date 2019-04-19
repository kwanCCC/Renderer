#ifndef _UTIL_H_
#define _UTIL_H_

class Util;

static inline void swap(int* a, int* b);

// returns absolute value of number
static inline float absolute(float x);

// returns integer part of a floating point number
static inline int iPartOfNumber(float x);

// rounds off a number
static inline int roundNumber(float x);

// returns fractional part of a number
static inline float fPartOfNumber(float x);

// returns 1 - fractional part of number
static inline float rfPartOfNumber(float x);

#endif  //_UTIL_H_