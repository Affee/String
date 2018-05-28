//
//  main.c
//  11.7 字符串函数
//
//  Created by Affee on 2018/5/28.
//  Copyright © 2018年 affee. All rights reserved.
//

#include <stdio.h>
//test_fit.c 使用缩短字符串长度的函数
#include <string.h>

void fit(char *,unsigned int);


int main(int argc, const char * argv[]) {
    
    char mesg[] = "Things should be as simple as possible," "But not simpler";
    puts(mesg);
    fit(mesg, 38);
    puts(mesg);
    puts("Let's look at some more of the string.");
    puts(mesg + 39);
    
    return 0;
}

void fit(char *string,unsigned int size)
{
    if (strlen(string )> size) {
        string[size] = '\0';
    }
}
