#include<iostream>

void printMajorityElement(int values[], int size)
{
    int i, candidate = values[0], count = 1;
    for(i=1;i<size;i++)
    {
        if(values[i]==candidate)
            count++;
        else
            count--;
        if(count == 0)
        {
            candidate = values[i];
            count = 1;
        }
    }
    for(i=0;i<size;i++)
    {
        if(values[i] == candidate)
            count++;
    }
    if(count>=size/2)
        std::cout<<"Majority element is "<<candidate;
    else
        std::cout<<"No majority element found";
}

int main()
{
    int values[] = {1, 2, 3, 2, 2, 3, 2, 3, 3, 1, 1, 2, 2, 2};
    printMajorityElement(values, 14);
    return 0;
}
