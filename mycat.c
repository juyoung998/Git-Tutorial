/*mycat program: perform command 'cat', by juyoung(32191067).99rlawndud@naver.com, 2020.9.29*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<fcntl.h>
#define MAX_BUF 6

int main(int argc, char* argv[])
{
int fd, rsize, wsize;
char buf[MAX_BUF];
if(argc!=2)
{
printf("USAGE: %s filename\n", argv[0]);
exit(-1);
}
fd=open(argv[1],O_RDONLY);
if(fd<0)
{
printf("can't open %s file, errno:%d\n", argv[1],errno);
exit(-1); //프로세스 강제 종료하는 system call
}
while(1)
{
rsize=read(fd, buf,sizeof(buf));
if(rsize<0)
{
printf("can't read data from %s file, size: %d\n", argv[1], rsize);
exit(-1);
}
if(rsize==0)
break;
wsize=write(STDOUT_FILENO, buf,rsize);
}
close(fd);
return 0;
}
 
