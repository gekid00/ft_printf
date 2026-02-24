#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int ret1, ret2;

    printf("--- printf vs ft_printf tests ---\n");

    ret1 = printf("Str: '%s' Int: %d Hex: %#x Uns: %u Percent: %%\n", "hello", 42, 255, 3000000000u);
    ret2 = ft_printf("Str: '%s' Int: %d Hex: %#x Uns: %u Percent: %%\n", "hello", 42, 255, 3000000000u);
    printf("printf returned %d, ft_printf returned %d\n", ret1, ret2);

    ret1 = printf("Null str: %s\n", (char *)NULL);
    ret2 = ft_printf("Null str: %s\n", (char *)NULL);
    printf("printf returned %d, ft_printf returned %d\n", ret1, ret2);

    ret1 = printf("Big num: %lld\n", 123456789012345LL);
    ret2 = ft_printf("Big num: %lld\n", 123456789012345LL);
    printf("printf returned %d, ft_printf returned %d\n", ret1, ret2);

    return 0;
}
