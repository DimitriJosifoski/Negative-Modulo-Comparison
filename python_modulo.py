test_cases = [(7, 3), (-7, 3), (7, -3), (-7, -3)]

print(f"{'Expression':<12} | {'Result'}")
print("-" * 20)

for a, b in test_cases:
    print(f"{a:2} % {b:2}      | {a % b:2}")