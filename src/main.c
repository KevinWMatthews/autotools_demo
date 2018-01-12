#include <config.h>
#include <stdio.h>
#include <pthread.h>

static void *greetings(void *data)
{
    printf("Hello from Jupiter!\n");
    return 0;
}

int main(void)
{
    pthread_t handle;
    pthread_create(&handle, 0, greetings, 0);
    pthread_join(handle, 0);
    return 0;
}
