#include "util.h"

static inline void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// returns absolute value of number
static inline float absolute(float x) {
  if (x < 0)
    return -x;
  else
    return x;
}

// returns integer part of a floating point number
static inline int iPartOfNumber(float x) { return (int)x; }

// rounds off a number
static inline int roundNumber(float x) { return iPartOfNumber(x + 0.5); }

// returns fractional part of a number
static inline float fPartOfNumber(float x) {
  if (x > 0)
    return x - iPartOfNumber(x);
  else
    return x - (iPartOfNumber(x) + 1);
}

// returns 1 - fractional part of number
static inline float rfPartOfNumber(float x) { return 1 - fPartOfNumber(x); }