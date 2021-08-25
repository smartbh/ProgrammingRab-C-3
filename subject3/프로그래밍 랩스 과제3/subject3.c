#include <stdio.h>
#include <string.h>


void reverse(char a[], char b[]) 
{
	int size = strlen(a);
	int i, j;

	for (i = size - 1, j =0; i >= 0, j<size; i--,j++)
	{
		b[j] = a[i];
	}
	b[j] = '\0';
}

int main() {

	char str1[100];
	char str2[100];
	char str3[200];
	char str4[100];
	char temp[100] = {""};


	int len1, len2, len3, len4;

	printf("<1> �Է� ");
	scanf("%s", &str1);
	printf("    �Է� ");
	scanf("%s", &str2);

	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	

	printf("<2>  ��ȯ str1 = %s str2 = %s\n", &str1, &str2);

	printf("len1 = %d len2 = %d\n", strlen(str1), strlen(str2));


	strncpy(str3, str2, sizeof(str3));

	printf("<3>  ���� str3 = %s\n", &str3);

	strcat(str3, " ");
	strcat(str3, str1);
	strcat(str3, " ");
	strcat(str3, "Computer Engineering");

	printf("<4>  �̾� ���̱� str3 = %s\n", &str3);

	printf("len3 = %d\n", strlen(str3));

	

	reverse(str3, str4);

	printf("<5>  ������ str4 = %s\n",str4);

	printf("len4 = %d\n", strlen(str4));

	return 0;
}