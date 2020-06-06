# Statistics about prime numbers

### prime_density.c

This program goes through each number and checks if it's prime, just looking at the first half of the previously calculated prime numbers. It also prints, given an interval as an argument, the percentage of prime numbers among the rest for each.

#### Try it:

```bash
$ gcc -Wall -g -o prime_density prime_density.c
$ ./prime_density <max> <interval>
```

<ul>
    <li>&lt;max&gt: maximum number it will reach</li>
    <li>&lt;interval&gt;: interval between each printed value</li>
</ul>

#### Example:

```bash
$ ./prime_density 100 10
$ cat data.json 
[
[10, 44.4444],
[20, 42.1053],
[30, 34.4828],
[40, 30.7692],
[50, 30.6122],
[60, 28.8136],
[70, 27.5362],
[80, 27.8481],
[90, 26.9663],
[100, 25.2525]
]
```

#### Visualizing data with [flourish.studio](https://flourish.studio)

Animated video: [density.mp4](https://github.com/brauli0/prime-numbers/blob/master/density.mp4?raw=true)

Screenshots:

![alt text](https://github.com/brauli0/prime-numbers/blob/master/chart_200.png)

![alt text](https://github.com/brauli0/prime-numbers/blob/master/chart_15M.png)