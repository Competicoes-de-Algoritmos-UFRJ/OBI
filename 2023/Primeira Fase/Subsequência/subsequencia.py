a, b = [int(x) for x in input().split()]

sa = [int(x) for x in input().split()]

sb = [int(x) for x in input().split()]

pont_a = 0
pont_b = 0

while pont_a<a and pont_b<b:

    if sa[pont_a] == sb[pont_b]:
        pont_b+=1

    pont_a+=1

if pont_b == b:
    print('S')
else:
    print('N')
