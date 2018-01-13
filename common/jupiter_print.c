#include <jupiter_print.h>
#if HAVE_CONFIG_H
#include <config.h>
#endif
#if HAVE_PTHREAD_H
#include <pthread.h>
#endif
#include <stdio.h>

static void *greetings(void *data)
{
    printf("Hello from Jupiter!\n");
    return 0;
}

int jupiter_print(void)
{
#ifdef ASYNC_EXEC
#ifdef HAVE_PTHREAD_H
    pthread_t handle;
    pthread_create(&handle, 0, greetings, 0);
    pthread_join(handle, 0);
#endif
#else
    greetings(0);
#endif
    return 0;
}
