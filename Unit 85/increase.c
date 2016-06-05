void increase(int *a, int *b, int *x)
{
    *a += *x;   // x를 역참조하여 가져온 값만큼 *a를 역참조하여 값을 증가시킴
    *b += *x;   // x를 역참조하여 가져온 값만큼 *b를 역참조하여 값을 증가시킴
}

int main()
{
    {
        int a = 1;
        increase(&a, &a, &a);   // &a, &a, &a는 같은 공간을 가리킴
    }

    {
        int a = 1;
        int b = 1;
        int x = 1;
        increase(&a, &b, &x);   // &a, &b, &x는 다른 공간을 가리킴
    }

    return 0;
}
