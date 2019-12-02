#include "main.h"


void main(int argc, char *argv[])
{
	int fd,i,j,cnt=0;
	float sim;
	int n; //파일 개수
	char buf1[256]={0};
	char buf2[256]={0};
	
	//chdir("./output"); //output폴더에 파일 생성을 위해 작업 디렉토리를 바꾸어준다.
	for(i=1; i<argc; i++){
		fd = open(argv[i],O_RDONLY);
		//read_and_chunk 함수 호출
		//n-1은 read_and_chunk함수 실행 후 만들어진 파일의 갯수
		n = read_and_chunk(fd, argv[i]);
	}
	i = 1;
	//n개의 파일을 hash함수로 전달하여 해쉬값을 얻어온다.
	//현재 작업경로 출력
	while(i<n){
		//1부터 n까지의 파일명을 hash함수로 전달
		sprintf(buf1,"%s.%.03d",argv[1],i);
		sprintf(buf2,"%s.%.03d",argv[2],i++);
		cnt+=hash(buf1, buf2,n);	
	}
	sim = (float)n-1;
	sim = (sim-cnt)/sim * 100;
	printf("\n\n%s:%s files similarity: %f\n",argv[1] , argv[2] , sim);

	close(fd);
}
