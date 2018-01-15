#include <print.h>
#if HAVE_CONFIG_H
#include <config.h>
#endif
#if HAVE_PTHREAD_H
#include <pthread.h>
#endif
#include <stdio.h>

static void *greetings(void *name)
{
    char *string = (char *)name;
    printf("Hello from %s!\n", string);
    return 0;
}

int print_routine(char *name)
{
#ifdef ASYNC_EXEC
#ifdef HAVE_PTHREAD_H
    pthread_t handle;
    pthread_create(&handle, 0, greetings, name);
    pthread_join(handle, 0);
#endif
#else
    greetings(name);
#endif
    return 0;
}
