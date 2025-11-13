#pragma once
#ifndef VECTOR2_H
#define VECTOR2_H

namespace Numerics
{
    class Vector2
    {
    private:
    public:
        float x;
        float y;
        Vector2(float x, float y) { this->x = x; this->y = y; };
        ~Vector2() {};
        void SetPosition(float x, float y) { this->x = x; this->y = y; }
    };
}

#endif