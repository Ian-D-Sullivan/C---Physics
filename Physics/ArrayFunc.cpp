
#include <array>

using namespace std;

//array array

template <typename T, size_t N>
array<T, N>& operator+=(array<T, N>& left, const array<T, N>& right)
{
    for( size_t i = 0; i < N; ++i )
    {
        left[i] += right[i];
    }
    return left;
}

template <typename T, size_t N>
array<T, N>& operator-=(array<T, N>& left, const array<T, N>& right)
{
    for( size_t i = 0; i < N; ++i )
    {
        left[i] -= right[i];
    }
    return left;
}

template <typename T, size_t N>
array<T, N>& operator+(array<T, N>& left, const array<T, N>& right)
{
    array<T, N> sum;
    for( size_t i = 0; i < N; ++i )
    {
        sum[i] = left[i] + right[i];
    }
    return sum;
}

template <typename T, size_t N>
array<T, N>& operator-(array<T, N>& left, const array<T, N>& right)
{
    array<T, N> sum;
    for( size_t i = 0; i < N; ++i )
    {
        sum[i] = left[i] - right[i];
    }
    return sum;
}

template <typename T, size_t N>
size_t operator*(array<T, N>& left, const array<T, N>& right)
{
    size_t sum = 0;
    for( size_t i = 0; i < N; ++i )
    {
        sum += left[i] * right[i];
    }
    return sum;
}

//array float

template <typename T, size_t N>
array<T, N>& operator*=(array<T, N>& left, const size_t right)
{
    for( size_t i = 0; i < N; ++i )
    {
        left[i] *= right;
    }
    return left;
}

template <typename T, size_t N>
array<T, N>& operator/=(array<T, N>& left, const size_t right)
{
    for( size_t i = 0; i < N; ++i )
    {
        left[i] /= right;
    }
    return left;
}

template <typename T, size_t N>
array<T, N>& operator*(array<T, N>& left, const size_t right)
{
    array<T, N> result;
    for( size_t i = 0; i < N; ++i )
    {
        result[i] = left[i] * right;
    }
    return result;
}

template <typename T, size_t N>
array<T, N>& operator/(array<T, N>& left, const size_t right)
{
    array<T, N> result;
    for( size_t i = 0; i < N; ++i )
    {
        result[i] = left[i] / right;
    }
    return result;
}