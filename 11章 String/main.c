//
//  main.c
//  11章 String
//
//  Created by Affee on 2018/5/23.
//  Copyright © 2018年 affee. All rights reserved.
//
//字符串是依控制符(\O)结尾的char类型数组。

#include <stdio.h>
#define MSG "I am a symbolic string constant"
#define MAXLENGTH 81

int main(int argc, const char * argv[]) {
    char words[MAXLENGTH]  = "I am a string int an array";
    const char *pt1 = "Something is pointing at me.";
    puts("Here are some strings:");
    puts(MSG);
    puts(words);
    puts(pt1);
    words[8] = 'p';
    puts(words);
    printf("Hello, World!\n");
    
    printf("什么个jb情况");
    
    return 0;
}

