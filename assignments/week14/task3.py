def most_profit(prices):
    min_price = prices[0]
    max_profit = 0

    # iterate starting from index 1
    for price in prices[1:]:
        if price < min_price:
            min_price = price # find lowest price after 0th index
        else:
            current_profit = price - min_price
            if current_profit > max_profit:
                max_profit = current_profit
        
    return max_profit

prices = [10, 7, 5, 8, 11, 2, 6]
print(most_profit(prices))