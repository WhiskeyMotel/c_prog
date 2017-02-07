#include <stdio.h>
#include <string.h>
 
int is_balance(const char* s)
	{
    int   i, ds[3];
    const char* p;
    const char beg[] = "({[";
    const char end[] = ")}]";
    
    memset(ds, 0, sizeof(ds));
    for(; *s; ++s)
	{
        if((p = strchr(beg, *s)) != NULL)
            ++ds[p - beg];
        else if((p = strchr(end, *s)) != NULL)
		{
            if(--ds[p - end] < 0)
                return 0;
        }
    }
 
    for(i = 0; i < 3; ++i)
	{
        if(ds[i] > 0)
            return 0;
    }
    return 1;
}
int main(void)
{
    puts( is_balance("([hello])") ? "yes" : "error" );
    puts( is_balance("([hello)")  ? "yes" : "error" );
    return 0;
}
