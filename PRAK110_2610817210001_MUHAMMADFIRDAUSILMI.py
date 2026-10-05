base = 5
height = 12
side_a = height
side_c = base
side_b = (base**2 + height**2)

circumference = side_a + side_b + side_c
area = 0.5 * base * height

print("Diketahui:")
print(f"Alas = {base} cm")
print(f"Tinggi = {height} cm")
print("\nJawab:")
print(f"Sisi A = {int(side_a)} cm")
print(f"Sisi B = {int(side_b)} cm")
print(f"Sisi C = {int(side_c)} cm")
print(f"Keliling = {int(circumference)} cm")
print(f"Luas = {int(area)} cm")