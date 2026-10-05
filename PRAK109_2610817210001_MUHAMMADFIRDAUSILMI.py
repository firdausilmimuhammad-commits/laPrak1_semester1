yuZhongArmy = 958730
hero = ["Zilong", "Ling", "Baxia", "Wwanwan", "Chang'e"]

army_per_hero = yuZhongArmy // len(hero)

print(f"Jumlah pasukan yang dibawa Yu Zhong = {yuZhongArmy}")
print(f"Jumlah pahlawan = {len(hero)}")
print(f"Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah {army_per_hero} pasukan")