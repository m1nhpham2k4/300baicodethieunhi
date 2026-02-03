import os

for i in range(1, 301):
    old_name = f"{i}.cpp"
    new_name = f"{i:03}.cpp"   # format 3 chữ số: 001, 011, 300

    if os.path.exists(old_name):
        os.rename(old_name, new_name)
