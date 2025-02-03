// Code generated by re2go, DO NOT EDIT.
//line "go/eof/03_eof_rule.re":1
//go:generate re2go $INPUT -o $OUTPUT --api simple
package main

// Expects a null-terminated string.
func lex(yyinput string) int {
	var yycursor, yymarker int
	yylimit := len(yyinput) - 1 // lim points at the terminating null
	count := 0

	for { 
//line "go/eof/03_eof_rule.go":14
{
	var yych byte
	yych = yyinput[yycursor]
	switch (yych) {
	case ' ':
		goto yy3
	case '\'':
		goto yy5
	default:
		if (yylimit <= yycursor) {
			goto yy10
		}
		goto yy1
	}
yy1:
	yycursor += 1
yy2:
//line "go/eof/03_eof_rule.re":17
	{ return -1 }
//line "go/eof/03_eof_rule.go":34
yy3:
	yycursor += 1
	yych = yyinput[yycursor]
	switch (yych) {
	case ' ':
		goto yy3
	default:
		goto yy4
	}
yy4:
//line "go/eof/03_eof_rule.re":20
	{ continue }
//line "go/eof/03_eof_rule.go":47
yy5:
	yycursor += 1
	yymarker = yycursor
	yych = yyinput[yycursor]
	if (yych >= 0x01) {
		goto yy7
	}
	if (yylimit <= yycursor) {
		goto yy2
	}
yy6:
	yycursor += 1
	yych = yyinput[yycursor]
yy7:
	switch (yych) {
	case '\'':
		goto yy8
	case '\\':
		goto yy9
	default:
		if (yylimit <= yycursor) {
			goto yy11
		}
		goto yy6
	}
yy8:
	yycursor += 1
//line "go/eof/03_eof_rule.re":19
	{ count += 1; continue }
//line "go/eof/03_eof_rule.go":77
yy9:
	yycursor += 1
	yych = yyinput[yycursor]
	if (yych <= 0x00) {
		if (yylimit <= yycursor) {
			goto yy11
		}
		goto yy6
	}
	goto yy6
yy10:
//line "go/eof/03_eof_rule.re":18
	{ return count }
//line "go/eof/03_eof_rule.go":91
yy11:
	yycursor = yymarker
	goto yy2
}
//line "go/eof/03_eof_rule.re":21

	}
}

func main() {
	assert_eq := func(x, y int) { if x != y { panic("error") } }
	assert_eq(lex("\000"), 0)
	assert_eq(lex("'qu\000tes' 'are' 'fine: \\'' \000"), 3)
	assert_eq(lex("'unterminated\\'\000"), -1)
}
