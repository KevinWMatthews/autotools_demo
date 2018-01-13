#include <jupiter_print.h>
#if HAVE_CONFIG_H
#include <config.h>
#endif
#include <stdio.h>
#include <pthread.h>

static void *greetings(void *data)
{
    printf("Hello from Jupiter!\n");
    return 0;
}

int jupiter_print(void)
{
    pthread_t handle;
    pthread_create(&handle, 0, greetings, 0);
    pthread_join(handle, 0);
    return 0;
}
