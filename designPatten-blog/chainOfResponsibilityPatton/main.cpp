#include <iostream>
#include "chainOfResponsibility.h"

using namespace std;

int main(void) {
    Manager *gm = new GeneralManager(NULL, "miao");
    Manager *md = new Majordomo(gm, "ycao");
    Manager *cm = new CommonManager(md, "xin");

    cm->handleReq("zhangsan", 300);
    cm->handleReq("lisi", 600);
    cm->handleReq("wangwu", 1000);
    

    delete gm;
    delete md;
    delete cm;
    
    return 0;
}
