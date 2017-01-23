symbols = ("", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "a" ,"b" , "c", "d", "e", "f", "g", "h", "i", "j", "k", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z")
def pass_selection(symbols = ("", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9")):
    l = len(symbols)
    for i in range(l):
        s1 = symbols[i]
        for i in range(l):
            s2 = symbols[i]
            for i in range(l):
                s3 = symbols[i]
                for i in range(l):
                    s4 = symbols[i]
                    for i in range(l):
                        s5 = symbols[i]
                        for i in range(l):
                            s6 = symbols[i]
                            for i in range(l):
                                s7 = symbols[i]
                                for i in range(l):
                                    s8 = symbols[i]
                                    for i in range(l):
                                        s9 = symbols[i]
                                        for i in range(l):
                                            s10 = symbols[i]
                                            for i in range(l):
                                                s11 = symbols[i]
                                                for i in range(l):
                                                    s12 = symbols[i]
                                                    for i in range(l):
                                                        s13 = symbols[i]
                                                        for i in range(l):
                                                            s14 = symbols[i]
                                                            for i in range(l):
                                                                s15 = symbols[i]
                                                                for i in range(l):
                                                                    s16 = symbols[i]
                                                                    for i in range(l):
                                                                        s17 = symbols[i]
                                                                        for i in range(l):
                                                                            s18 = symbols[i]
                                                                            for i in range(l):
                                                                                s19 = symbols[i]
                                                                                for i in range(l):
                                                                                    s20 = symbols[i]
                                                                                    passwd = s1 + s2 + s3 + s4 + s5 + s6 + s7 + s8 + s9 + s10 + s11 + s12 + s13 + s14 + s15 + s16 + s17 + s18 + s19 + s20
                                                                                    print(passwd) # or other operation
pass_selection(symbols)