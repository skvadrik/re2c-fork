-- Generated by re2c
{-# LANGUAGE RecordWildCards #-}
-- re2hs $INPUT -o $OUTPUT -i
{-# OPTIONS_GHC -Wno-unused-record-wildcards #-}
{-# LANGUAGE OverloadedStrings #-}

import Control.Monad (when)
import Data.ByteString (ByteString, index)

data Number = INum | FNum | NNaN deriving (Eq)




data State = State {
    _str :: ByteString,
    _cur :: Int,
    _mar :: Int,
    _accept :: Int
}


yy0 :: State -> Number
yy0 State{..} =
    let yych = index _str _cur in
    let __ = _cur + 1 in let _cur = __ in
    case yych of
        _c | 0x2E == _c ->
            yy3 State{..}
        _c | 0x30 == _c ->
            yy4 State{..}
        _c | 0x31 <= _c && _c <= 0x39 ->
            yy5 State{..}
        _c | True ->
            yy1 State{..}

yy1 :: State -> Number
yy1 State{..} =
    yy2 State{..}

yy2 :: State -> Number
yy2 State{..} =
    NNaN

yy3 :: State -> Number
yy3 State{..} =
    let yych = index _str _cur in
    case yych of
        _c | 0x30 <= _c && _c <= 0x39 ->
            let __ = _cur + 1 in let _cur = __ in
            yy7 State{..}
        _c | True ->
            yy2 State{..}

yy4 :: State -> Number
yy4 State{..} =
    let _accept = 0 in
    let _mar = _cur in
    let yych = index _str _cur in
    case yych of
        _c | 0x2E == _c ->
            let __ = _cur + 1 in let _cur = __ in
            yy7 State{..}
        _c | 0x30 <= _c && _c <= 0x39 ->
            let __ = _cur + 1 in let _cur = __ in
            yy9 State{..}
        _c | 0x45 == _c || 0x65 == _c ->
            let __ = _cur + 1 in let _cur = __ in
            yy11 State{..}
        _c | True ->
            yy2 State{..}

yy5 :: State -> Number
yy5 State{..} =
    let _accept = 1 in
    let _mar = _cur in
    let yych = index _str _cur in
    case yych of
        _c | 0x2E == _c ->
            let __ = _cur + 1 in let _cur = __ in
            yy7 State{..}
        _c | 0x30 <= _c && _c <= 0x39 ->
            let __ = _cur + 1 in let _cur = __ in
            yy5 State{..}
        _c | 0x45 == _c || 0x65 == _c ->
            let __ = _cur + 1 in let _cur = __ in
            yy11 State{..}
        _c | True ->
            yy6 State{..}

yy6 :: State -> Number
yy6 State{..} =
    INum

yy7 :: State -> Number
yy7 State{..} =
    let _accept = 2 in
    let _mar = _cur in
    let yych = index _str _cur in
    case yych of
        _c | 0x30 <= _c && _c <= 0x39 ->
            let __ = _cur + 1 in let _cur = __ in
            yy7 State{..}
        _c | 0x45 == _c || 0x65 == _c ->
            let __ = _cur + 1 in let _cur = __ in
            yy11 State{..}
        _c | True ->
            yy8 State{..}

yy8 :: State -> Number
yy8 State{..} =
    FNum

yy9 :: State -> Number
yy9 State{..} =
    let yych = index _str _cur in
    case yych of
        _c | 0x2E == _c ->
            let __ = _cur + 1 in let _cur = __ in
            yy7 State{..}
        _c | 0x30 <= _c && _c <= 0x39 ->
            let __ = _cur + 1 in let _cur = __ in
            yy9 State{..}
        _c | 0x45 == _c || 0x65 == _c ->
            let __ = _cur + 1 in let _cur = __ in
            yy11 State{..}
        _c | True ->
            yy10 State{..}

yy10 :: State -> Number
yy10 State{..} =
    let _cur = _mar in
    case _accept of
        _c | 0 == _c ->
            yy2 State{..}
        _c | 1 == _c ->
            yy6 State{..}
        _c | True ->
            yy8 State{..}

yy11 :: State -> Number
yy11 State{..} =
    let yych = index _str _cur in
    case yych of
        _c | 0x2B == _c || 0x2D == _c ->
            let __ = _cur + 1 in let _cur = __ in
            yy12 State{..}
        _c | 0x30 <= _c && _c <= 0x39 ->
            let __ = _cur + 1 in let _cur = __ in
            yy13 State{..}
        _c | True ->
            yy10 State{..}

yy12 :: State -> Number
yy12 State{..} =
    let yych = index _str _cur in
    case yych of
        _c | 0x30 <= _c && _c <= 0x39 ->
            let __ = _cur + 1 in let _cur = __ in
            yy13 State{..}
        _c | True ->
            yy10 State{..}

yy13 :: State -> Number
yy13 State{..} =
    let yych = index _str _cur in
    case yych of
        _c | 0x30 <= _c && _c <= 0x39 ->
            let __ = _cur + 1 in let _cur = __ in
            yy13 State{..}
        _c | True ->
            yy8 State{..}

lexer :: State -> Number
lexer State{..} =
    yy0 State{..}



main :: IO ()
main = do
    let test s n = do
            let st = State {_str = s, _cur = 0, _mar = 0, _accept = 0}
            when (lexer st /= n) $ error "failed"

    test "123\0" INum
    test "123.4567\0" FNum
