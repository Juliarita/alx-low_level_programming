#include "main.h"
#include <stdio.h>

void getFileName()
{
	printf("%s\n", __FILE__);

}

int main(int argc, char *argv)
{
	getFileName();
	return 0;
}
