//
// Created by Данил Козловский on 2019-03-28.
//

#ifndef INC_2_VEC2I_H
#define INC_2_VEC2I_H

class Vec2I {
public:
    int x, y;

    Vec2I();

    Vec2I(int x, int y);

    int getX();

    int getY();

    void setX(int xG);

    void setY(int yG);

    void setTo(Vec2I vec);

    void setTo(int xG, int yG);

    void add(Vec2I vec);

    void add(int n);

    void add(int xG, int yG);

    void offset(Vec2I vec);

    void offset(int n);

    void offset(int x, int y);

    void sub(Vec2I vec);

    void sub(int n);

    void sub(int xG, int yG);

    void mul(Vec2I vec);

    void mul(int n);

    void mul(int xG, int yG);

    void div(Vec2I vec);

    void div(int n);

    void div(int xG, int yG);

    Vec2I* copy();
};

#endif //INC_2_VEC2I_H
