/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	YYMARKER = YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			yyt2 = NULL;
			yyt3 = NULL;
			goto yy2;
		case 'c':
			yyt1 = YYCURSOR;
			yyt2 = NULL;
			goto yy4;
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
		case 'b': goto yy5;
		case 'e': goto yy7;
		default: goto yy3;
	}
yy3:
	YYCURSOR = YYMARKER;
	goto yy1;
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy8;
		default: goto yy3;
	}
yy5:
	++YYCURSOR;
	yyt2 = YYCURSOR;
	yyt3 = NULL;
	yyt4 = NULL;
yy6:
	yynmatch = 4;
	yypmatch[0] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[5] = yyt3;
	yypmatch[7] = yyt4;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = yyt2;
	yypmatch[4] = yyt3;
	yypmatch[6] = yyt4;
	if (yypmatch[2] != NULL) yypmatch[2] -= 1;
	if (yypmatch[4] != NULL) yypmatch[4] -= 1;
	if (yypmatch[6] != NULL) yypmatch[6] -= 1;
	{}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'f':
			yyt4 = YYCURSOR;
			goto yy9;
		default: goto yy3;
	}
yy8:
	++YYCURSOR;
	yyt3 = YYCURSOR;
	yyt4 = NULL;
	goto yy6;
yy9:
	++YYCURSOR;
	goto yy6;
}

captures/posix/basic/10.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
