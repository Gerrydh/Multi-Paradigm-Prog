word = 'dataanalytics'

newword = word.replace('a', '*')

print(newword)

##########################################

word1 = 'multi paradigm programming'

def replaceLetter(text, char):
    result = ''
    for r in text:
        if r != char:
            result += r
    return text.replace(char, '*')
text = replaceLetter(word1, 'i')

print(text)