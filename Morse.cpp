#include <iostream>
#include <string>

using namespace std;

//Definizione stati
#define START 0
#define A 65
#define B 66
#define C 67
#define D 68
#define E 69
#define F 70
#define G 71
#define H 72
#define I 73
#define J 74
#define K 75
#define L 76
#define M 77
#define N 78
#define O 79
#define P 80
#define Q 81
#define R 82
#define S 83
#define T 84
#define U 85
#define V 86
#define W 87
#define X 88
#define Y 89
#define Z 90
#define ERROR 33
#define SPACE 32
#define SPAZIO_PAROLA 47

bool checkPoint(string s){return (s == ".");}

bool checkDash(string s){return (s == "-");}

bool checkSpace(string s){return (s == " ");}


string automa(){

    string morseCode;
    string code("");
    int state = 0;
    morseCode = getchar();

    while (morseCode != "\n"){
      
        switch (state){

        case START:
            if (checkPoint(morseCode))
                state = E;
            else if (checkDash(morseCode))
                state = T;
            else
              state = ERROR;
            break;

        case A:
            if (checkPoint(morseCode))
                state = R;
            else if (checkDash(morseCode))
                state = W;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }
            else
              state = ERROR;
            break;

        case B:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){ 
                code.append(1, char(state));
                state = SPACE;
            }
            else
              state = ERROR;
            break;

        case C:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }   
            else
              state = ERROR;          
            break;

        case D:
            if (checkPoint(morseCode))
                state = B;
            else if (checkDash(morseCode))
                state = X;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }
            else
              state = ERROR;          
            break;

        case E:
            if (checkPoint(morseCode))
                state = I;
            else if (checkDash(morseCode))
                state = A;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }
            else
              state = ERROR;
          break;

        case F:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }     
            else
              state = ERROR;         
            break;

        case G:
            if (checkPoint(morseCode))
                state = Z;
            else if (checkDash(morseCode))
                state = Q;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }  
            else
              state = ERROR;          
            break;

        case H:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }      
            else
              state = ERROR;          
            break;

        case I:
            if (checkPoint(morseCode))
                state = S;
            else if (checkDash(morseCode))
                state = U;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }   
            else
              state = ERROR;          
            break;

        case J:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }
            else
              state = ERROR;         
            break;

        case K:
            if (checkPoint(morseCode))
                state = C;
            else if (checkDash(morseCode))
                state = Y;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }   
            else
              state = ERROR;          
            break;

        case L:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }  
            else
              state = ERROR;         
            break;

        case M:
            if (checkPoint(morseCode))
                state = G;
            else if (checkDash(morseCode))
                state = O;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            } 
            else
              state = ERROR;          
            break;

        case N:
            if (checkPoint(morseCode))
                state = D;
            else if (checkDash(morseCode))
                state = K;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            } 
            else
              state = ERROR;          
            break;

        case O:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            } 
            else
              state = ERROR;          
            break;

        case P:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }    
            else
              state = ERROR;          
            break;

        case Q:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }     
            else
              state = ERROR;          
            break;

        case R:
            if (checkPoint(morseCode))
                state = L;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }   
            else
              state = ERROR;          
            break;

        case S:
            if (checkPoint(morseCode))
                state = H;
            else if (checkDash(morseCode))
                state = V;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }   
            else
              state = ERROR;          
            break;

        case T:
            if (checkPoint(morseCode))
                state = N;
            else if (checkDash(morseCode))
                state = M;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }   
            else
              state = ERROR;          
            break;

        case U:
            if (checkPoint(morseCode))
                state = F;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }    
            else
              state = ERROR;
            break;

        case V:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }   
            else
              state = ERROR;          
            break;

        case W:
            if (checkPoint(morseCode))
                state = P;
            else if (checkDash(morseCode))
                state = J;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }  
            else
              state = ERROR;          
            break;

        case X:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }
            else
              state = ERROR;          
            break;

        case Y:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }   
            else
              state = ERROR;          
            break;

        case Z:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }    
            else
              state = ERROR;          
            break;

        case ERROR:
            code = "Syntax error";
            
            break;

        case SPACE:
            if (checkPoint(morseCode))
                state = E;
            else if (checkDash(morseCode))
                state = T;
            else if(morseCode == "/"){
              code.append(1, char(state));
              state = SPAZIO_PAROLA;           
              }
            else
              state = ERROR;          
            break;

        case SPAZIO_PAROLA:
            if (checkPoint(morseCode))
                state = E;
            else if (checkDash(morseCode))
                state = T;          
            break;
        
        }
        morseCode = getchar();
    }

    return code.append(1, char(state));
}

int main(void){
 
    cout << "Type your message here: ";
    cout << "Output: " << automa() << endl;
    
    return 0;
}

