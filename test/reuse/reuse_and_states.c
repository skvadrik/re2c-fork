/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -fi


// normal block, 1 state


	switch (GETSTATE_LAST()) {
	default:
		goto yy0;
	case 0:
		goto yyFillLabel0;
	case 1:
		goto yyFillLabel1;
	}
yy0:
	SETSTATE_1(0);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel0:
	yych = *YYCURSOR;
	switch (yych) {
	case 'e':	goto yy5;
	default:	goto yy3;
	}
yy3:
	++YYCURSOR;
	{ x }
yy5:
	++YYCURSOR;
	{ e }


// reuse block, 3 states


	switch (GETSTATE_REUSE_1()) {
	default:
		goto yy7;
	case 0:
		goto yyFillLabel3_0;
	case 1:
		goto yyFillLabel3_1;
	case 2:
		goto yyFillLabel3_2;
	}
yy7:
	SETSTATE_REUSE_1(0);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel3_0:
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy12;
	case 'b':	goto yy14;
	case 'c':	goto yy17;
	default:	goto yy10;
	}
yy10:
	++YYCURSOR;
	{ x }
yy12:
	++YYCURSOR;
	{ a }
yy14:
	++YYCURSOR;
	SETSTATE_REUSE_1(1);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel3_1:
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy14;
	default:	goto yy16;
	}
yy16:
	{ c }
yy17:
	++YYCURSOR;
	SETSTATE_REUSE_1(2);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel3_2:
	yych = *YYCURSOR;
	switch (yych) {
	case 'c':	goto yy17;
	default:	goto yy16;
	}


// normal block, 1 state


	SETSTATE_2(1);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel1:
	yych = *YYCURSOR;
	switch (yych) {
	case 'f':	goto yy24;
	default:	goto yy22;
	}
yy22:
	++YYCURSOR;
	{ x }
yy24:
	++YYCURSOR;
	{ f }


// last normal block, no rules, only the YYGETSTATE configuration


// reuse block, 1 state


	switch (GETSTATE_REUSE_2()) {
	default:
		goto yy26;
	case 0:
		goto yyFillLabel6_0;
	}
yy26:
	SETSTATE_REUSE_2(0);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel6_0:
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy31;
	default:	goto yy29;
	}
yy29:
	++YYCURSOR;
	{ x }
yy31:
	++YYCURSOR;
	{ a }

