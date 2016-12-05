    #include <unistd.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <stdlib.h>
    #include <stdio.h>

    int main(int argc, char *argv[]) {
        char block[1024];
        FILE *in, *out;
        
        if(argc != 3) {
            printf("오류:입력, 출력 파일의 이름을 입력하세요.\n");
            exit(1);
        }

        if((in = fopen(argv[1], "r")) == NULL) {
            printf("파일을 찾을 수 없습니다.\n");
            exit(1);
        }
        out = fopen(argv[2], "w");

        while(fgets(block, 1024, in)!= NULL) {
           fputs(block,out);       
           printf(".");
        }
        
        fclose(in);
        fclose(out);
        printf("\ncopy end\n");
        return 0;
    }