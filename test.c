#include "stdint.h"
#include "stdio.h"
#include "QR_Encode.h"

int main(void)
{
	uint8_t i, j;
	char text[512];

	printf("QRcode lib test:\r\n");
	printf("MAX_MODULESIZE:%d\r\n", MAX_MODULESIZE);
	while(1)
	{
		printf("Please input original data:\r\n");
		scanf("%s", text);
		EncodeData(text);
		printf("m_nSymbleSize:%d\r\n", m_nSymbleSize);
		for(i=0;i<m_nSymbleSize;i++)
		{
			for(j=0;j<m_nSymbleSize;j++)
			{
				if(m_byModuleData[i][j] == 1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\r\n");
		}	
	}

	return 0;
}
