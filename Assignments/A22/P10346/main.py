import io

'''
int n, k;
    while (cin >> n >> k)
    {
        int sum = n;
        while (n >= k)
        {
            sum += n / k;
            n = (n / k) + (n % k);
        }
        cout << sum << '\n';
'''
f = io.open('infile', 'r')
line = f.readline()
while line != '':
        print(line)
        line = f.readline()
f.close()