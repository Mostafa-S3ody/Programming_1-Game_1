#include <iostream>

using namespace std;

int a [20] = {1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0};

int checker(int x){
    while(a[x-1]==-1){
        cout << "This number have been chosen already, please choose another number : ";
        cin >> x;
        cout<< endl;
    }
    return x;
}

int main(){
    bool m = true;
    while(m){
        int w;
        cout<< "Choose: \n1- Play new game.\n2- Instructions.\n";
        cin>> w;
        if(w == 1){
            int z = 0;
            int count = 0;
            string s = "";
            while(count < 20){
                int x = 0;
                int y = 0;
                for (int i=0; i<20 ; i++){
                    if(a[i] == -1){
                        cout<< "* ";
                    }
                    else{
                        cout << a[i] << " ";
                    }
                }
                if (z%2==0){
                        cout << endl << endl <<"\t\t\t\tPlayer 1's turn :" << endl;
                        s = "Player 1";
                    }
                else{
                    cout << endl << endl << "\t\t\t\tPlayer 2's turn :" << endl;
                    s = "Player 2";
                }
                cout << endl << "Do you want to choose one number or tow numbers ?" << endl << "Please choose by pressing 1 or 2" << endl;
                cin >> x;
                while(x!=1 && x!=2){
                    cout << "Wrong input" << endl << "Please choose by pressing 1 or 2" << endl;
                    cin >> x;
                }
                if (x == 1 || x == 2) {
                    if ( x == 1){
                        cout << endl << "choose a number : ";
                        cin >> x;
                        cout<< endl;
                        x = checker(x);
                    }
                    else {
                        cout << endl << "choose the first number : ";
                        cin >> x;
                        x = checker(x);
                        cout << endl << "choose the second number :";
                        cin >> y;
                        y = checker(y);
                        cout<< endl;
                    }
                }

                a[x-1] = -1;
                count++;
                if (y!=0){
                    a[y-1] = -1;
                    count++;
                }
                z++;
            }
            cout<< endl<< "\t\t"<< s <<" won."<<endl <<"\t\tCongratulations ^_^"<< endl;
            cout<< "Play again ?\n Y for yes, N for no"<<endl;
            string q = "";
            cin>> q;
            while(q!="n" && q!="N" && q!="y" && q!="Y"){
                cout<< "Play again ?\n Y for yes, N for no"<<endl;
                cin>> q;
            }
            if(q=="n" || q=="N"){
                m = false;
            }
        }
        else if(w == 2){
            cout << "Kayles game. This game begins with an arbitrary number of tokens in a single row.\nTwo players alternate turns. During a turn a player may remove either one or two adjacent tokens.\nThe player who removes the last token wins."<< endl;
    }
        else{
            cout<< "Wrong input"<<endl;
        }
    }
    return 0;
}
