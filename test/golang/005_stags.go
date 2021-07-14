// Code generated by re2c, DO NOT EDIT.
//line "golang/005_stags.re":1
//go:generate re2go $INPUT -o $OUTPUT 
package main

func Lex(str string) (a int, b int, c int) {
	var cursor, marker int
	
//line "golang/005_stags.go":10
	var yyt1 int
	var yyt2 int
	var yyt3 int
//line "golang/005_stags.re":6


	
//line "golang/005_stags.go":18
{
	var yych byte
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt1 = -1
		yyt2 = -1
		yyt3 = -1
		goto yy2
	case 'a':
		yyt1 = cursor
		goto yy6
	case 'b':
		yyt2 = cursor
		goto yy7
	case 'c':
		yyt3 = cursor
		goto yy8
	default:
		goto yy4
	}
yy2:
	cursor += 1
	a = yyt1
	b = yyt2
	c = yyt3
//line "golang/005_stags.re":34
	{
		return a, b, c
	}
//line "golang/005_stags.go":49
yy4:
	cursor += 1
yy5:
//line "golang/005_stags.re":22
	{
		return -2, -2, -2
	}
//line "golang/005_stags.go":57
yy6:
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt2 = -1
		yyt3 = -1
		goto yy9
	case 'a':
		goto yy11
	case 'b':
		goto yy14
	case 'c':
		yyt2 = -1
		yyt3 = cursor
		goto yy15
	default:
		goto yy5
	}
yy7:
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt1 = -1
		yyt3 = -1
		goto yy9
	case 'b':
		goto yy16
	default:
		goto yy5
	}
yy8:
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt1 = -1
		yyt2 = -1
		goto yy9
	case 'c':
		goto yy18
	default:
		goto yy5
	}
yy9:
	cursor += 1
	a = yyt1
	b = yyt2
	c = yyt3
//line "golang/005_stags.re":30
	{
		return a, b, c
	}
//line "golang/005_stags.go":115
yy11:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt2 = -1
		yyt3 = -1
		goto yy9
	case 'a':
		goto yy11
	case 'b':
		goto yy20
	default:
		goto yy13
	}
yy13:
	cursor = marker
	goto yy5
yy14:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'c':
		yyt2 = cursor
		goto yy21
	default:
		goto yy13
	}
yy15:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		goto yy2
	case 'a':
		yyt1 = cursor
		goto yy22
	default:
		goto yy13
	}
yy16:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt1 = -1
		yyt3 = -1
		goto yy9
	case 'b':
		goto yy16
	default:
		goto yy13
	}
yy18:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		yyt1 = -1
		yyt2 = -1
		goto yy9
	case 'c':
		goto yy18
	default:
		goto yy13
	}
yy20:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'c':
		yyt2 = cursor
		goto yy23
	default:
		goto yy13
	}
yy21:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'a':
		yyt1 = cursor
		goto yy22
	default:
		goto yy24
	}
yy22:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'b':
		yyt2 = cursor
		goto yy27
	case 'c':
		yyt2 = -1
		yyt3 = cursor
		goto yy15
	default:
		goto yy13
	}
yy23:
	cursor += 1
	yych = str[cursor]
yy24:
	switch (yych) {
	case 0x00:
		goto yy25
	case 'c':
		goto yy23
	default:
		goto yy13
	}
yy25:
	cursor += 1
	a = yyt1
	c = yyt2
	b = yyt2
	b += -1
//line "golang/005_stags.re":26
	{
		return a, b, c
	}
//line "golang/005_stags.go":238
yy27:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'c':
		yyt3 = cursor
		goto yy15
	default:
		goto yy13
	}
}
//line "golang/005_stags.re":37

}

func main() {
	if a, b, c := Lex("aabcc\000"); !(a == 0 && b == 2 && c == 3) {
		panic("expected 0,2,3")
	}
	if a, b, c := Lex("aaa\000"); !(a == 0 && b == -1 && c == -1) {
		panic("expected 0,-1,-1")
	}
	if a, b, c := Lex("acabc\000"); !(a == 2 && b == 3 && c == 4) {
		panic("expected 2,3,4")
	}
	if a, b, c := Lex("abcac\000"); !(a == 3 && b == -1 && c == 4) {
		panic("expected 3,-1,4")
	}
	if a, b, c := Lex("ab\000"); !(a == -2 && b == -2 && c == -2) {
		panic("expected -2,-2,-2")
	}
}
