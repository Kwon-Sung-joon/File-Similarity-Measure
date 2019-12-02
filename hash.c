#include "main.h"

int hash(char *buf1,char *buf2, int n){
	//buf1 , buf2는 일대일 매칭
	
	int i,n1,n2,fd1,fd2;
	char buffer1[1024];
	char buffer2[1024];
	SHA1Context sha1;
	SHA1Context sha2;
	static unsigned char hash1[20] = {0};
	static unsigned char hash2[20] = {0};
	int cnt=0;
	float sim;
	if((fd1 = open(buf1,O_RDONLY, 0644)) == -1 || (fd2 = open(buf2,O_RDONLY, 0644)) == -1){
		perror("open failed");
		exit(1);
	}

	SHA1Reset(&sha1);
	SHA1Reset(&sha2);

	while((n1 = read(fd1,buffer1,1024)) &&( n2 = read(fd2,buffer2,1024))){
		SHA1Input(&sha1, buffer1,n1);
		SHA1Input(&sha2, buffer2,n2);
	}

	SHA1Result(&sha1,hash1);
	SHA1Result(&sha2,hash2);
	

	if(strcmp(hash1,hash2) != 0){
		cnt++;
		printf("\nIncorrect files\n");
		printf("%s:  ",buf1);
		for(i=0; i<20; i++){
			printf("%02x",hash1[i]);
		}
		printf("\n");
		printf("%s:  ",buf2);
		for(i=0; i<20; i++){
			printf("%02x",hash2[i]);
		}
	}
	close(fd1);
	close(fd2);
	return cnt;
}

