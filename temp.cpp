#include<stdio.h>
 main(){
    enum tag(low='a',high='b',medium='c');
    char try=low;
    printf("%d",sizeof(tag));
    return 0;
}