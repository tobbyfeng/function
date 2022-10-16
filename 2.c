#include <stdio.h>

int reverse( char *str , int right , int left , int mid )
{
	if( left > mid )
	{
		return 0;
	}
	char temp = str[left];
	str[left] = str[right];
	str[right] = temp;
	reverse( str , right-1 , left+1 , mid );
}

int main()
{
	char ptring[] = "abc123";
	int left = 0;
	int right = sizeof(ptring) - 2;
	int mid = right / 2;
	reverse( ptring , right , left , mid );
	printf( "%s \n" , ptring );
	return 0;
}

