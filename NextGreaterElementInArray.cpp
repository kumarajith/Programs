#include<iostream>
#include<set>
int main()
{
    int input[] = {6, 3, 9, 8, 10, 2, 1, 15, 7};
    int size = 9, i = 0;
    std::set<int> treeSet;
    for(i = 0;i<size;i++)
        treeSet.insert(input[i]);
    for(i=0;i<size;i++)
        if(treeSet.find(input[i])!=treeSet.end() && (++treeSet.find(input[i]))!=treeSet.end())
            std::cout<<*(++treeSet.find(input[i]))<<" ";
        else
            std::cout<<"$ ";
    return 0;
}
