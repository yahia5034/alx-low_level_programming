void _puts_recursion(char *s)
{
	if( s[0] == '\0' )
	{
		return ;
	}
	putchar( s[0] );
	_puts_recursion( s+1 );
}
