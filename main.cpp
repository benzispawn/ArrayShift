#include <iostream>
#include <vector>

//using namespace std;

std::vector<int> solution(std::vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    std::cout << A << std::endl;
    std::vector<int> tmp = A;
    int qtd = A.size();
    int tmpVar;

    for (int x = 0; x < K; x++) 
    {
        tmpVar = tmp[qtd - 1];
        tmp.pop_back();
        tmp.insert(tmp.begin(), tmpVar);
        // if (K == x + 1) 
        // {
        //     std::cout << tmp << std::endl;
        // }
        //std::cout << x << std::endl;
    }


    return tmp;//std::vector<int> {0,0,0};
}

int main ()
{
    std::vector<int> inputA;
    inputA = {1,2,3,4,5};
    std::cout << inputA[inputA.size() - 1] << std::endl;
    int K = 1;
    solution(inputA, K);
    return 0;
}