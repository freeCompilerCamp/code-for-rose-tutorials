import subprocess

tests = 5
expected = [2, 0, 1, 1, 2]

# Run the submission executable on each test input code files test0.cpp, test1.cpp, ...
results = [subprocess.check_output(["./complex-types_submission", "test{}.cpp".format(i)])
    for i in range(tests)]

correct = 0
for i in range(tests):
    if (int(results[i]) == expected[i]):
        correct += 1

score = (float(correct) / tests) * 100

print("Test Cases Passed: {} out of {} //// SCORE: {}%"
    .format(correct, tests, score))
