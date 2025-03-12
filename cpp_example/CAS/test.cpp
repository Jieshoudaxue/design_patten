#include <unistd.h>
#include <string>
#include <sys/stat.h>
#include <sys/types.h>
#include <cstdio>
#include <dirent.h>
#include <fstream>
#include <vector>
#include <exception>
#include <iostream>
#include <stddef.h>
#include <iostream>
#include <string>
#include <memory>
#include <sstream>
#include <vector>
#include <thread>
#include <atomic>
#include <string.h>
#include <libgen.h>
#include <string>
#include <fcntl.h>
#include <stdint.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <map>
#include <math.h>
#include <list>
#include <algorithm>
#include <functional>
#include <libgen.h>

using namespace std;

int main() {
    volatile std::atomic<uint32_t> ref_cnt;
    ref_cnt.store(2);
    uint32_t cur_ref = ref_cnt.load();

    do {
      cur_ref = ref_cnt.load();
      // ref_cnt.store(1);  //如果注销，则打印结果为2，1；如果不注销，则打印结果为1，0
    } while (!ref_cnt.compare_exchange_weak(cur_ref, cur_ref - 1,
                                            std::memory_order_acq_rel));
    /*
    bool compare_exchange_weak( T& expected, T desired,
                                std::memory_order order = std::memory_order_seq_cst );
    当前值与期望值(expect)相等时，修改当前值为设定值(desired)，返回true
    当前值与期望值(expect)不等时，将期望值(expect)修改为当前值，返回false
    */

    printf("%u, %u\n", cur_ref, ref_cnt.load());

    return 0;
}