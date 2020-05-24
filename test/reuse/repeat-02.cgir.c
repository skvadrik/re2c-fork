/* Generated by re2c */
// multiple scanners

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
	if (limit1 <= cursor1) fill1(1);
	yych = *cursor1;
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
	++cursor1;
	{ return "1"; }
yy5:
	++cursor1;
	{ return "2"; }
yy7:
	++cursor1;
	{ return "a"; }
yy9:
	++cursor1;
	{ return "b"; }
/* *********************************** */
yyc_r2:
	if (limit1 <= cursor1) fill1(1);
	yych = *cursor1;
	if (yych <= '2') {
		if (yych <= '0') goto yy13;
		if (yych <= '1') goto yy14;
		goto yy16;
	} else {
		if (yych == 'b') goto yy18;
	}
yy13:
yy14:
	++cursor1;
	{ return "1"; }
yy16:
	++cursor1;
	{ return "2"; }
yy18:
	++cursor1;
	{ return "b"; }
}

}

void scan(unsigned short* in)
{

{
	unsigned short yych;
	static void *yyctable[2] = {
		&&yyc_r1,
		&&yyc_r2,
	};
	goto *yyctable[YYGETCONDITION()];
/* *********************************** */
yyc_r1:
	if (limit2 <= cursor2) fill2(1);
	yych = *cursor2;
	if (yych <= '2') {
		if (yych <= '0') goto yy22;
		if (yych <= '1') goto yy23;
		goto yy25;
	} else {
		if (yych <= '`') goto yy22;
		if (yych <= 'a') goto yy27;
		if (yych <= 'b') goto yy29;
	}
yy22:
yy23:
	++cursor2;
	{ return "1"; }
yy25:
	++cursor2;
	{ return "2"; }
yy27:
	++cursor2;
	{ return "a"; }
yy29:
	++cursor2;
	{ return "b"; }
/* *********************************** */
yyc_r2:
	if (limit2 <= cursor2) fill2(1);
	yych = *cursor2;
	if (yych <= '2') {
		if (yych <= '0') goto yy33;
		if (yych <= '1') goto yy34;
		goto yy36;
	} else {
		if (yych == 'b') goto yy38;
	}
yy33:
yy34:
	++cursor2;
	{ return "1"; }
yy36:
	++cursor2;
	{ return "2"; }
yy38:
	++cursor2;
	{ return "b"; }
}

}

void scan(unsigned int* in)
{

{
	unsigned int yych;
	static void *yyctable[2] = {
		&&yyc_r1,
		&&yyc_r2,
	};
	goto *yyctable[YYGETCONDITION()];
/* *********************************** */
yyc_r1:
	if (limit3 <= cursor3) fill3(1);
	yych = *cursor3;
	if (yych <= '2') {
		if (yych <= '0') goto yy42;
		if (yych <= '1') goto yy43;
		goto yy45;
	} else {
		if (yych <= '`') goto yy42;
		if (yych <= 'a') goto yy47;
		if (yych <= 'b') goto yy49;
	}
yy42:
yy43:
	++cursor3;
	{ return "1"; }
yy45:
	++cursor3;
	{ return "2"; }
yy47:
	++cursor3;
	{ return "a"; }
yy49:
	++cursor3;
	{ return "b"; }
/* *********************************** */
yyc_r2:
	if (limit3 <= cursor3) fill3(1);
	yych = *cursor3;
	if (yych <= '2') {
		if (yych <= '0') goto yy53;
		if (yych <= '1') goto yy54;
		goto yy56;
	} else {
		if (yych == 'b') goto yy58;
	}
yy53:
yy54:
	++cursor3;
	{ return "1"; }
yy56:
	++cursor3;
	{ return "2"; }
yy58:
	++cursor3;
	{ return "b"; }
}

}

reuse/repeat-02.cgir.re:20:2: warning: control flow in condition 'r1' is undefined for strings that match '[\x0-\x30\x33-\x60\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
reuse/repeat-02.cgir.re:20:2: warning: control flow in condition 'r2' is undefined for strings that match '[\x0-\x30\x33-\x61\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
reuse/repeat-02.cgir.re:32:2: warning: control flow in condition 'r1' is undefined for strings that match '[\x0-\x30\x33-\x60\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
reuse/repeat-02.cgir.re:32:2: warning: control flow in condition 'r2' is undefined for strings that match '[\x0-\x30\x33-\x61\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
reuse/repeat-02.cgir.re:44:2: warning: control flow in condition 'r1' is undefined for strings that match '[\x0-\x30\x33-\x60\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
reuse/repeat-02.cgir.re:44:2: warning: control flow in condition 'r2' is undefined for strings that match '[\x0-\x30\x33-\x61\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
