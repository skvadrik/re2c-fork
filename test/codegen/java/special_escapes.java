// Generated by re2java
// re2java $INPUT -o $OUTPUT

class Main {
    static boolean lex(String yyinput) {
        int yycursor = 0;
        int yymarker = 0;

        
{
    char yych = 0;
    int yystate = 0;
    yyl: while (true) {
        switch (yystate) {
            case 0:
                yych = yyinput.charAt(yycursor);
                yycursor += 1;
                switch (yych) {
                    case 0x07:
                        yystate = 3;
                        continue yyl;
                    default:
                        yystate = 1;
                        continue yyl;
                }
            case 1:
                yystate = 2;
                continue yyl;
            case 2:
                { return false; }
            case 3:
                yymarker = yycursor;
                yych = yyinput.charAt(yycursor);
                switch (yych) {
                    case 0x08:
                        yycursor += 1;
                        yystate = 4;
                        continue yyl;
                    default:
                        yystate = 2;
                        continue yyl;
                }
            case 4:
                yych = yyinput.charAt(yycursor);
                switch (yych) {
                    case 0x0C:
                        yycursor += 1;
                        yystate = 6;
                        continue yyl;
                    default:
                        yystate = 5;
                        continue yyl;
                }
            case 5:
                yycursor = yymarker;
                yystate = 2;
                continue yyl;
            case 6:
                yych = yyinput.charAt(yycursor);
                switch (yych) {
                    case 0x0A:
                        yycursor += 1;
                        yystate = 7;
                        continue yyl;
                    default:
                        yystate = 5;
                        continue yyl;
                }
            case 7:
                yych = yyinput.charAt(yycursor);
                switch (yych) {
                    case 0x0D:
                        yycursor += 1;
                        yystate = 8;
                        continue yyl;
                    default:
                        yystate = 5;
                        continue yyl;
                }
            case 8:
                yych = yyinput.charAt(yycursor);
                switch (yych) {
                    case 0x09:
                        yycursor += 1;
                        yystate = 9;
                        continue yyl;
                    default:
                        yystate = 5;
                        continue yyl;
                }
            case 9:
                yych = yyinput.charAt(yycursor);
                switch (yych) {
                    case 0x0B:
                        yycursor += 1;
                        yystate = 10;
                        continue yyl;
                    default:
                        yystate = 5;
                        continue yyl;
                }
            case 10:
                yych = yyinput.charAt(yycursor);
                switch (yych) {
                    case 0x5C:
                        yycursor += 1;
                        yystate = 11;
                        continue yyl;
                    default:
                        yystate = 5;
                        continue yyl;
                }
            case 11:
                yych = yyinput.charAt(yycursor);
                switch (yych) {
                    case 0x27:
                        yycursor += 1;
                        yystate = 12;
                        continue yyl;
                    default:
                        yystate = 5;
                        continue yyl;
                }
            case 12:
                yych = yyinput.charAt(yycursor);
                switch (yych) {
                    case 0x22:
                        yycursor += 1;
                        yystate = 13;
                        continue yyl;
                    default:
                        yystate = 5;
                        continue yyl;
                }
            case 13:
                { return true; }
            default:
                throw new IllegalStateException("internal lexer error");
        }
    }
}

    }

    public static void main(String []args) {
        assert lex("\007\010\014\012\015\011\013\\'\"\0");
    }
};
