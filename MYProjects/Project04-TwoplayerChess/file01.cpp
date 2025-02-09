#include<bits/stdc++.h>
using namespace std;


char ChessBlocks[8][8] = {{'H','K','B','Q','!','B','K','H'}, {'P','P','P','P','P','P','P','P'}, {' ',' ',' ',' ',' ',' ',' ',' '}, {' ',' ',' ',' ',' ',' ',' ',' '}, {' ',' ',' ',' ',' ',' ',' ',' '}, {' ',' ',' ',' ',' ',' ',' ',' '}, {'P','P','P','P','P','P','P','P'}, {'H','K','B','Q','!','B','K','H'}};


class ChessBoard 
{
    private:
        int a;
        int b;
    public:
        void display_board(){
            cout << "_______________________________________________________________________\n";
            cout << "||_|___a___|___b___|___c___|___d___|___e___|___f___|___g___|___h___|_||\n";    
            cout << "|| |       |       |       |       |       |       |       |       | ||\n";
            cout << "||1|   "<< ChessBlocks[0][0] << "   |   " << ChessBlocks[0][1] << "   |   " << ChessBlocks[0][2] << "   |   " << ChessBlocks[0][3] << "   |   " << ChessBlocks[0][4] << "   |   " << ChessBlocks[0][5] << "   |   " << ChessBlocks[0][6] << "   |   " << ChessBlocks[0][7] << "   |1||\n";
            cout << "++-+-------+-------+-------+-------+-------+-------+-------+-------+-++\n";
            cout << "|| |       |       |       |       |       |       |       |       | ||\n";
            cout << "||2|   "<< ChessBlocks[1][0] << "   |   " << ChessBlocks[1][1] << "   |   " << ChessBlocks[1][2] << "   |   " << ChessBlocks[1][3] << "   |   " << ChessBlocks[1][4] << "   |   " << ChessBlocks[1][5] << "   |   " << ChessBlocks[1][6] << "   |   " << ChessBlocks[1][7] << "   |2||\n";
            cout << "++-+-------+-------+-------+-------+-------+-------+-------+-------+-++\n";
            cout << "|| |       |       |       |       |       |       |       |       | ||\n";
            cout << "||3|   "<< ChessBlocks[2][0] << "   |   " << ChessBlocks[2][1] << "   |   " << ChessBlocks[2][2] << "   |   " << ChessBlocks[2][3] << "   |   " << ChessBlocks[2][4] << "   |   " << ChessBlocks[2][5] << "   |   " << ChessBlocks[2][6] << "   |   " << ChessBlocks[2][7] << "   |3||\n";
            cout << "++-+-------+-------+-------+-------+-------+-------+-------+-------+-++\n";
            cout << "|| |       |       |       |       |       |       |       |       | ||\n";
            cout << "||4|   "<< ChessBlocks[3][0] << "   |   " << ChessBlocks[3][1] << "   |   " << ChessBlocks[3][2] << "   |   " << ChessBlocks[3][3] << "   |   " << ChessBlocks[3][4] << "   |   " << ChessBlocks[3][5] << "   |   " << ChessBlocks[3][6] << "   |   " << ChessBlocks[3][7] << "   |4||\n";
            cout << "++-+-------+-------+-------+-------+-------+-------+-------+-------+-++\n";
            cout << "||5|   "<< ChessBlocks[4][0] << "   |   " << ChessBlocks[4][1] << "   |   " << ChessBlocks[4][2] << "   |   " << ChessBlocks[4][3] << "   |   " << ChessBlocks[4][4] << "   |   " << ChessBlocks[4][5] << "   |   " << ChessBlocks[4][6] << "   |   " << ChessBlocks[4][7] << "   |5||\n";
            cout << "|| |       |       |       |       |       |       |       |       | ||\n";
            cout << "++-+-------+-------+-------+-------+-------+-------+-------+-------+-++\n";
            cout << "||6|   "<< ChessBlocks[5][0] << "   |   " << ChessBlocks[5][1] << "   |   " << ChessBlocks[5][2] << "   |   " << ChessBlocks[5][3] << "   |   " << ChessBlocks[5][4] << "   |   " << ChessBlocks[5][5] << "   |   " << ChessBlocks[5][6] << "   |   " << ChessBlocks[5][7] << "   |6||\n";
            cout << "|| |       |       |       |       |       |       |       |       | ||\n";
            cout << "++-+-------+-------+-------+-------+-------+-------+-------+-------+-++\n";
            cout << "||7|   "<< ChessBlocks[6][0] << "   |   " << ChessBlocks[6][1] << "   |   " << ChessBlocks[6][2] << "   |   " << ChessBlocks[6][3] << "   |   " << ChessBlocks[6][4] << "   |   " << ChessBlocks[6][5] << "   |   " << ChessBlocks[6][6] << "   |   " << ChessBlocks[6][7] << "   |7||\n";
            cout << "|| |       |       |       |       |       |       |       |       | ||\n";
            cout << "++-+-------+-------+-------+-------+-------+-------+-------+-------+-++\n";
            cout << "||8|   "<< ChessBlocks[7][0] << "   |   " << ChessBlocks[7][1] << "   |   " << ChessBlocks[7][2] << "   |   " << ChessBlocks[7][3] << "   |   " << ChessBlocks[7][4] << "   |   " << ChessBlocks[7][5] << "   |   " << ChessBlocks[7][6] << "   |   " << ChessBlocks[7][7] << "   |8||\n";
            cout << "|| |_______|_______|_______|_______|_______|_______|_______|_______|_||\n";
            cout << "||_|   a   |   b   |   c   |   d   |   e   |   f   |   g   |   h   |_||\n";    
        }
        void displayNewBoard(){
            cout << "___________________________________________\n";
            cout << "||___|_a_|_b_|_c_|_d_|_e_|_f_|_g_|_h_|___||\n";    
            cout << "||_1_|_H_|_K_|_B_|_Q_|_K_|_B_|_K_|_H_|_1_||\n";
            cout << "||_2_|_P_|_P_|_P_|_P_|_P_|_P_|_P_|_P_|_2_||\n";
            cout << "||_3_|___|___|___|___|___|___|___|___|_3_||\n";
            cout << "||_4_|___|___|___|___|___|___|___|___|_4_||\n";
            cout << "||_5_|___|___|___|___|___|___|___|___|_5_||\n";
            cout << "||_6_|___|___|___|___|___|___|___|___|_6_||\n";
            cout << "||_7_|_P_|_P_|_P_|_P_|_P_|_P_|_P_|_P_|_7_||\n";
            cout << "||_8_|_H_|_K_|_B_|_K_|_Q_|_B_|_K_|_H_|_8_||\n";
            cout << "||___|_a_|_b_|_c_|_d_|_e_|_f_|_g_|_h_|___||\n";
        }
};


int main()
{

    /*code*/
    ChessBoard ob;
    ob.display_board();
    ob.displayNewBoard();


    return 0;

}