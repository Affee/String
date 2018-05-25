//
//  main.c
//  11.3 addresses.c 字符串的地址
//
//  Created by Affee on 2018/5/25.
//  Copyright © 2018年 affee. All rights reserved.
//

#include <stdio.h>
#define MSG "I'm special"


int main(int argc, const char * argv[]) {
    char ar[] = MSG;
    const char *pt = MSG;
    printf("address of \"I'm special\":%p \n","I'm special");
    printf("            address ar: %p\n",ar);
    printf("            address pt: %p\n",pt);
    printf("            address MSG: %p\n",MSG);
    printf("address of \"I'm special\":%p \n","I'm special");

    return 0;
}
