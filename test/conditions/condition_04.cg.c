/* Generated by re2c */
#line 1 "conditions/condition_04.cg.re"

#line 5 "conditions/condition_04.cg.c"
{
	YYCTYPE yych;
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
#line 3 "conditions/condition_04.cg.re"
	{ return "1"; }
#line 31 "conditions/condition_04.cg.c"
yy5:
	++YYCURSOR;
#line 4 "conditions/condition_04.cg.re"
	{ return "2"; }
#line 36 "conditions/condition_04.cg.c"
yy7:
	++YYCURSOR;
#line 5 "conditions/condition_04.cg.re"
	{ return "a"; }
#line 41 "conditions/condition_04.cg.c"
yy9:
	++YYCURSOR;
#line 6 "conditions/condition_04.cg.re"
	{ return "b"; }
#line 46 "conditions/condition_04.cg.c"
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
#line 3 "conditions/condition_04.cg.re"
	{ return "1"; }
#line 63 "conditions/condition_04.cg.c"
yy16:
	++YYCURSOR;
#line 4 "conditions/condition_04.cg.re"
	{ return "2"; }
#line 68 "conditions/condition_04.cg.c"
yy18:
	++YYCURSOR;
#line 6 "conditions/condition_04.cg.re"
	{ return "b"; }
#line 73 "conditions/condition_04.cg.c"
}
#line 8 "conditions/condition_04.cg.re"

conditions/condition_04.cg.re:8:2: warning: control flow in condition 'r1' is undefined for strings that match '[\x0-\x30\x33-\x60\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
conditions/condition_04.cg.re:8:2: warning: control flow in condition 'r2' is undefined for strings that match '[\x0-\x30\x33-\x61\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
conditions/condition_04.cg.re:8:2: warning: looks like you use hardcoded numbers instead of autogenerated condition names: better add '/*!types:re2c*/' directive or '-t, --type-header' option and don't rely on fixed condition order. [-Wcondition-order]
