// 伪代码,用于理解流程

#include "../inc/Coroutine.h"

// 创建协程
// pzid : 协程id
// entry : 协程执行的函数入口(函数指针)
// name : 协程名称
uint coroutine_create( uint* pzid, coroutine_fun_t entry, char* name){
    int zid;
    coroutine_t coroutine;
    
    // 找到可用的协程ID
    zid = find_free_zid();
    
    // 创建微内核实例
    coroutine = malloc( sizeof(coroutine_t));
    
    coroutine->state = COROUTINE_INIT;
    coroutine->zid = zid;
    coroutine->fun = entry;
    
    coroutine->esp3 = mmap(
        NULL, // 映射区的开始地址，设置为NULL或0表示由系统决定
        getpagesize(), //linux系统调用，获取内存页大小
        PROT_READ | PROT_WRITE | PROT_EXEC, // 映射的内存区的权限：可读可写可执行
        MAP_ANONYMOUS | MAP_PRIVATE, // 映射对象的类型
        -1,
        0
    ) + getpagesize();
    
    
}