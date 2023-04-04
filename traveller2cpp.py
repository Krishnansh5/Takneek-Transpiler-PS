import sys

if(sys.argv.__len__() < 2):
    print("Usage: python traveller2cpp.py <input file>")
    exit(0)

inputf = sys.argv[1]

sys.stdout = open("travel2cppOutput.txt","w")

with open(inputf, 'r') as f:
    for line in f:
        line = line.strip()
        line = line.replace(" ", "")
        if(line.__len__() < 1):
            continue
        tokens = line.split(",")
        if(tokens[2] == "finish"):
            print(f'*cond += {tokens[1]};')
            print(f'*prev_loc = "{tokens[0]}";')
            print('*maxCond = max(*cond, *maxCond);')
            continue
        if(tokens[0] == "start"):
            print(f'cout << *prev_loc << ", " << *cond + {tokens[1]} << ", " << "{tokens[2]}" << endl;')
            continue
        print(f'cout << "{tokens[0]}" << ", " << *cond + {tokens[1]} << ", " << "{tokens[2]}" << endl;')
