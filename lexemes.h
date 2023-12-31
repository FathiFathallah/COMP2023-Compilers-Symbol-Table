#pragma once
#include <string>


typedef enum {
	/* LITERALS */
	LX_IDENTIFIER, LX_INTEGER, LX_STRING, LX_FLOAT,
	/* KEYWORDS */
	KW_PROGRAM,
	KW_VAR, KW_CONSTANT, KW_INTEGER, KW_BOOLEAN, KW_STRING, KW_FLOAT,
	KW_DOUBLE,
	KW_CHAR,
	KW_TRUE, KW_FALSE, KW_IF, KW_FI, KW_THEN, KW_ELSE,
	KW_WHILE, KW_DO, KW_OD,
	KW_AND, KW_OR,
	KW_READ, KW_WRITE,
	KW_FOR, KW_FROM, KW_TO, KW_BY,
	KW_FUNCTION, KW_PROCEDURE, KW_RETURN, KW_NOT, KW_BEGIN, KW_END,
	/* OPERATORS */
	LX_LPAREN, LX_RPAREN, LX_LCBRACKET, LX_RCBRACKET, LX_LBRACKET, LX_RBRACKET,
	LX_COLON, LX_DOT, LX_SEMICOLON, LX_COMMA, LX_COLON_EQ,
	LX_PLUS, LX_MINUS, LX_STAR, LX_SLASH,
	LX_EQ, LX_NEQ, LX_LT, LX_LE, LX_GT, LX_GE, LX_NOT, LX_EOF,
	/* EXTRA */
	LX_ILLEGAL, LX_WHITE_SPACE, LX_COMMENT, LX_ERROR
} LEXEME_TYPE;



typedef enum { DIGIT, DOT, NEGATIVE, ID_START, DOUBLE_QUOTE, EOC, EOL, COMMENT, DEFAULT } CHARACTER_TYPE;

typedef enum { UNRECONIZED_WORD, ILLEGAL_ID, BAD_FP_NUMBER, BAD_STRING, BAD_VARIABLE_DECLARING } ERROR_TYPE;







