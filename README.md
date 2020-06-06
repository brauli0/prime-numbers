# Statistics about prime numbers

## prime_density.c

```bash
$ gcc -Wall -g -o prime_density prime_density.c
$ ./prime_density <max> <interval>
```

<ul>
    <li>&lt;max&gt: maximum number it will reach</li>
    <li>&lt;interval&gt;: interval between each printed value</li>
</ul>

### Example:

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