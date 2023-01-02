#program to check if the sequence is balanced or not

sequence='({})({)}'
while True:
        if '()' in sequence :
            sequence = sequence.replace ( '()' , '' )
        elif '{}' in sequence :
             sequence = sequence.replace ( '{}' , '' )
        elif '[]' in sequence :
            sequence = sequence.replace ( '[]' , '' )
        else :
            print (not sequence)
            break

