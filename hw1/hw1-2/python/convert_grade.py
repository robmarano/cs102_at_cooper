#
# convert_grade.py
#
# Program 2
# 
# Application to assign a letter grade to a numeric test result.
# INPUT
#   user enters at the terminal multiple test scores, integer between 0 and 100, inclusive
#   store the input values into an array.
# OUTPUT
#   first print out the letter grade for each score in descending, sorted order.
#   then, print out the mean, the median, and the mode.
# ALGORITHM
#   90-100 results in an 'A', 80-89 results in a 'B', 70-79 results in a 'C',
#   60-69 results in a 'D', and anything less than 60 results in an 'F'.
#

EXIT_SUCCESS_CODE = 0   # inform the Bash shell of the exit value
                        # let's assume success, that is, value = 0

#
# mainline of program
#
if __name__ == '__main__':
    #
    # gather and initially process data from user
    #
    num_values = input('Enter number of scores you will enter: ')
    num_values = int(num_values)

    scores = [] # list of scores to be entered by the user

    cnt = 0 # counter to keep track of num of scores inputted
    while (cnt < num_values):
        cnt += 1
        score = input('Enter value {} of {} = '.format(cnt,num_values))
        scores.append(int(score))
    # what happens if you do not check the values inputted?

    #
    # sort descending the score values in-place
    #
    scores.sort()
    scores.reverse()

    #
    # convert scores to grades
    #
    grades = []
    for score in scores:
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
        grades.append(grade)

    #
    # calc mean
    #
    cnt = len(scores)
    sum = float(0.0)

    for score in scores:
        sum += score
    mean = float(sum / num_values)
    # Convert mean score to letter grade
    mean_grade = 'F'
    if  ((mean >= 90)):
        mean_grade = 'A'
    elif ((mean >= 80) & (mean < 90)):
        mean_grade = 'B'
    elif ((mean >= 70) & (mean < 80)):
        mean_grade = 'C'
    elif ((mean >= 60) & (mean < 70)):
        mean_grade = 'D'
    elif (mean < 60):
        mean_grade = 'F'
    #
    # calc median
    #
    if ( (num_values % 2) == 0): # test if cnt is even
        median = (scores[int(num_values/2-1)] + scores[int(num_values/2)]) / 2.0
    else:
        median = scores[int(num_values/2)]
    # Convert median score to letter grade
    median_grade = 'F'
    if  ((median >= 90)):
        median_grade = 'A'
    elif ((median >= 80) & (median < 90)):
        median_grade = 'B'
    elif ((median >= 70) & (median < 80)):
        median_grade = 'C'
    elif ((median >= 60) & (median < 70)):
        median_grade = 'D'
    elif (median < 60):
        median_grade = 'F'

    #
    # calc mode
    #
    # START
	#   Step 1 → Take an integer set A of n values
	#   Step 2 → Count the occurence of each integer value in A
	#   Step 3 → Display the value with highest occurence
    #   (the highest value too in case there are more than one modes)
	# STOP
    maxVal = 'F'
    maxCnt = int(0)

    for i in range(num_values):    # range() produces/yields value from 0 to cnt-1
        count = int(0)
        print(count)
        for j in range(len(grades)):
            if (grades[j] == grades[i]):
                count += 1
        
        if (count > maxCnt):
            maxCnt = count
            maxVal = grades[i]
    print(count)
    if (count > 1): # no mode if the count == 0 or 1
        mode = maxVal
    else:
        mode = 'no mode'

    # OUTPUT: inform the user of the result
    #print('Score sorted in descending order: ')
    # for score in scores:
    #     print(score, end=" ")
    # or you can write these two line using the "unpack" operator to print on one line
    #print(*scores)

    print('Scores converted to grades:')
    for i in range(num_values):
        print('Score {} earns {}'.format(scores[i], grades[i]))
    print('\n')
    print('Stats summary for these {0} scores:'.format(num_values))
    print('Mean  = {0:.2f} = {1}'.format(mean, mean_grade))
    print('Median = {0:.2f} = {1}'.format(median, median_grade))
    print('Mode = {}'.format(mode))
    
    # exit mainline with success code, 0x00
    exit(EXIT_SUCCESS_CODE)