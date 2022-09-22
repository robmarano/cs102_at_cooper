#
# convert_grade.py
#

GRADE_INSTANCE = 84     # input to the program via symbolic constant
EXIT_SUCCESS_CODE = 0   # inform the Bash shell of the exit value
                        # let's assume success, that is, value = 0

#
# mainline of program
#
if __name__ == '__main__':
    score = int(GRADE_INSTANCE) # INPUT: take input from user, here at compile time
    grade = 'F'
    # what happens if we simply declare but do not define this variable?

    # Assess the score and apply logic
    if  (score >= 90):
        grade = 'A'
    elif ((score >= 80) & (score < 90)):
        grade = 'B'
    elif ((score >= 70) & (score < 80)):
        grade = 'C'
    elif ((score >= 60) & (score < 70)):
        grade = 'D'
    elif (score < 60):
        grade = 'F'

    # OUTPUT: inform the user of the result
    print('The score of {} earns a grade of {}.\n'.format(score, grade))
    
    # exit mainline with success code, 0x00
    exit(EXIT_SUCCESS_CODE)