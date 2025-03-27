#include <stdio.h>
#include <string.h>


static void freeBuffAfterFgets()
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF){}

}

/**
*
*
*
*/
int inputStr(const char *msg, char *dst, size_t buff)
{
    if (buff == 0) {
        return 0;
    }
    printf("%s",msg);
    size_t tempBuff = buff + 1;
    char tempStr[tempBuff];

	if (fgets(tempStr, tempBuff, stdin) == NULL)
	{
	    dst[0] = '\0';
		return 0;
	}

	size_t tempStrLen = strlen(tempStr);

	if (tempStr[tempStrLen - 1] == '\n')
	{
		tempStr[tempStrLen - 1] = '\0';
	}
	else
	{
	    dst[0] = '\0';
		freeBuffAfterFgets();
		return -1;
	}

	for(size_t i = 0; i < buff - 1;i++){
	   dst[i] = tempStr[i];
	}

	dst[buff - 1] = '\0';
	return (strlen(dst) == 0) ? 0 : 1;
}
