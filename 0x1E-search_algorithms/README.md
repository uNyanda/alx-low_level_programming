<h1>0x1E. C - Search Algorithms</h1>
<table>
  <tr>
    <th></th>
    <th><strong>Task</strong></th>
    <th><strong>Description</strong></th>
    <th><strong>File</strong></th>
  </tr>
  <tr>
    <td>0.</td>
    <td><u>Linear Search</u></td>
    <td>Function searches for a value in an array of integers using the <code>Linear search algorithm</code>.</td>
    <td><a href="0-linear.c">0-linear.c</a></td>
  </tr>
  <tr>
    <td>1.</td>
    <td><u>Binary Search</u></td>
    <td>Function searches for a value in a sorted array of integers using the <code>Binary search algorithm</code>.</td>
    <td><a href="1-binary.c">1-binary.c</a></td>
  </tr>
  <tr>
    <td>2.</td>
    <td><u>Big O #0</u></td>
    <td><code>Time complexity</code> (worst case) of a linear search in an array of size <code>n</code></td>
    <td><a href="2-O">2-O</a></td>
  </tr>
  <tr>
    <td>3.</td>
    <td><u>Big O #1</u></td>
    <td><code>Space complexity</code> (worst case) of an iterative linear search algorithm in an array of size <code>n</code></td>
    <td><a href="3-O">3-O</a></td>
  </tr>
  <tr>
    <td>4.</td>
    <td><u>Big O #2</u></td>
    <td><code>Time complexity</code> (worst case) of a binary search in an array of size <code>n</code></td>
    <td><a href="4-O">4-O</a></td>
  </tr>
  <tr>
    <td>5.</td>
    <td><u>Big O #3</u></td>
    <td><code>Space complexity</code> (worst case) of a binary search in an array of size <code>n</code></td>
    <td><a href="5-O">5-O</a></td>
  </tr>
  <tr>
    <td>6.</td>
    <td><u>Big O #4</u></td>
    <td>
      Space complexity of this function/algorithm:<br><br>
      <pre><code>
        int **allocate_map(int n, int m)
        {
            int **map;
            map = malloc(sizeof(int *) * n);
            for (size_t i = 0; i < n; i++)
            {
                map[i] = malloc(sizeof(int) * m);
            }
            return (map);
        }
      </code></pre>
    </td>
    <td><a href="6-O">6-O</a></td>
  </tr>
  <tr>
    <td>7.</td>
    <td><u>Jump Search</u></td>
    <td>Function searches for a value in a sorted array of integers using <code>Jump search algorithm</code></td>
    <td><a href="100-jump.c">100-jump.c</a></td>
  </tr>
  <tr>
    <td>8.</td>
    <td><u>Big O #5</u></td>
    <td><code>Time complexity</code> (average case) of a jump search in an array of size <code>n</code>, using <code>step = sqrt(n)</code></td>
    <td><a href="101-O">101-O</a></td>
  </tr>
</table>