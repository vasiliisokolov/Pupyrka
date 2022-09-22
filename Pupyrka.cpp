#include <iostream>
#include<tuple>

void fill_pup(bool pup[][12]);
std::tuple<int, int> show_pup(bool pup[][12]);
void smash_pup(bool pup[][12], int, int);

int main()
{
    bool pup[12][12];
    int counterO;
    int counterX = 0;
    int firstCorner, secondCorner;
    std::cout << "Let's play!" << std::endl;
    fill_pup(pup);
    do
    {
        for (int i = 0; i < counterX; i++)
        {
            std::cout << "Pup!" << std::endl;
        }
        std::tie(counterO, counterX) = show_pup(pup);
        std::cout << "Enter two corners of the pressing area:\n";
        std::cin >> firstCorner >> secondCorner;
        smash_pup(pup, firstCorner, secondCorner);
        std::cout << counterO;
    } while (counterO > 0);
}

void fill_pup(bool pup[][12])
{
    for (int i = 0; i < 12; ++i)
    {
        for (int j = 0; j < 12; ++j)
        {
            pup[i][j] = true;
        }
        
    }
}

std::tuple<int, int> show_pup(bool pup[][12])
{
    char pupChar[12][12];
    int counterO = 0;
    int counterX = 0;
    for (int i = 0; i < 12; ++i)
    {
        for (int j = 0; j < 12; ++j)
        {
            if (pup[i][j])
            {
                pupChar[i][j] = 'o';
                counterO++;
            }
            else
            {
                pupChar[i][j] = 'x';
                counterX++;
            }
        }
        
    }
    for (int i = 0; i < 12; ++i)
    {
            for (int j = 0; j < 12; ++j)
            {
                std::cout << pupChar[i][j] << " ";
            }
            std::cout << std::endl;
    }
    
    return std::make_tuple(counterO, counterX);
}

void smash_pup(bool pup[][12], int firstCorner, int secondCorner)
{
    for (int i = firstCorner; i < secondCorner; i++)
    {
        for (int j = firstCorner; j < secondCorner; j++)
        {
            pup[i][j] = false;
        }
    }

}
