//
// Created by rouze on 10/13/24.
//

#ifndef BITMAP_H
#define BITMAP_H
#include "lofs.h"
#include <assert.h>
inline void clearN (uchar *bitmap,int n) {
   assert(n < NDATA_BITMAP_BLOCKS);
   int x = n / 8;
   bitmap[x] &= ~(0x1 << (n % 8));
}

inline void setN (uchar *bitmap,int n) {
   assert(n < NDATA_BITMAP_BLOCKS);
   int x = n / 8;
   bitmap[x] |= (0x1 << (n % 8));
}

inline int allocb(uchar *bitmap) {
   int n = 0;
   int i = 0;
   while (bitmap[n++]==0xFF);
   n--;
   while (!(bitmap[n]&(0x1<<(i++))));;
   return n*8+i-1;
}

inline void freeb(uchar *bitmap,int n) {
   clearN(bitmap,n);
}

#endif //BITMAP_H
