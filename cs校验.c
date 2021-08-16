#include <stdio.h>

typedef unsigned          char uint8_t;
typedef unsigned short     int uint16_t;
typedef unsigned           int uint32_t;
/*
*da数据
len 数据元素个数 sizeof(da)/2
*/
uint8_t cs_num(uint16_t *da,int len)//cs校验
{	uint16_t a=0;
	for(int i=0;i<len;i++)
	a+=*(da+i);
	return a;
}
int main()
{
	uint16_t lu[]={0x68,0xaa,0x10,0x68 ,0x11,0xaa,0xaa ,0x00,0x00 ,0x00 ,0x02 ,0x35,0x95};
	uint16_t ru[]={0x68,0xaa,0x10 ,0x68 ,0x14 ,0xaa ,0xaa ,0x00 ,0x00,0x00,0x03,0x35,0x95 ,0x00};
	printf("0x%x\n",cs_num(ru,sizeof(ru)/2));

	getchar();
	return 0;
}