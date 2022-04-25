/*
* main.c
* progrmmer – 정수진
* date - 2022/04/14.
*/
#include <stdio.h>
#include <stdlib.h>
#include "tn.h"
#include "glob.h"
extern yylex();
extern char *yytext;

void main()
{
	enum tokentypes tn;  // token number
		
	while  ((tn = yylex()) != TEOF) {
		printtoken(tn);
	}
}

void printtoken(enum tokentypes tn){
    switch (tn) {
	        case TCONST : printf("TCONST  %22s\n", yytext); break;
	        case TELSE : printf("TELSE  %22s\n", yytext); break;
	        case TIF : printf("TIF  %22s\n", yytext); break;
	        case TINT : printf("TINT  %22s\n", yytext); break;
	        case TRETURN : printf("TRETURN  %22s\n", yytext); break;
	        case TVOID : printf("TVOID  %22s\n", yytext); break;
	        case TWHILE : printf("TWHILE %22s\n", yytext); break;
	        case TEQUAL : printf("TEQUAL   %19s\n", yytext); break;
	        case TNOTEQU : printf("TNOTEQU  %19s\n", yytext); break;
	        case TLESS : printf("TLESS   %19s\n", yytext); break;
	        case TGREAT : printf("TGREAT   %19s\n", yytext); break;
	        case TAND : printf("TAND  %21s\n", yytext); break;
	        case TOR : printf("TOR   %21s\n", yytext); break;
	        case TINC : printf("TINC   %21s\n", yytext); break;
	        case TDEC : printf("TDEC   %21s\n", yytext); break;
	        case TADDASSIGN : printf("TADDASSIGN  %16s\n", yytext); break;
	        case TSUBASSIGN : printf("TSUBASSIGN  %16s\n", yytext); break;
	        case TMULASSIGN : printf("TMULASSIGN  %16s\n", yytext); break;
	        case TDIVASSIGN : printf(" TDIVASSIGN  %16s\n", yytext); break;
	        case TMODASSIGN : printf("TMODASSIGN  %16s\n", yytext); break;
	        case TIDENT : printf("TIDENT  %16s\n", yytext); break;
	        // case TNUMBER : printf("TNUMBER   %18d\n", atoi(yytext)); break;
		    case TNUMBER : printf("TNUMBER   %18s\n", yytext); break;
	        case TERROR : break;	        	        
		}
}
