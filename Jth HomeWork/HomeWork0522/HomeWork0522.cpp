// ConsoleApplication122.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//



#include <iostream>
#include <conio.h> // 키를 누를때까지 기다리는 함수

// 숙제 1 -- 문자의 오른쪽끝을 맞춰오세요. 이름은 알파뱃만
// fasdhjkfasdhjfkasd--------
// Monster-------------------
// 위와같이 UI의 끝부분이 맞게 만들어라.

// 숙제 2 -- 실시간으로 만들어오세요.
// 데미지 메세지가 나오는순간 체력이 곧바로 감소되게 만들어라.
// 화면 지우는 함수 화면에 출력하는 함수를 잘 생각해보세요.
// 그냥 무식하게 생각해라.

// 숙제 3 -- 누군가 죽었다. 누군가의 Hp가 0이 된순간 종료.


// 상태와 개념을 하나로 묶어서 내가 인간적인 생각을 문법으로 표현한다.
// 이걸 객체지향의 특성이 추상화라고 합니다.


// 몬스터와 플레이어가 서로 한대씩 때리면서
// 한명이 죽으면 끝납니다.
// 지금 그걸 그래픽으로 표현할 방법이 없으니까.
// 글자로 표현하겠습니다.
void PrintLine(const char* line, int maxLength)
{
    int lineLength = 0;
    while (line[lineLength] != '\0')
        ++lineLength;

    if (lineLength <= maxLength)
    {
        printf("%s", line);
        for (int i = 0; i < maxLength - lineLength; ++i)
            printf(" ");
        printf("\n");
    }
    else
    {
        for (int i = 0; i < maxLength; ++i)
            printf("%c", line[i]);
        printf("\n");
    }
}

void StatusRender(const char* const _Name, int _Att, int _Hp)
{
    // 40개로 맞춰오세요.

    // 줄바꿈이 안되고 있습니다.

    const char separator[] = "----------------------------------------";
    int maxLength = sizeof(separator) - 1;

    PrintLine(_Name, maxLength);
    printf("%s\n", separator);
    printf("공격력 : %d\n", _Att);
    printf("체  력 : %d\n", _Hp);
    printf("%s\n", separator);
    printf("\n");

}

void DamagePrint(const char* const _AttName, const char* const _DefName, int _Att)
{
    printf_s("%s가 %s를 공격했습니다.\n", _AttName, _DefName);
    printf_s("%s는 %d의 데미지를 입었습니다.\n", _DefName, _Att);
}

void Damage(int& _Hp, int _Att)
{
    _Hp -= _Att;
}

// 내일꼭 break continue

int main()
{
    // 절차지향 코딩이라고 부르고 
    // 함수와 변수를 개념에 묶지 않고 데이터로만 보고 처리하는 방식입니다.

    // 컴퓨터 입장에서 본다면
    // 플레이어의 hp => 인간적인 머릿속에 그린 개념이다.
    // 컴퓨터적인 측면에서 void Damage(int& _Hp, int _Att)
    // 플레이어가 몬스터를 때린다.
    // => 컴퓨터가 보면 그냥 int나 2개 내놔.

    int PlayerHp = 200;
    int PlayerAtt = 25;
    char PlayerName[] = "fasdhjkfasdhjkfasdhjfkl";

    int MonsterHp = 100;
    int MonsterAtt = 10;
    char MonsterName[] = "Monster";

    while (true)
    {
        // 콘솔창을 모조리 지우는 함수
        if (MonsterHp == 100)
        {
            system("cls");
            // 한번에 함수로 만든것이고
            StatusRender(PlayerName, PlayerAtt, PlayerHp);
            StatusRender(MonsterName, MonsterAtt, MonsterHp);

            _getch();
        }






        // 아무키나 입력할때까지 기다리는 함수
        DamagePrint(PlayerName, MonsterName, PlayerAtt);
        Damage(MonsterHp, PlayerAtt);
        // MonsterHp -= PlayerAtt;
        system("cls");

        StatusRender(PlayerName, PlayerAtt, PlayerHp);
        StatusRender(MonsterName, MonsterAtt, MonsterHp);
        DamagePrint(PlayerName, MonsterName, PlayerAtt);
        if (PlayerHp == 0, MonsterHp == 0)
        {
            return 0;
        }



        _getch();



        DamagePrint(MonsterName, PlayerName, MonsterAtt);
        Damage(PlayerHp, MonsterAtt);
        system("cls");
        StatusRender(PlayerName, PlayerAtt, PlayerHp);
        StatusRender(MonsterName, MonsterAtt, MonsterHp);
        DamagePrint(MonsterName, PlayerName, MonsterAtt);
        if (PlayerHp == 0, MonsterHp == 0)
        {
            return 0;
        }


        _getch();




    }
}