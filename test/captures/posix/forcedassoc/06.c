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
		case 'b':
			yyt2 = YYCURSOR;
			goto yy4;
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
			yyt3 = YYCURSOR;
			goto yy7;
		case 'c':
			yyt3 = YYCURSOR;
			goto yy8;
		default: goto yy3;
	}
yy5:
	yych = *++YYCURSOR;
	yyt3 = YYCURSOR;
	goto yy10;
yy6:
	yynmatch = 5;
	yypmatch[4] = yyt1;
	yypmatch[6] = yyt2;
	yypmatch[8] = yyt3;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = yyt1;
	yypmatch[3] = yyt3;
	yypmatch[5] = yyt2;
	yypmatch[7] = yyt3;
	yypmatch[9] = YYCURSOR;
	{}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy11;
		default: goto yy3;
	}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy5;
		default:
			yyt2 = yyt3;
			yyt3 = YYCURSOR;
			goto yy6;
	}
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy10:
	switch (yych) {
		case 'd': goto yy9;
		default: goto yy6;
	}
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd':
			yyt2 = yyt3;
			goto yy5;
		default: goto yy3;
	}
}

captures/posix/forcedassoc/06.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
