/* Generated by re2rust */
// re2rust $INPUT -o $OUTPUT --api simple

// Maximum number of capturing groups among all rules.
const YYMAXNMATCH: usize = 4;


#[derive(Debug, PartialEq)]
struct SemVer(u32, u32, u32); // version: (major, minor, patch)

const NONE: usize = std::usize::MAX;

fn s2n(str: &[u8]) -> u32 { // convert a pre-parsed string to a number
    let mut n = 0;
    for i in str { n = n * 10 + *i as u32 - 48; }
    return n;
}

fn parse(yyinput: &[u8]) -> Option<SemVer> {
    assert_eq!(yyinput.last(), Some(&0)); // expect null-terminated input

    let (mut yycursor, mut yymarker) = (0, 0);

    // Allocate memory for capturing parentheses (twice the number of groups).
    let yynmatch: usize;
    let mut yypmatch = [0; YYMAXNMATCH*2];

    // Intermediate tag variables used by the lexer (must be autogenerated).
    let mut yyt1 = NONE;let mut yyt2 = NONE;let mut yyt3 = NONE;let mut yyt4 = NONE;let mut yyt5 = NONE;

    
{
    #[allow(unused_assignments)]
    let mut yych : u8 = 0;
    let mut yystate : usize = 0;
    'yyl: loop {
        match yystate {
            0 => {
                yych = unsafe {*yyinput.get_unchecked(yycursor)};
                match yych {
                    0x30 ..= 0x39 => {
                        yyt1 = yycursor;
                        yycursor += 1;
                        yystate = 3;
                        continue 'yyl;
                    }
                    _ => {
                        yycursor += 1;
                        yystate = 1;
                        continue 'yyl;
                    }
                }
            }
            1 => {
                yystate = 2;
                continue 'yyl;
            }
            2 => { return None; },
            3 => {
                yymarker = yycursor;
                yych = unsafe {*yyinput.get_unchecked(yycursor)};
                match yych {
                    0x2E => {
                        yycursor += 1;
                        yystate = 4;
                        continue 'yyl;
                    }
                    0x30 ..= 0x39 => {
                        yycursor += 1;
                        yystate = 6;
                        continue 'yyl;
                    }
                    _ => {
                        yystate = 2;
                        continue 'yyl;
                    }
                }
            }
            4 => {
                yych = unsafe {*yyinput.get_unchecked(yycursor)};
                match yych {
                    0x30 ..= 0x39 => {
                        yyt2 = yycursor;
                        yycursor += 1;
                        yystate = 7;
                        continue 'yyl;
                    }
                    _ => {
                        yystate = 5;
                        continue 'yyl;
                    }
                }
            }
            5 => {
                yycursor = yymarker;
                yystate = 2;
                continue 'yyl;
            }
            6 => {
                yych = unsafe {*yyinput.get_unchecked(yycursor)};
                match yych {
                    0x2E => {
                        yycursor += 1;
                        yystate = 4;
                        continue 'yyl;
                    }
                    0x30 ..= 0x39 => {
                        yycursor += 1;
                        yystate = 6;
                        continue 'yyl;
                    }
                    _ => {
                        yystate = 5;
                        continue 'yyl;
                    }
                }
            }
            7 => {
                yych = unsafe {*yyinput.get_unchecked(yycursor)};
                match yych {
                    0x00 => {
                        yyt3 = yycursor;
                        yyt4 = usize::MAX;
                        yyt5 = usize::MAX;
                        yycursor += 1;
                        yystate = 8;
                        continue 'yyl;
                    }
                    0x2E => {
                        yyt3 = yycursor;
                        yyt5 = yycursor;
                        yycursor += 1;
                        yystate = 9;
                        continue 'yyl;
                    }
                    0x30 ..= 0x39 => {
                        yycursor += 1;
                        yystate = 7;
                        continue 'yyl;
                    }
                    _ => {
                        yystate = 5;
                        continue 'yyl;
                    }
                }
            }
            8 => {
                yynmatch = 4;
                yypmatch[2] = yyt1;
                yypmatch[4] = yyt2;
                yypmatch[5] = yyt3;
                yypmatch[6] = yyt5;
                yypmatch[7] = yyt4;
                yypmatch[0] = yyt1;
                yypmatch[1] = yycursor;
                yypmatch[3] = yyt2;
                yypmatch[3] -= 1;
                {
            // `yynmatch` is the number of capturing groups
            assert_eq!(yynmatch, 4);

            // Even `yypmatch` values are for opening parentheses, odd values
            // are for closing parentheses, the first group is the whole match.
            let major = s2n(&yyinput[yypmatch[2]..yypmatch[3]]);
            let minor = s2n(&yyinput[yypmatch[4]..yypmatch[5]]);
            let patch = if yypmatch[6] == NONE {0}
                else {s2n(&yyinput[yypmatch[6] + 1..yypmatch[7]])};

            return Some(SemVer(major, minor, patch));
        }
            }
            9 => {
                yych = unsafe {*yyinput.get_unchecked(yycursor)};
                if yych <= 0x00 {
                    yystate = 5;
                    continue 'yyl;
                }
                yystate = 11;
                continue 'yyl;
            }
            10 => {
                yych = unsafe {*yyinput.get_unchecked(yycursor)};
                yystate = 11;
                continue 'yyl;
            }
            11 => {
                match yych {
                    0x00 => {
                        yyt4 = yycursor;
                        yycursor += 1;
                        yystate = 8;
                        continue 'yyl;
                    }
                    0x30 ..= 0x39 => {
                        yycursor += 1;
                        yystate = 10;
                        continue 'yyl;
                    }
                    _ => {
                        yystate = 5;
                        continue 'yyl;
                    }
                }
            }
            _ => panic!("internal lexer error"),
        }
    }
}

}

fn main() {
    assert_eq!(parse(b"23.34\0"), Some(SemVer(23, 34, 0)));
    assert_eq!(parse(b"1.2.99999\0"), Some(SemVer(1, 2, 99999)));
    assert_eq!(parse(b"1.a\0"), None);
}
