/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	YYMARKER = YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 6) YYFILL(6);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			goto yy2;
		default: goto yy1;
	}
yy1:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b': goto yy4;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy5;
		default: goto yy3;
	}
yy3:
	YYCURSOR = YYMARKER;
	goto yy1;
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b':
			yyt2 = YYCURSOR;
			goto yy7;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy5;
		default: goto yy3;
	}
yy5:
	yych = *++YYCURSOR;
	yyt3 = YYCURSOR;
	goto yy9;
yy6:
	yynmatch = 4;
	yypmatch[2] = yyt1;
	yypmatch[4] = yyt2;
	yypmatch[6] = yyt3;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt2;
	yypmatch[5] = yyt3;
	yypmatch[7] = YYCURSOR;
	{}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy10;
		default: goto yy3;
	}
yy8:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy9:
	if (yych <= 0x00) goto yy6;
	goto yy8;
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy5;
		default: goto yy3;
	}
}

captures/posix/rightassoc/11.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
