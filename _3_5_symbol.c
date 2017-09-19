/*
  弱引用判断程序链接到的是单线程库还是多线程库
*/

#include <stdio.h>
#include <pthread.h>

int pthread_create( pthread_t *, const pthread_attr_t *, void* (*)(void*), void *) __attribute__ ((weak));

int main()
{
  if (pthread_create)
  {
    //run the multi-thread version
  }
  else
  {
    //run the sigle-thread version
  }
  
  return 0;
}

/* compile and run
$ gcc xxx.c -o pt
$./pt

$gcc xxx.c -lpthread -o pt
$./pt
*/
