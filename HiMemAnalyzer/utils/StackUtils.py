#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# @Time    : 2021/11/9 下午1:55
# @Author  : zkw
# @File    : StackUtils.py
from handler.BaseHandler import SEP_OR
from textwrap import TextWrapper

wrapper = TextWrapper(width=100, subsequent_indent="\t")


def stackAutoWrap(rawStack: str) -> str:
    newLines = []
    lines = rawStack.split(SEP_OR)
    for line in lines:
        if len(line) > 150:
            newLines.append(wrapper.fill(line))
    return "\n".join(newLines)
