/* Generated by re2c */
#line 1 "conditions/condtype_forwdecl.cg.re"
enum cond_t : int;

int main ()
{
	cond_t cond;
	char * YYCURSOR;
#define YYGETCONDITION() cond

#line 12 "conditions/condtype_forwdecl.cg.c"
{
	unsigned char yych;
	static void *yyctable[2] = {
		&&yyc_a,
		&&yyc_b,
	};
	goto *yyctable[YYGETCONDITION()];
/* *********************************** */
yyc_a:
	yych = *YYCURSOR;
	if (yych == 'a') goto yy3;
yy3:
	++YYCURSOR;
#line 12 "conditions/condtype_forwdecl.cg.re"
	{}
#line 28 "conditions/condtype_forwdecl.cg.c"
/* *********************************** */
yyc_b:
	yych = *YYCURSOR;
	if (yych == 'b') goto yy8;
yy8:
	++YYCURSOR;
#line 13 "conditions/condtype_forwdecl.cg.re"
	{}
#line 37 "conditions/condtype_forwdecl.cg.c"
}
#line 14 "conditions/condtype_forwdecl.cg.re"

	return 0;
}

#line 44 "conditions/condtype_forwdecl.cg.c"
enum cond_t : int {
	yyca,
	yycb,
};
#line 18 "conditions/condtype_forwdecl.cg.re"

conditions/condtype_forwdecl.cg.re:14:2: warning: control flow in condition 'a' is undefined for strings that match '[\x0-\x60\x62-\xFF]', use default rule '*' [-Wundefined-control-flow]
conditions/condtype_forwdecl.cg.re:14:2: warning: control flow in condition 'b' is undefined for strings that match '[\x0-\x61\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
