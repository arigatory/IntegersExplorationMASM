#include <iostream>

extern "C" char     GlChar = 10;
extern "C" short    GlShort = 20;
extern "C" int      GlInt = 30;
extern "C" long long GlLongLong = 0x00000000FFFFFFFF;

extern "C" void IntegerAddition(char a, short b, int c, long long d);

int main()
{
	IntegerAddition(3, 5, -37, 11);

	printf("ChaarValue %d\n", GlChar);
	printf("ShortValue %d\n", GlShort);
	printf("IntValue %d\n", GlInt);
	printf("LongLongValue %lld\n", GlLongLong);
	return 0;
}

