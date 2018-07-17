#include<iostream>
#include<unordered_set>
void printAllPairSums(int values[], int size, int sum)
{
    int i;
    std::unordered_set<int> hash;
    for(i=0;i<size;i++)
    {
        hash.insert(sum-values[i]);
        if(hash.find(values[i])!=hash.end())
            std::cout<<(sum - values[i])<<" - "<<values[i]<<std::endl;
    }
}

int main()
{
    int values[] = {1, 2, 3, 8, 7, 4, 10, 9};
    int sum = 14;
    printAllPairSums(values, 8, sum);
    return 0;
}
