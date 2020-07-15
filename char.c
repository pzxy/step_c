

#include <stdio.h>

main() {
//    printf("EOF:%d,bool:%d \n", EOF, (getchar() != EOF));
//    int c;
//    while ((c = getchar()) != EOF) {
//        putchar(c);
//    }
//
///**
// *打印字符
// */
//    int nc;
//    for (nc = 0; getchar() != EOF; ++nc)
//        ;
//    printf("%d  \n", nc);



/**
 * 行计数
 */

    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            nl++;
            printf("%d \n", nl);
        }

    }

    /**
     * 单词计数
     * 关键也是循环，会有一个状态来标记循环是不是在单词中了，
     * 如果不在单词中了，就改变状态，单词数加一，继续循环下个单词的每个字符。
     */

    /**
     * 数组
     * int array【10】
     *
     *
     */


}