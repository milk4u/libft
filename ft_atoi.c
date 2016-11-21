int ft_atoi(char *str)
{
    int     i;
    int     sign;
    int     ans;

    i = 0;
    sign = 1;
    ans = 0;
    while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
        || (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
        i++;
    if (str[i++] == '-')
        sign = -1;
    else if (str[i] == '+')
        i++;
    while (ft_isdigit(str[i]))
    {
        ans = (ans * 10) + str[i] - '0';
        i++;
    }
    return (sign * ans);
}
