# Python3 program to solve fractional
# Knapsack Problem

class ItemValue:

	"""Item Value DataClass"""

	def __init__(self, wt, val, profit, ind):
		self.wt = wt
		self.val = val
		self.profit = profit
		self.ind = ind
		self.cost = val // wt

	def __lt__(self, other):
		return self.cost < other.cost

# Greedy Approach


class FractionalKnapSack:

	def getMaxValue(wt, val, profit, capacity):
		"""function to get maximum value """
		iVal = []
		for i in range(len(wt)):
			iVal.append(ItemValue(wt[i], val[i], profit[i], i))

		# sorting items by value
		iVal.sort(reverse=True)

		totalValue = 0
		for i in iVal:
			curWt = int(i.wt)
			curProfit = int(i.profit)
			if capacity - curWt >= 0:
				capacity -= curWt
				totalValue += curProfit
			else:
				fraction = capacity / curWt
				totalValue += curProfit * fraction
				capacity = int(capacity - (curWt * fraction))
				break
		return totalValue


# Driver Code
if __name__ == "__main__":
	wt = [100, 100, 100, 100]
	company = ["GRASIM", "TATASTEEL", "LT", "MARUTI", "TCS", "TITAN"]
	opening_price = [1025.00, 651.00, 1370.00, 8117.00, 3308.95, 1505.05]
	closing_price = [1114.65, 731.50, 1396.40, 8329.00, 3339.80, 1621.35]
	val = []
	profit = []
	for (o,c) in zip(opening_price, closing_price):
		val.append((c-o)*100/o)
		profit.append(c-o)
	capacity = 100000

	# Function call
	maxValue = FractionalKnapSack.getMaxValue(wt, val, profit, capacity)
	print("Maximum value in Knapsack =", maxValue)
