//
// Created by rouze on 10/12/24.
//

#ifndef LOFS_H
#define LOFS_H
#include <cstdint>
#include "param.h"


typedef uint32_t KeyType;
typedef char* ValueType;
typedef unsigned char uchar;

struct BlockInode {
    int64_t records[NRECORDS_PERBLOCK];
};

struct DataBlock {
    char data[1024];
};

struct DataBitMap {
    struct DataBlock bitmap[NDATA_BITMAP_BLOCKS];
};
#endif //LOFS_H
