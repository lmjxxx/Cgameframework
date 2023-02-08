# include <stdio.h>
# include <unistd.h>
# include <ncurses.h> // 방향키도 댐 termios 보다 좋음 

int getkey(int);
void set_stdin();
int kbhit();
void reset_stdin();


// int getkey(int is_echo) // is_echo 가 1이면 입력값을 화면에 표시, 0이면 입력값을 화면에 표시하지 않음 
// {
//     int ch;
//     struct termios old;
//     struct termios current;

//     /* 현재 설정된 terminal i/o 값을 backup 함 */
//     tcgetattr(0,&old);

//     /* 현재의 설정된 terminal i/o에 일부 속성만 변경하기 위해 복사함 */
//     current = old;

//     /*buffer i/o를 중단함 */
//     current.c_lflag &= ~ICANON; //c_lflag local modes

//     if (is_echo) { // 입력값을 화면에 표시할 경우
//         current.c_lflag |= ECHO;
//     }else{ //입력값을 화면에 표시하지 않을 경우
//         current.c_lflag &= ~ECHO;
//     }

//     tcsetattr(0, TCSANOW, &current);
//     ch = getchar();
//     tcsetattr(0, TCSANOW, &old);

//     return ch;
// }

// /*
//     Non-blocking 형태로 키 데이터를 읽고 없으면 -1을 리턴한다.
// */
// int kbhit(){
//     struct termios oldterm, new_term;
//     int ch_read;

//     char ch;
//     int nread;
//     int ich;

//     new_term.c_cc[VMIN] = 0; // VMIN: 한 번에 읽는 최소 바이트 수 read 호출시 0개의 문자를 읽어들임
//     new_term.c_cc[VTIME] = 0; // VTIME: 타임아웃 값 (1/10초) 시간지연 없음 
//     tcsetattr(0, TCSANOW, &new_term); // tcsetattr(int fd, int optional_actions, const struct termios *termios_p); TCSANOW: 변경 사항은 즉시 발생한다. 
//     nread = read(0, &ch, 1);

//     new_term.c_cc[VMIN] = 1; // read호출 시 1개의 문자를 읽어들임
//     new_term.c_cc[VTIME] = 0; // 시간지연 없음 
//     tcsetattr(0,TCSANOW, &new_term);

//     if (nread >= 1){
//         ch_read = (int)ch;
//         return ch_read;
//     } else {
//         return -1;
//     }


// }

