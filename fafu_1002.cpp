#include "stdio.h"
#include "string.h"

__int64 a;
__int64 b;
__int64 c;

__int64 dps( __int64 p, __int64 q ) {
	if ( c / p >= q )
		return p * q;
	else
		return ( dps(p, q / 2) * 2 % c + p * (q % 2) % c ) % c;
}

int main() {
	//freopen( "1002.txt", "r", stdin );
	while ( scanf( "%I64d%I64d%I64d", &a, &b, &c ) == 3 )
		printf( "%I64d\n", dps(a, b) );

	return 0;
}
