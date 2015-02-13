import random
#Martingale Simulation for roulette

#This program outputs the expected value
#of single zero roulette games using the martingale betting system

#Input: strategy, initial bank roll, target winnings, initial deposit, stop loss, number of trials.
#Output: The average expected value of each trial. 


def selectColor(strategy):
    if strategy == 0:
        return "".join(random.sample(["r", "b"], 1))
    elif strategy == 2:
        return "r"
    elif strategy == 3:
        return "b"

def betWon(betColor):
    rollNum = random.randint(0,37)
    black = [2, 4, 6, 8, 10, 11, 13, 15, 17, 20, 22, 24, 26, 28, 29, 31, 33, 35]
    red = [1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36]
    if betColor == "b":
        betColor = black
    if betColor == "r":
        betColor = red
    if rollNum in betColor:
        return True
    else:
        return False

def getFinalBankroll(strategy, betAmount, bankRoll):
    lostPrevious = False
    while bankRoll > stopLoss and bankRoll < targetWinning:
        if lostPrevious:
            betAmount = 10

        winCurrentRoll = betWon(selectColor(strategy))

        if winCurrentRoll:
            bankRoll += betAmount
            betAmount *= 2
            lostPrevious = False
        else:
            bankRoll -= betAmount
            lostPrevious = True
    return bankRoll

def getExpectedValue(strategy, betAmount, bankRoll, numRuns):
    results = {"wins":0, "losses":0}
    winAmount = 0
    for i in range (numRuns):
        finalBankRoll = getFinalBankroll(strategy, betAmount, bankRoll)
        if finalBankRoll > bankRoll:
            results["wins"] += 1
            winAmount += finalBankRoll
        else:
            results["losses"] += 1
    average = winAmount / results["wins"]
    expectedValue = (results["wins"]/numRuns) * average + (results["losses"]/numRuns) * stopLoss
    return expectedValue

bankRoll = 2000
targetWinning = 2400
stopLoss = 1500
initialBet = 10
maxRuns = 1000
betAmount = 10
strategy = [0, 1, 2, 3] #1. Random 2.Alternate 3.Always Red 4.Always Black

print (getExpectedValue(strategy[0], 10, 2000, 10000))