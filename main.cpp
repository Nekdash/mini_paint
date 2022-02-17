#include <iostream>
#include <vector>

using namespace std;

int absi(int a){
if(a < 0)
    return a*(-1);
    return a;
}

void background (vector<vector<char>> & field, int width, int height, char background_char){
    for (int i =0;i < height; i++){
        for(int j =0; j < width; j++){
            field[i][j] = background_char;
        }
    }
}

void r(vector<vector<char>> & field, int x, int y, int width, int height, char ch){
    for ( int i = 0; i < height; i++ ){
        for ( int j =0; j < width; j++ ){
            if (i == 0){
               field[y][x + j] = ch;
            }else if(i = height - 1){
                field[y + i][x + j] = ch;
            }
            else if(j == 0){
                field[y + i][x] = ch;
            }else if (j == width - 1){
                field[y + i][x + j] = ch;
            }}}}


void R(vector<vector<char>> & field, int x, int y, int width, int height, char ch){
    for(int i =0; i < height; i++){
        for(int j =0; j< width; j++){
            field[y+i][x+j] = ch;
        }
    }
}

void c(vector<vector<char>> & field, int x0, int y0, int rad, char ch){
    int x, y = radius;
}

void L(vector<vector<char>> & field, int x, int y, int x1, int y1, char ch){
    int tp;
    if ( x1 < x){
        tp =x;
        x = x1;
        x1 = tp;
    }
    if ( y1 < y){
        tp = y;
        y = y1;
        y1 = tp;
    }

    int dx = x1 - x;
    int dy = y1 - y;


    for( int i =0; i <dy1; i++){
        field[y + i][x + dx*i] = ch;
    }

}

int main()
{
    int width, height;
    vector<vector<char>> field;
    return 0;
}
