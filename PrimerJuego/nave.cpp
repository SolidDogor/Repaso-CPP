#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<list>
using namespace std;

#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

void gotoxy(int x, int y){
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;

    SetConsoleCursorPosition(hCon, dwPos);
}

void OcultarCurso(){
	HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = 1;
    cci.bVisible = false;
    
    SetConsoleCursorInfo(hCon,&cci);
}

void pintarLimites(){
	for(int i = 2; i < 78; i++){
		gotoxy(i,3);	printf("%c",205);
		gotoxy(i,33);	printf("%c",205);
	}
	for(int i = 4; i < 33; i++){
		gotoxy(1,i);	printf("%c",186);
		gotoxy(78,i);	printf("%c",186);
	}
	
	gotoxy(1,3);	printf("%c",201);
	gotoxy(1,33);	printf("%c",200);
	gotoxy(78,3);	printf("%c",187);
	gotoxy(78,33);	printf("%c",188);
}

class NAVE{
	int x, y;
	int corazones;
	int vidas;
public:
	NAVE(int _x, int _y, int _corazones, int _vidas): x(_x),y(_y),corazones(_corazones),vidas(_vidas) {}
	int X() {return x;}
	int Y() {return y;}
	int VID() {return vidas;}
	void COR() {corazones--;}
	void pintar();
	void borrar();
	void mover();
	void pintarCorazones();
	void morir();
};

void NAVE::pintar(){
	gotoxy(x,y); 	printf("  %c",30);
	gotoxy(x,y+1); 	printf(" %c%c%c",40,207,41);
	gotoxy(x,y+2); 	printf("%c%c %c%c",30,190,190,30);
}

void NAVE::borrar(){
	gotoxy(x,y); 	printf("        ");
	gotoxy(x,y+1); 	printf("        ");
	gotoxy(x,y+2); 	printf("        ");
}

void NAVE::mover(){
	if(kbhit()){
    	char tecla = getch();	//Se guarda la letra que se presione y se pasa a la variable tecla
    	borrar();
    	if(tecla == IZQUIERDA && x > 2) x--;
    	if(tecla == DERECHA && x+6 < 78)x++;
    	if(tecla == ARRIBA && y > 4) 	y--;
    	if(tecla == ABAJO && y+3 < 33) 	y++;
    	if(tecla == 'e') corazones--;
    	pintar();
    	pintarCorazones();
	}
}

void NAVE::pintarCorazones(){
	gotoxy(50,2);	printf("VIDAS %d",vidas);
	gotoxy(64,2);	printf("Salud");
	gotoxy(70,2);	printf("     ");
	for(int i = 0; i < corazones; i++){
		gotoxy(70+i,2);	printf("%c",3);
	}
}

void NAVE::morir(){
	if(corazones == 0){
		borrar();
		gotoxy(x,y);	printf("   **   ");
		gotoxy(x,y+1);	printf("  ****  ");
		gotoxy(x,y+2);	printf("   **   ");
		Sleep(200);
		
		borrar();
		gotoxy(x,y);	printf(" * ** * ");
		gotoxy(x,y+1);	printf("  ****  ");
		gotoxy(x,y+2);	printf(" * ** * ");
		Sleep(200);
		borrar();
		
		vidas--;
		corazones = 3;
		pintarCorazones();
		pintar();
	}
}

class AST{
	int x,y;
public:
	AST(int _x,int _y): x(_x),y(_y) {}
	int X(){return x;}
	int Y() {return y;}
	void pintar();
	void mover();
	void choque(NAVE &N);
};

void AST::pintar(){
	gotoxy(x,y);	printf("%c",184);
}

void AST::mover(){
	gotoxy(x,y);	printf(" ");
	y++;
	if(y > 32) {
		x = rand()%71 + 4;
		y = 4;
	}
	pintar();
}

void AST::choque(NAVE &N){
	if(x >= N.X() && x < N.X()+6 && y >= N.Y() && y <= N.Y()+2){
		N.COR();
		N.pintar();
		N.pintarCorazones();
		x = rand()%71 + 4;
		y = 4;
	}
}

class BALA{
	int x,y;
public:
	BALA(int _x, int _y):x(_x),y(_y){}
	int X(){return x;}
	int Y() {return y;}
	void mover();
	bool fuera();
};

void BALA::mover(){
	gotoxy(x,y);	printf(" ");
	y--;
	gotoxy(x,y);	printf("*");
}

bool BALA::fuera(){
	if(y == 4)	return true;
	return false;
}

int main(){
	OcultarCurso();
	pintarLimites();
	NAVE N(37,30,3,3);
	N.pintar();
	N.pintarCorazones();
	
	list<AST*> A;
	list<AST*>::iterator itA;
	for(int i = 0; i < 5; i++){
		A.push_back(new AST(rand()%75 + 3, rand()%5 + 4));
	}
	
	list<BALA*> B;
	list<BALA*>::iterator itB;
	
	bool game_over = false;
	int puntos = 0;
    while(!game_over){
    	
    	gotoxy(4,2);	printf("PUNTOS %d",puntos);
    	if(kbhit()){
    		char tecla = getch();
    		if(tecla == 'a') B.push_back(new BALA(N.X() + 2 , N.Y() - 1));
		}
    	
    	for(itB = B.begin(); itB != B.end(); itB++){
    		(*itB)->mover();
    		if((*itB)->fuera()){
    			gotoxy((*itB)->X(),(*itB)->Y());	printf(" ");
    			delete(*itB);
    			itB = B.erase(itB);	//Quitar un elemento e igualarlo al que sigue en lista
			}
		}
    	
    	for(itA = A.begin(); itA != A.end(); itA++){
    		(*itA)->mover();
    		(*itA)->choque(N);
		}
		
		for(itA = A.begin(); itA != A.end(); itA++){
			for(itB = B.begin(); itB != B.end(); itB++){
				if((*itA)->X() == (*itB)->X() && ((*itA)->Y() + 1 == (*itB)->Y() || (*itA)->Y() == (*itB)->Y())){
					gotoxy((*itB)->X(),(*itB)->Y());	printf(" ");
    				delete(*itB);
    				itB = B.erase(itB);
    				
    				A.push_back(new AST(rand()%74 + 3, 4));
    				gotoxy((*itA)->X(),(*itA)->Y());	printf(" ");
    				delete(*itA);
    				itA = A.erase(itA);
    				
    				puntos+=5;
				}
			}
		}
		if(N.VID() == 0){
			game_over == true;
		}
    	N.morir();
    	N.mover();
    	Sleep(30);	//Para evitar que se sature el procesador
    	
	}
	
	
    return 0;
}
