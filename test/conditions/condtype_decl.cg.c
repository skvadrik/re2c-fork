/* Generated by re2c */
#line 1 "conditions/condtype_decl.cg.re"
#line 4 "conditions/condtype_decl.cg.c"
enum YYCONDTYPE {
	yyca,
	yycb,
};
#line 1 "conditions/condtype_decl.cg.re"


int main ()
{
	YYCONDTYPE cond;
	char * YYCURSOR;
#define YYGETCONDITION() cond

#line 18 "conditions/condtype_decl.cg.c"
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
#line 11 "conditions/condtype_decl.cg.re"
	{}
#line 34 "conditions/condtype_decl.cg.c"
/* *********************************** */
yyc_b:
	yych = *YYCURSOR;
	if (yych == 'b') goto yy8;
yy8:
	++YYCURSOR;
#line 12 "conditions/condtype_decl.cg.re"
	{}
#line 43 "conditions/condtype_decl.cg.c"
}
#line 13 "conditions/condtype_decl.cg.re"

	return 0;
}
conditions/condtype_decl.cg.re:13:2: warning: control flow in condition 'a' is undefined for strings that match '[\x0-\x60\x62-\xFF]', use default rule '*' [-Wundefined-control-flow]
conditions/condtype_decl.cg.re:13:2: warning: control flow in condition 'b' is undefined for strings that match '[\x0-\x61\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
