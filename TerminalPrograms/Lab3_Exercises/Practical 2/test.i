# 1 "test.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "test.c"
# 1 "head.h" 1
extern int x;
# 2 "test.c" 2


int add(int x, int y);
void main(){
 int x = 25;
 int y = 35;
 int result = add(x,y);
 int x2 = (x+x);
 int y2 = (y+y);
 int z = 256 + 5;
}
int add(int x, int y){
 int result = x+y;
 return result;
}
