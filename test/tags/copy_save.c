/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			yyt2 = NULL;
			goto yy2;
		default:
			yyt1 = NULL;
			goto yy1;
	}
yy1:
	p = yyt1;
	{}
yy2:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt2 = yyt1;
			yyt1 = YYCURSOR;
			goto yy2;
		case 'b': goto yy3;
		default: goto yy1;
	}
yy3:
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy4;
		default:
			yyt1 = yyt2;
			goto yy1;
	}
yy4:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy3;
		default: goto yy5;
	}
yy5:
	YYCURSOR = YYMARKER;
	yyt1 = yyt2;
	goto yy1;
}

tags/copy_save.re:4:16: warning: rule matches empty string [-Wmatch-empty-string]
tags/copy_save.re:4:16: warning: tag `p` has 2nd degree of nondeterminism [-Wnondeterministic-tags]
