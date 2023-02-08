#include <stdio.h>
// #include <conio.h> //콘솔 입출력을 제공하는 헤더파일 비 표준 헤더 사용이 권장되지 않음. ws에서만 쓸 수 있음. _kbhit() _getch() 를 사용하는데 termios.h로 대체해서 사용
#include <termios.h> // terminal
#include <time.h> // C언어 표준 라이브러리, 시간/날짜를 얻거나 조작

int main(){
    clock_t CurTime, OldTime; //clock_t: 틱(시간을 측정하는 기준 주기) 를 저장하는 형식
    Init();

    while(1)
    {
        OldTime = clock(); // clock(); 프로그램이 시작될때 부터 지난 틱 수 반환 
        Update();
        Render();
        while(1)
        {
            CurTime = clock();
            if (CurTime - OldTime > 33) // OldTime 에 clock() 함수로 render 전 시간을 입력, 대기상태에 들어간 후 CurTime을 계속 갱신, CurTime과 OldTime의 차가 33(ms)일 때 대기상태를 빠져나간다.
                break;
        }
    }
    Release();
    return 0;
}

void Init(){ // 초기화

}

void Update(){ // 데이터 갱신

}

void Render(){ // 화면 출력

}

void Release(){ // 해제
    
}