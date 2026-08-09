#pragma once

class Vec2 {
public:
    Vec2(float x, float y);

    float x() const;
    float y() const;
    float length() const;
    Vec2 plus(const Vec2& other) const;

    void setX(float value);
    void setY(float value);

private:
    float m_x;
    float m_y;
};
