#include "main.h"
  
int read_and_chunk(int fd, char *fname){
        int n;
        int chunkfd, nbytes;
        char chunk_name[128];
        char buffer[CHUNKSIZE];
        n = 1;

        //CHUNKSIZE만큼 전달 받은 파일을 잘라서 저장    
        while(nbytes = read(fd, buffer, CHUNKSIZE)){
                sprintf(chunk_name, "%s.%03d", fname, n++);
                if((chunkfd = open(chunk_name, O_WRONLY | O_CREAT, 0666)) == -1){
                        printf("read_and_chunk(): chunk file create failed\n");
                        return -1;
                }

                write(chunkfd, buffer, CHUNKSIZE);
                close(chunkfd);
        }
        //자른 파일의 갯수 리턴
        return n;
}
