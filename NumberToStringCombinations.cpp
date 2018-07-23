#include<iostream>
int main()
{
    char input[] = "12121";
    int i = 0, size = 5;
    int possibilities[size] = {0};
    if(input[size-1]!='0')
        possibilities[size-1] = 1;
    for(i = size-2;i>=0;i--)
    {
        //initialize to next index value(since there always exists possibility with single character)
        if(i+1<size && input[i]!='0')
            possibilities[i] = possibilities[i+1];
        //For double character, add 2nd index to the right if feasible
        if((i+1<size) && (input[i]=='1' || (input[i] == '2' && input[i+1]>='0' && input[i+1] <='6')))
            possibilities[i] += i+2<size ? possibilities[i+2] : 1;
    }
    std::cout<<possibilities[0];
}
