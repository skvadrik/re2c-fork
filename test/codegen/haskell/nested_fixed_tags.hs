-- Generated by re2c
-- re2hs $INPUT -o $OUTPUT -i --api custom
{-# LANGUAGE OverloadedStrings #-}
{-# LANGUAGE OverloadedRecordDot #-}

import Control.Monad (when)
import Data.ByteString as BS

none :: Int
none = -1

data State = State {
    str :: !BS.ByteString,
    cur :: !Int,
    mar :: !Int,
    
_yyt1 :: !Int,
_yyt2 :: !Int,
    x :: !Int,
    y :: !Int,
    yypmatch0 :: !Int,
    yypmatch1 :: !Int,
    yypmatch2 :: !Int,
    yypmatch3 :: !Int,
    yypmatch4 :: !Int,
    yypmatch5 :: !Int
} deriving (Show)




yy0 :: State -> Int
yy0 _s =
    let _t = _s{mar = _s.cur} in let _s = _t in
    let yych = BS.index _s.str _s.cur in
    case yych of
        _c | 0x62 == _c ->
            let _t = _s{cur = _s.cur + 1} in let _s = _t in
            yy2 _s
        _c | True ->
            let _t = _s{_yyt1 = none} in let _s = _t in
            yy1 _s

yy1 :: State -> Int
yy1 _s =
    let _t = _s{y = _s._yyt1} in let _s = _t in
    let _t = _s{x = _s._yyt1} in let _s = _t in
    let _t = _s{_yyt1 = none} in let _s = _t in
    let _t = if _s.x == none then _s else _s{x = _s.x + (-1)} in let _s = _t in
    if _s.x == none then none else _s.y - _s.x

yy2 :: State -> Int
yy2 _s =
    let yych = BS.index _s.str _s.cur in
    case yych of
        _c | 0x61 == _c ->
            let _t = _s{cur = _s.cur + 1} in let _s = _t in
            yy4 _s
        _c | True ->
            yy3 _s

yy3 :: State -> Int
yy3 _s =
    let _t = _s{cur = _s.mar} in let _s = _t in
    let _t = _s{_yyt1 = none} in let _s = _t in
    yy1 _s

yy4 :: State -> Int
yy4 _s =
    let _t = _s{_yyt1 = _s.cur} in let _s = _t in
    yy1 _s

lex_tags :: State -> Int
lex_tags _s =
    yy0 _s




yy5 :: State -> Int
yy5 _s =
    let yych = BS.index _s.str _s.cur in
    case yych of
        _c | 0x61 == _c ->
            let _t = _s{_yyt1 = _s.cur} in let _s = _t in
            let _t = _s{cur = _s.cur + 1} in let _s = _t in
            yy7 _s
        _c | True ->
            let _t = _s{_yyt1 = _s.cur} in let _s = _t in
            let _t = _s{_yyt2 = none} in let _s = _t in
            yy6 _s

yy6 :: State -> Int
yy6 _s =
    let _t = _s{yypmatch0 = _s._yyt1} in let _s = _t in
    let _t = _s{yypmatch3 = _s._yyt2} in let _s = _t in
    let _t = _s{yypmatch5 = _s._yyt2} in let _s = _t in
    let _t = _s{yypmatch1 = _s.cur} in let _s = _t in
    let _t = _s{yypmatch2 = _s._yyt2} in let _s = _t in
    let _t = _s{_yyt2 = none} in let _s = _t in
    let _t = if _s.yypmatch2 == none then _s else _s{yypmatch2 = _s.yypmatch2 + (-1)} in let _s = _t in
    let _t = _s{yypmatch4 = _s.yypmatch2} in let _s = _t in
    _s.yypmatch4

yy7 :: State -> Int
yy7 _s =
    let _t = _s{_yyt2 = _s.cur} in let _s = _t in
    yy6 _s

lex_captures :: State -> Int
lex_captures _s =
    yy5 _s



make_state :: BS.ByteString -> State
make_state str =
    State {
        str = str,
        cur = 0,
        mar = 0,
        
_yyt1 = none,
_yyt2 = none,
        x = none,
        y = none,
        yypmatch0 = none,
        yypmatch1 = none,
        yypmatch2 = none,
        yypmatch3 = none,
        yypmatch4 = none,
        yypmatch5 = none
    }

main :: IO ()
main = do
    let test fn str expect =
            when (fn (make_state str) /= expect) $ error "failed"

    test lex_tags "\0" none
    test lex_tags "ba\0" 1
    test lex_captures "\0" none
    test lex_captures "a\0" 0
codegen/haskell/nested_fixed_tags.re:46:21: warning: rule matches empty string [-Wmatch-empty-string]
codegen/haskell/nested_fixed_tags.re:53:13: warning: rule matches empty string [-Wmatch-empty-string]
