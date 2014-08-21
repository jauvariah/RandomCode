#Remove duplicate chars in str without using buffer

def dupeCharRemoval(string):
    for i in range (0, len(string)):
        for j in range(i, len(string)):
            if string[i] == string[j]:
                string = string[:j] + string[(j+1):]
    return string

print dupeCharRemoval("abcnalsdkfjalsdjeijlsdkfjiejlsdjfladssdj")
