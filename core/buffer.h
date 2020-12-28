#ifndef _AEBUFFER_H
#define _AEBUFFER_H


/// 《Linux多线程服务端编程：使用muduo C++网络库》陈硕著 7.4章节，P204
/// https://github.com/chenshuo/muduo
/// muduo buf:A buffer class modeled after org.jboss.netty.buffer.ChannelBuffer
///
/// @code
/// +-------------------+------------------+------------------+
/// | prependable bytes |  readable bytes  |  writable bytes  |
/// |                   |     (CONTENT)    |                  |
/// +-------------------+------------------+------------------+
/// |                   |                  |                  |
/// 0      <=      readerIndex   <=   writerIndex    <=     size
///
/// @endcode



#include <sys/types.h>
#include "jemalloc_define.h"

#define DEFAULT_BUFF_SIZE        1024

typedef struct {
    unsigned char *buff;
    size_t size;
    size_t read_idx;
    size_t write_idx;
} buffer_t;

buffer_t *alloc_buffer();

void free_buffer(buffer_t *buffer);

void check_buffer_size(buffer_t *buffer, size_t avlid_size);

size_t get_readable_size(buffer_t *buffer);

size_t get_writeable_size(buffer_t *buffer);

#endif //_AEBUFFER_H
