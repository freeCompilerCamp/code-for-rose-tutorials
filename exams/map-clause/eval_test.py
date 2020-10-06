import subprocess

tests = 5
expected = [2, 0, 1, 1, 4]

# Run the submission executable on each test input code files test0.c, test1.c, ...
results = [subprocess.check_output(["./map-clause_submission", "-rose:openmp:ast_only", "test{}.c".format(i)])
    for i in range(tests)]

correct = 0
for i in range(tests):
    if (int(results[i]) == expected[i]):
        correct += 1

score = (float(correct) / tests) * 100

print("Test Cases Passed: {} out of {} //// SCORE: {}%"
    .format(correct, tests, score))
