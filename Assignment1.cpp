#include<iostream>
using namespace std;

long long int BinaryToDecimal(long long int Num){
    long long int Result = 0; int count = 1;
    
    while (Num != 0){
        int Temp2Pow = 1;
        if ((Num % 10) != 0){
            for (int i = 1; i < count; i++){
                Temp2Pow = Temp2Pow * 2;
            }
            Result = Result + Temp2Pow; count++;
        } else
            count++;
        Num = Num / 10;
    }
    return Result;
}

// Decimal to binary
void DecimalToBinary(int X){
    int Remainders[31]; int count = 0;

    while (X != 0){
        Remainders[count] = X % 2;
        X = X / 2; count++; 
    }
    for (int i = (count - 1); i >= 0; i--){
        cout<<Remainders[i];
    }
    cout<<endl;
}

void identify(char c){
    if((char(c) >= 65 && char(c) <= 90) || (char(c) >= 97 && char(c) <= 122) ) cout<<"Aplhabet\n";
    else if (char(c) >= 48 && char(c) <= 57) cout<<"DIgit\n";
    else cout<<"Special Character\n";
}

int reverse(int num){
    int ans = 0;
    while(num){
        ans *= 10; ans += num % 10; num /= 10;
    }
    return ans;
}

bool palindroneNum(int num){
    int rev = reverse(num);
    if(num == rev) return true;
    return false;
}

void matrixM(void){
    int R1, C1;
    cout<<"Enter the number of rows and colums in your matrix one :";
    cin>>R1>>C1;
    int Array1[R1][C1];
    
    cout<<"\nEnter your elements now\n";  // Taking first matrix input
    for (int I11 = 0; I11 < R1; I11++){
        for (int I12 = 0; I12 < C1; I12++){
            cin>>Array1[I11][I12];
        }
    }
    

    cout<<"This is the matrix you entered\n"; // Printing out first matrix 
    for (int O11 = 0; O11 < R1; O11++){
        for (int O12 = 0; O12 < C1; O12++){
            cout<<Array1[O11][O12]<<"     ";
        } cout<<endl;
    }
    
    int R2, C2;
    cout<<"Enter the number of rows and colums in your matrix two :";
    cin>>R2>>C2;
    int Array2[R2][C2];


    cout<<"\nEnter your elements now\n";  // Taking second matrix input
    for (int I21 = 0; I21 < R2; I21++){
        for (int I22 = 0; I22 < C2; I22++){
            cin>>Array2[I21][I22];
        }
    }

    cout<<"This is the matrix you entered\n"; // Printing out second matrix 
    for (int O21 = 0; O21 < R2; O21++){
        for (int O22 = 0; O22 < C2; O22++){
            cout<<Array2[O21][O22]<<"     ";
        }
        cout<<endl;
    }

    int RArray[R1][C2];

    if (C1 != R2) { // Checking if multiplication can be done or not
        cout<<"Matrix multiplication CANNOT BE DONE :/\n";
        int KillTime2;
        cin>>KillTime2;
        return;
    } else {          // Multiplying if possible 
        for (int M1 = 0; M1 < R1; M1++)                 // Multiplicatioon{
            for ( int M2 = 0; M2 < C2; M2++){
                int TempSum = 0;
                int TempVal = 0;
                int Ele2 = 0;
                for (int Ele1 = 0; Ele1 < C1; Ele1++){
                    int TempEle1 = Array1[M1][Ele1];
                    TempVal = TempEle1;   
                    for (Ele2; Ele2 < R2; Ele2++){
                        int TempEle2 = Array2[Ele2][M2];
                        TempVal = TempVal * TempEle2;
                        TempSum = TempSum + TempVal;
                        Ele2++;
                        break;
                    }
                    RArray[M1][M2] = TempSum;
                }   
            }       
        }
    
    cout<<"---------GENERATING OUTPUT-------------"<<endl;
    for (int FO1 = 0; FO1 < R1; FO1++){
        for (int FO2 = 0; FO2 < C2; FO2++){
            cout<<RArray[FO1][FO2]<<"     ";
        }
        cout<<endl;
    }
}

void swapNum(int &a, int &b){
    swap(a, b);

}

int main()
{
    // identify('a');
    // cout<<palindroneNum(543212345);
    matrixM();
    return 0;

}