    #include <unistd.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>

    int main(int argc, char *argv[]) {
        char block[1024];
        int in, out;
        int read;
        char input[30], output[30];

        if(argc != 3) {
            printf("오류:입력, 출력 파일의 이름을 입력하세요.\n");
            exit(1);
        }

        strcpy(input, argv[1]);
        strcpy(output, argv[2]);

        in = open(input, O_RDONLY);
        out = open(output, O_WRONLY|O_CREAT, S_IRUSR|S_IWUSR);

        while((read = read(in, block, sizeof(block))) > 0) {
         write(out, block, read);
         printf(".");

     }

     close(in);
     close(out);
     printf("\ncopy end\n");
     return 0;
    }