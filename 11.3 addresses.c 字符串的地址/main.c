//
//  main.c
//  11.3 addresses.c 字符串的地址
//
//  Created by Affee on 2018/5/25.
//  Copyright © 2018年 affee. All rights reserved.
//

#include <stdio.h>
#define MSG "I'm special"

void gitttt();

int main(int argc, const char * argv[]) {
    char ar[] = MSG;
    const char *pt = MSG;
    printf("address of \"I'm special\":%p \n","I'm special");
    printf("            address ar: %p\n",ar);
    printf("            address pt: %p\n",pt);
    printf("            address MSG: %p\n",MSG);
    printf("address of \"I'm special\":%p \n","I'm special");

    gitttt();
    return 0;
}

void gitttt(){
//    字符串和指针
    const char *mesg = "Don't be a fool";
    const char *copy;
    
    copy = mesg;
    printf("%s\n",copy);
    printf("mesg = %s;&mesg = %p;value= %p\n",mesg,&mesg,mesg);
    printf("copy = %s;&copy = %p;value = %p\n",copy,&copy,copy);

    printf("nong-==========00000\n");
}
