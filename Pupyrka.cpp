#include <iostream>
#include<tuple>

void fill_pup(bool pup[][12]);
void show_pup(bool pup[][12], char pupChar[][12]);
int smash_pup(bool pup[][12], int, int);

int main()
{
    bool pup[12][12];
    char pupChar[12][12];
    int counterX = 0;
    int firstCorner, secondCorner;
    std::cout << "Let's play!" << std::endl;
    fill_pup(pup);
    for(int counterO = 144; counterO > 0; counterO - counterX)
    {
        show_pup(pup, pupChar);
        std::cout << "Enter two corners of the pressing area:\n";
        std::cin >> firstCorner >> secondCorner;
        counterX = smash_pup(pup, firstCorner, secondCorner);
        for (int i = 0; i < counterX; i++)
        {
            std::cout << "Pup!" << std::endl;
        }
    } 
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

void show_pup(bool pup[][12], char pupChar[][12])
{
    for (int i = 0; i < 12; ++i)
    {
        for (int j = 0; j < 12; ++j)
        {
            if (pup[i][j])
            {
                pupChar[i][j] = 'o';
            }
            else
            {
                pupChar[i][j] = 'x';
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
    
}

int smash_pup(bool pup[][12], int firstCorner, int secondCorner)
{
    int counterX = 0;
    for (int i = firstCorner; i < secondCorner; i++)
    {
        for (int j = firstCorner; j < secondCorner; j++)
        {
            if (pup[i][j])
            {
                pup[i][j] = false;
                counterX++;
            }
        }
    }
    return counterX;
}
