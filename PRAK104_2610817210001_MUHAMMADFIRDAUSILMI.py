priceA = 400000
priceB = 350000
discountA = 0.13
discountB = 0.21
priceAfterDiscount_1 = priceA - (priceA * discountA)
priceAfterDiscount_2 = priceB - (priceB * discountB)

print(f"Harga sepatu A adalah {priceA}")
print(f"Harga sepatu B adalah {priceB}")
print(f"Sepatu A mendapat diskon {discountA*100:.0f}% sehingga harganya menjadi {int(priceAfterDiscount_1)}")
print(f"Sepatu B mendapat diskon {discountB*100:.0f}% sehingga harganya menjadi {int(priceAfterDiscount_2)}")