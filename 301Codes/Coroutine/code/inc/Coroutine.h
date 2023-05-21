#ifndef COROUTINE_COROUTINE_H
#define COROUTINE_COROUTINE_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <memory.h>
#include <errno.h>
#include <stdbool.h>
#include <sys/mman.h>

typedef unsigned int uint;

typedef void* (*coroutine_fun_t)(void*);

typedef enum coroutine_state {
    COROUTINE_INIT,     // 初始化
    COROUTINE_RUNNING,  // 执行
    COROUTINE_READY,    // 就续
    COROUTINE_BLOCKED,  // 阻塞
    COROUTINE_SLEEPING, // 睡眠
    COROUTINE_WAITING,  // 等待
    COROUTINE_DIED,     // 死亡
} coroutine_state_t;


typedef struct coroutine {
    coroutine_state_t   state;
    coroutine_fun_t     fun;
    char*               esp3;
    char                name[16];
    int                 zid;
} coroutine_t;

#endif // COROUTINE_COROUTINE_H