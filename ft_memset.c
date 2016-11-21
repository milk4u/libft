void    *ft_memset(void *m, int c, size_t n)
{
    unsigned char *pointer;

    pointer = (unsigned char)m;
    while (n--)
        *pointer++ = c;
    return (m);
}
