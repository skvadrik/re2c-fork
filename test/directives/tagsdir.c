/* Generated by re2c */
#line 1 "directives/tagsdir.re"
// re2c $INPUT -o $OUTPUT --tags -s
// Test `stags:re2c` and `mtags:re2c` directives (global or with block list).
#line 3 "directives/tagsdir.re"


// stags:re2c
x2_1;x2_2;y2_1;y2_2;yyt1;yyt2;
// mtags:re2c
y2_3;yyt3;


// tags have common 'yyt' prefix, so tag variables are shared between blocks

// stags:re2c:x1
yyt1;yyt2;
// mtags:re2c:x1


// stags:re2c:y1
yyt1;yyt2;
// mtags:re2c:y1
yyt3;

// stags:re2c:x1:y1
yyt1;yyt2;
// mtags:re2c:x1:y1
yyt3;


// tags have custom block-specific prefixes, so tag variables are separate

// stags:re2c:x2
x2_1;x2_2;
// mtags:re2c:x2


// stags:re2c:y2
y2_1;y2_2;
// mtags:re2c:y2
y2_3;

// stags:re2c:x2:y2
x2_1;x2_2;y2_1;y2_2;
// mtags:re2c:x2:y2
y2_3;


// rules:re2c:x
#line 50 "directives/tagsdir.re"


// rules:re2c:y
#line 55 "directives/tagsdir.re"



// re2c:x1

#line 62 "directives/tagsdir.c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych == 'a') {
		yyt1 = yyt2 = YYCURSOR;
		goto yy3;
	}
	yyt2 = NULL;
	yyt1 = YYCURSOR;
yy2:
	x1 = yyt1;
	x2 = yyt2;
#line 49 "directives/tagsdir.re"
	{ a }
#line 77 "directives/tagsdir.c"
yy3:
	++YYCURSOR;
	goto yy2;
}
#line 61 "directives/tagsdir.re"


// re2c:y1

#line 87 "directives/tagsdir.c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych == 'b') {
		YYMTAGP(yyt3);
		yyt1 = yyt2 = YYCURSOR;
		goto yy7;
	}
	YYMTAGN(yyt3);
	yyt2 = NULL;
	yyt1 = YYCURSOR;
yy6:
	y1 = yyt1;
	y2 = yyt2;
	y3 = yyt3;
#line 54 "directives/tagsdir.re"
	{ b }
#line 105 "directives/tagsdir.c"
yy7:
	++YYCURSOR;
	goto yy6;
}
#line 66 "directives/tagsdir.re"



// re2c:x2

#line 116 "directives/tagsdir.c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych == 'a') {
		x2_1 = x2_2 = YYCURSOR;
		goto yy11;
	}
	x2_2 = NULL;
	x2_1 = YYCURSOR;
yy10:
	x1 = x2_1;
	x2 = x2_2;
#line 49 "directives/tagsdir.re"
	{ a }
#line 131 "directives/tagsdir.c"
yy11:
	++YYCURSOR;
	goto yy10;
}
#line 73 "directives/tagsdir.re"


// re2c:y2

#line 141 "directives/tagsdir.c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych == 'b') {
		YYMTAGP(y2_3);
		y2_1 = y2_2 = YYCURSOR;
		goto yy15;
	}
	YYMTAGN(y2_3);
	y2_2 = NULL;
	y2_1 = YYCURSOR;
yy14:
	y1 = y2_1;
	y2 = y2_2;
	y3 = y2_3;
#line 54 "directives/tagsdir.re"
	{ b }
#line 159 "directives/tagsdir.c"
yy15:
	++YYCURSOR;
	goto yy14;
}
#line 79 "directives/tagsdir.re"

directives/tagsdir.re:49:19: warning: rule matches empty string [-Wmatch-empty-string]
directives/tagsdir.re:54:23: warning: rule matches empty string [-Wmatch-empty-string]
directives/tagsdir.re:49:19: warning: rule matches empty string [-Wmatch-empty-string]
directives/tagsdir.re:54:23: warning: rule matches empty string [-Wmatch-empty-string]
