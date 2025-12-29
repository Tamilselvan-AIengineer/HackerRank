def gradingStudents(grades):
    updated = []
    for grade in grades:
        if grade < 38:
            updated.append(grade)
        else:
            remainder = grade % 5
            if remainder >= 3:
                updated.append(grade + (5 - remainder))
            else:
                updated.append(grade)
    return updated


if __name__ == "__main__":
    n = int(input().strip())
    grades = [int(input().strip()) for _ in range(n)]
    
    result = gradingStudents(grades)
    for g in result:
        print(g)
