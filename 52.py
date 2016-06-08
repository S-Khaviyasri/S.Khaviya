def strlen(s):
    if s == "": return 0
    return s.rindex(s[-1]) + 1
