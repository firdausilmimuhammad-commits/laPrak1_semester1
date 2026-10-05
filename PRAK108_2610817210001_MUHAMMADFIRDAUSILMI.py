import math

around = 5
distance_km = 14

circumference_total = distance_km / around
radius = circumference_total / (2 * math.pi)

print("Diketahui:")
print(f"Pak Dengklek mengelilingi taman = {around} Putaran")
print(f"Jarak tempuh Pak Dengklek = {distance_km} Kilometer")
print("Jawaban:")
print(f"Jari-jari taman yang dikelilingi Pak Dengklek adalah {radius:.2f} Kilometer")