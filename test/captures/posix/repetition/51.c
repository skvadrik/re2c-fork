/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	YYMARKER = YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
		case 'X':
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
		case 'Y':
			yyt3 = YYCURSOR;
			yyt4 = YYCURSOR;
			goto yy6;
		default: goto yy5;
	}
yy3:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) goto yy1;
	else goto yy7;
yy4:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy5:
	switch (yych) {
		case 0x00: goto yy3;
		case 'Y':
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy8;
		default:
			yyt4 = YYCURSOR;
			goto yy4;
	}
yy6:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'Y':
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy8;
		default: goto yy9;
	}
yy7:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[1] = YYCURSOR;
	{}
yy8:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy9:
	switch (yych) {
		case 0x00:
			yyt2 = yyt4;
			goto yy7;
		case 'Y':
			yyt4 = yyt2;
			yyt2 = YYCURSOR;
			yyt3 = YYCURSOR;
			goto yy8;
		default:
			yyt2 = yyt4;
			yyt4 = YYCURSOR;
			goto yy4;
	}
}

captures/posix/repetition/51.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
