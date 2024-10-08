#pragma once

class Vec2
{
public:
	Vec2() = default;
	Vec2(float x_in, float y_in);
	Vec2 operator+(const Vec2& rhs) const;
	Vec2& operator+=(const Vec2& rhs);
	Vec2 operator*(float rhs) const;
	Vec2& operator*=(float rhs);
	Vec2 operator-(const Vec2& rhs) const;
	Vec2& operator-=(const Vec2& rhs);
	float GetLength() const;
	float GetLengthSq() const;
	Vec2& Normalize();
	Vec2 GetNormalized() const;
	int GetDotProduct(const Vec2& a, const Vec2& b);
	int GetNormalizedDotProduct(const Vec2& a, const Vec2& b);
public:
	float x;
	float y;
};