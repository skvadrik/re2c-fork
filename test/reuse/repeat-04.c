/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -cgi
// multiple scanners, error

enum YYCONDTYPE {
	yycr1,
	yycr2,
};


void scan(unsigned char* in)
{

{
	unsigned char yych;
	static void *yyctable[2] = {
		&&yyc_r1,
		&&yyc_r2,
	};
	goto *yyctable[YYGETCONDITION()];
/* *********************************** */
yyc_r1:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '2') {
		if (yych <= '0') goto yy2;
		if (yych <= '1') goto yy3;
		goto yy5;
	} else {
		if (yych <= '`') goto yy2;
		if (yych <= 'a') goto yy7;
		if (yych <= 'b') goto yy9;
	}
yy2:
yy3:
	++YYCURSOR;
	{ return "1"; }
yy5:
	++YYCURSOR;
	{ return "2"; }
yy7:
	++YYCURSOR;
	{ return "a"; }
yy9:
	++YYCURSOR;
	{ return "b"; }
/* *********************************** */
yyc_r2:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '2') {
		if (yych <= '0') goto yy13;
		if (yych <= '1') goto yy14;
		goto yy16;
	} else {
		if (yych == 'b') goto yy18;
	}
yy13:
yy14:
	++YYCURSOR;
	{ return "1"; }
yy16:
	++YYCURSOR;
	{ return "2"; }
yy18:
	++YYCURSOR;
	{ return "b"; }
}

/* Next block is not possible */

}
 reuse/repeat-04.re:15:2: warning: control flow in condition 'r1' is undefined for strings that match '[\x0-\x30\x33-\x60\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
reuse/repeat-04.re:15:2: warning: control flow in condition 'r2' is undefined for strings that match '[\x0-\x30\x33-\x61\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
