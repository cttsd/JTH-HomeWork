#pragma once
#include "ConsoleScreen.h"

class Player
{
public:

    void Shoot(ConsoleScreen* Screen);
   


    int4 GetPos() const
    {
        return Pos;
    }

    void AddPos(const int4& _Pos)
    {
        Pos += _Pos;
    }

    void SetPos(const int4& _Pos)
    {
        // 뭔가가 그냥 거저 된다.
        // => 내가 만들었다.
        // => 컴파일러나 기본문법으로 생략되어 있다.
        Pos = _Pos;
    }

    // 생성자에는 붙일수가 없다.
    Player()
        : Pos()
    {
    }


    Player(const Player&) = delete;

    void Input(ConsoleScreen* Screen);
    

protected:

private:


    int4 Pos;
};