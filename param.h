//
// Created by rouze on 10/12/24.
//

#ifndef PARAM_H
#define PARAM_H

#define RECORD_SIZE 8
#define BLOCK_SIZE 1024
#define NRECORDS_PERBLOCK 128
#define NRECORD_BLOCKS 507
#define NDATA_BLOCKS (507*128)
#define NRECOR_BITMAP_BLOCKS 1
// result of 507*128//1024//8
#define NDATA_BITMAP_BLOCKS 8

#define DATA_START 640
#define RECORD_START 0
#define RBITMAP_START 507
#define DBITMAP_START 508


//需要考虑算术右移与逻辑右移的区别
#define KEY(record) ((record) >> 32)
#define LEN(record) ((record) & 0x3FF)
#define FLAG(record) (((record) & 0xFFFF ) >> 10)
#define OFFSET(record) (((record) & 0xFFFFFFFF) >> 16)

#endif //PARAM_H
