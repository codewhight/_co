// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/04/Fill.asm

// Runs an infinite loop that listens to the keyboard input.
// When a key is pressed (any key), the program blackens the screen,
// i.e. writes "black" in every pixel;
// the screen should remain fully black as long as the key is pressed. 
// When no key is pressed, the program clears the screen, i.e. writes
// "white" in every pixel;
// the screen should remain fully clear as long as no key is pressed.

// Put your code here.

@24575 //初始化
D=A
@0
M=D
@SCREEN
D=A
@1
M=D
@1 //螢幕清空
A=M
M=0
D=A+1
@1
M=D
@0
D=D-M
@8
D;JLE
@32
0;JMP
@1 //螢幕填滿
A=M
M=-1
D=A+1
@1
M=D
@0
D=D-M
@20
D;JLE
@32
0;JMP
@24575 //初始化
D=A
@0
M=D
@SCREEN
D=A
@1
M=D
@24576 //鍵盤偵測
D=M
@8
D;JEQ
@20
0;JMP
        

    