#include <iostream>

void fill_pup(bool pup[][12]);
void show_pup(bool pup[][12]);

int main()
{
    bool pup[12][12];
    fill_pup(pup);
    show_pup(pup);
    std::cout << "Hello World!\n";
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

void show_pup(bool pup[][12])
{
    char pupChar[12][12];
    int counterO = 0;
    int counterX = 0;
    for (int i = 0; i < 12; ++i)
    {
        for (int j = 0; j < 12; ++j)
        {
            if (pup[i][j] == true)
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
    if (counterO == 0)
    {
        for (int i = 0; i < counterX; i++)
        {
            std::cout << "Pup!" << std::endl;
        }
        std::cout << "Game Over!\n";

    }
    else
    {
        for (int i = 0; i < counterX; i++)
        {
            std::cout << "Pup!" << std::endl;
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
}
