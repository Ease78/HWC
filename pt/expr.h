#ifndef __PARSE_TREE__EXPR_H__INCLUDED__
#define __PARSE_TREE__EXPR_H__INCLUDED__


typedef struct PT_expr      PT_expr;


enum {
	EXPR_IDENT = 1,
};

struct PT_expr
{
	/* choose from the enum above */
	int mode;

	/* EXPR_IDENT */
	char *name;
};


#endif

