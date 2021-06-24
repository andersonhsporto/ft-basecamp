int	char_int(char *arg, int *side)
{
	int    i;

    i = 0;
    while (i <=20 )
    {
        if (*arg < '1' || *arg > '4')
            return (0);
            side[i] = *arg - '0';
            arg += 2;
        i++;
    }
    return (1);
}
