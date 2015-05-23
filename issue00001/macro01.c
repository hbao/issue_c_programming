#include <stdio.h>
#include <stdlib.h>

#define PRINT(fmt) printf(fmt);

struct macro001 {
        int type;
        char name[16];
};

#define MACRO_CONTENT_INIT(type, name) ({ \
        __contentp->type = (type); \
        snprintf(__contentp->name, sizeof(__contentp->name), "%s", name);})

int main(void)
{
        struct macro001 context = {0, {0}};
        int type = 1;
        char name[] = "wanglieming";
        struct macro001 *__contentp = &context;
        
        MACRO_CONTENT_INIT(1, name);
        printf("%d, %s\n", context.type, context.name);
        return 0;
}
