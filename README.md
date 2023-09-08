# CF构造每日一题

## 9.08

信息学奥赛每日一题
距离CSP-J/S第一轮还剩07天
距离CSP-J/S第二轮还剩41天

题目难度：CF1400
题目类型：构造；深度优先搜索；贪心


给定一个大小为nxn的方阵，在这个方阵的主对角线上放着1-n共n个数字，你需要对对角线及其下方的区域划分为n个区域，每个区域只能出现一种数字x，而且这块区域中出现数字x的方格都是两两相邻且总数为x（详情见题面和演示图）


原题链接: https://codeforces.com/problemset/problem/1517/C


本题是一道puzzle题，比较考察思维。

经过举例观察，我们不难发现有一种方法总是能够构造出答案：
对于每个对角线上的数字x，先向右找空出的方格，如果没有，就向下找。这样我们总是能够构造出一个有效解。

上述方法比较偏向与直觉，接下里我们考虑一种比较有逻辑的做法。
对于主对角线，如果我们把这条对角线去掉，那么很显然，其下面的一条的对角线的长度为n-1；
那么我们对每条对角线单独考虑。对于长度为n的对角线有n个数字1-n，那么对于其相邻的长度为n-1的对角线有n-1个数字，其数字为2-n,那么依次向下，便可以使得每个数字x出现x次，而且能够保证相邻。



---

## 9.07

信息学奥赛每日一题
距离CSP-J/S第一轮还剩08天
距离CSP-J/S第二轮还剩42天

题目难度：CF1400
题目类型：构造；位运算；组合数学；

给定一个长度为n的数组，求满足以下条件的数组的排列数量。
在数组中任选一个下标i(1<=i<=n-1)将数组分为两个部分
下标i以及其前面的元素为一部分，其后的元素为一部分，这两部分的按位与和相等。


原题链接: https://codeforces.com/problemset/problem/1453/B


本道题目比较考察思维。

首先我们需要想明白，题目给出这个条件到底是什么意思，或者翻译为一个可行的方案，去计数。

其实经过推导我们不难发现，满足上述条件，首先需要这个数组的第一个元素和最后一个元素都是相同的，而且需要其他的元素与这个元素按位与的结果为这个元素本身。

那么显然，只有数组中最小的元素可能满足上述要求。

那么我的统计方案变成了：统计最小的元素的出现次数，判断这个最小元素与其他元素按位与的结果是否为其本身。

那么如果这个最小元素满足条件，而且其至少出现了两次，便说明有可行的数组排列方案。

令最小的元素出现的次数为m，那么最后的答案为 $C_{m}^2 \cdot 2 \cdot (n-2)!$
也就是 (m - 1) * m * (n - 2)! 。

---

## 9.06

信息学奥赛每日一题
距离CSP-J/S第一轮还剩09天
距离CSP-J/S第二轮还剩43天

题目难度：CF1400
题目类型：构造；

给定一个长度为n的数组，在改变一个元素的值之后，你可以对其执行以下操作：
1.选择数组的一个后缀，将后缀中所有的元素值+1；
2.选择数组的一个后缀，将后缀中所有的元素值+1。

求改变一个元素值之后，最少需要执行以上操作多少次可以使得数组中所有元素相同。


原题链接: https://codeforces.com/problemset/problem/1453/B


假设我们无法改变任何元素，如果采用以上操作让整个数组的所有元素值相等，那么显然，我们需要从后往前进行操作；
先执行 abs(arr[n] - arr[n-1]) 次操作，将n-1之后的元素变为arr[n-1]，然后再执行 abs(arr[n-1] - arr[n-2])次操作，将n-2之后的元素，变为arr[n-2]，以此类推，最后一共需要执行 $\sum_{i=2}^{n}abs(arr[i]-arr[i-1])$次操作。

接下来我们考虑再修改一个元素的基础上，如何尽可能多地减少需要操作的次数。

我们首先考虑第一个元素，如果把第一个元素arr[1]修改为arr[2]，那么显然我们可以减少abs(arr[1]-arr[2])次操作次数；相应的如果把最后一个元素arr[n]修改为arr[n-1]那么可以减少abs(arr[n]-arr[n-1])。

接下来我们讨论修改数组中间的元素。
如果无法修改元素，则对于中间一个元素arr[i]，需要先执行abs(arr[i+1]-arr[i]) 次操作，将i以后的元素变为arr[i]，然后再花费abs(arr[i]-arr[i-1])次操作，将i-1以后的元素变为arr[i-1]。
而修改一个元素之后，我们可以考虑把arr[i]修改为arr[i-1]到arr[i+1]之间的任意一个元素，那么此时需要操作的次数为abs(arr[i+1]-arr[i-1])
那么显然对于每一个中间元素，对其进行修改，最多可以减少 abs(arr[i-1] - arr[i]) + abs(arr[i+1] - arr[i]) - abs(arr[i-1] - arr[i+1]) 次操作，我们在上述答案中选择一个最大值，然后从原先没有修改元素得到的答案中减去它即可。

---

## 9.05

信息学奥赛每日一题
距离CSP-J/S第一轮还剩10天
距离CSP-J/S第二轮还剩44天

题目难度：CF1400
题目类型：构造；双指针


给你两个长度为n的只包含字母a,b,c的字符串s和t，你可以对字符串s执行以下操作：
1. 选择s中的一个子字符串"ab"转化为"ba"
2. 选择s中的一个子字符串"bc"转化为"cb"


原题链接: https://codeforces.com/problemset/problem/1697/C

两种操作本质上就是可以把s中的a向右移动，c向左移动。
所以把s和t中的所有字符b去掉之后，两个字符串应该是相同的。
另外，由于a不能向左移动，c不能向右移动，所以要检查字符串s和t中，对应的字符a和字符b的下标。
对于字符a，在s中每个字符a在字符串t中都应该有一个下标大于等于它的a与之对应；
相对对应的，在s中每个字符c在字符串t中都应该有一个下标小于等于它的c与之对应。

---

## 9.04

信息学奥赛每日一题
距离CSP-J/S第一轮还剩11天
距离CSP-J/S第二轮还剩46天

题目难度：CF1400
题目类型：构造；位运算；数学


给定一个包含n个非负整数的数组，你最多可以给这个数组添加3个元素，使得数组的和刚好为异或和的两倍。


原题链接: https://codeforces.com/problemset/problem/1270/C

本题考查位运算中异或的相关知识。

异或运算有一个非常重要的特点就是两个相同的数字异或的结果为0。

我们利用以上性质解决本题。

令原数组和为sum，异或和为sum，
那么显然我们可以在数组后添加两个元素：xsum和sum+xsum。

这样对于数组的和为(sum+xsum)*2，异或和为 sum+xsum，满足题目要求。

---

## 9.03

信息学奥赛每日一题
距离CSP-J/S第一轮还剩12天
距离CSP-J/S第二轮还剩47天

题目难度：CF1400
题目类型：构造；图论；数论；深度优先搜索


给定一个具有n个顶点的树，你需要构造一个“Prime Tree”。
对于一个“Prime Tree”，树上所有长度为1或者2的简单路径，路径上所有边权之和为素数。


原题链接: https://codeforces.com/problemset/problem/1627/C

本题具有一定难度。突破口在于关注到这个简单路径长度最多为2，可以考虑下这样的简单路径的模型。

不难发现，我们需要这棵树上没有顶点和3条或以上的边相连。

我们来证明这个结论。

首先对于一个素数，想要拆分成两个素数的和，那必然是2+x的形式，其中x为素数。因为除2以外的所有素数皆是奇数，奇数相加为偶数，自然不满足条件。

那么对于一个连有三条边的顶点，我们令其中的一条边为2，那么剩下的两条边中必然皆为奇数，这样他们的和为合数，无法满足题目要求。

那么对于满足所有顶点的度小于等于2的树，其形态为一条链，那么我们使用dfs对这条链轮上的边轮流赋值为2和任意一个除2以外的素数即可。

---

## 9.02

信息学奥赛每日一题
距离CSP-J/S第一轮还剩13天
距离CSP-J/S第二轮还剩48天

题目难度：CF1400
题目类型：构造；贪心；图论；排序

给你一个具有n个顶点的有向图，已知由1号顶点到达所有顶点的最短距离。
你需要构造一个这样的有向图（可以有负权边），使得整个图的所有边的总和最小。


原题链接: https://codeforces.com/problemset/problem/1540/A


本题考虑贪心策略。

我们将所有的距离按照从小到大顺序排序。不难发现，对于后面的点，我们总是希望尽可能多地构造一条负权边，指向之前的节点。
这样我们在满足最短路径的同时能够使得总的边权和最小。那么不难发现，除点1外，其他的点总是能够和之前的点连一条边，边权的值为他们两个顶点距离顶点1最短距离之差的相反数。

---

## 9.01

信息学奥赛每日一题
距离CSP-J/S第一轮还剩14天
距离CSP-J/S第二轮还剩49天

题目难度：CF1400
题目类型：构造；数据结构；贪心


n个人，每个人可以最多参加 a[i] 次会议。任意两个人之间都可以展开以次会议。求n个人最多能够产生多少次会议。


原题链接: https://codeforces.com/problemset/problem/1579/D


本题考虑贪心策略。

设想最终最多会有多少人还胜有会议次数？
结果很显然，最好情况是每个人的会议次数都用完，那么除此之外最多只能有 1 个人剩余会议次数。
所以需要一种策略能够使得最后剩下的人剩余的会议次数最少，或者为0。
那么考虑以下贪心策略：
如果还有对话次数的人超过1个人，则从剩下的人中选择两个剩余会议次数最多的人，给他们安排一场会议。

我们把问题抽象出来形成子问题：对于剩下的m个人，若何操作使得结果更优？
显然选择两个参会次数较多的人参加会议不会使得结果变坏。那么完成此轮操作过后：
问题变成对于剩下的k(k<=m)个人，若何操作使得结果更优？
对于每个这样的子问题我们使用上述贪心策略都不会使得结果变坏，那么显然，重复上述操作，直到解决全部子问题，
得到答案便是最优的。

---


## 8.31

信息学奥赛每日一题
距离CSP-J/S第一轮还剩15天
距离CSP-J/S第二轮还剩50天

题目难度：CF1400
题目类型：构造；贪心

给定一个长度为n的只包含有R，G，B三种字符的字符串，你可将其中的一些字符修改为任意R，G，B中的一种，要求尽可能少的修改以使整个字符串中，不含有两个相邻的字符相同。

原题链接: https://codeforces.com/problemset/problem/1108/D

对于此题目，我们采用贪心策略，将所有连续的多个字符当作一个块来看。
对于每个长度m为奇数的块，例如"XXXXX"，我们可以将其中的偶数位的字符修改为其他任意颜色，形成 "XYXYX" 即可，那么显然我们只需要修改 m / 2 （向下取整）个元素即可。
对于每个长度m为偶数的块，例如"XXXX"，我们依然可以考虑修改其中偶数位的字符，但是由于这时其后可能会跟有其他元素，例如"XXXXY"，那么我们如果修改的这个颜色为Y的话，那么会导致和后面跟的元素相同，所以我们考虑修改为这两种颜色之外的Z，形成"XZXZY"即可满足题目要求。

---

## 8.30

信息学奥赛每日一题
距离CSP-J/S第一轮还剩16天
距离CSP-J/S第二轮还剩51天

题目难度：CF1400
题目类型：构造；数据结构；贪心

给你一个数组，你可以按照你下规则使用k中颜色对其染色：
1. 每个颜色可以被染成k中颜色中的任意一种，也可以不染色；
2. 任意两个值相同的元素不可以染成同一种颜色；
3. 数组中每种颜色的元素数量要相同。
4. 按照以上规则最大化被染色的元素的数量。

原题链接: https://codeforces.com/problemset/problem/1551/B2

本题考虑贪心策略；
1. 首先相同颜色的元素值不能相同，所以对于每种数字最多图染k个。
2. 对于出现次数不满k次的元素，考虑尽可能多的使用他们。
3. 假设数组中有x个不同元素，将不同数值的元素的下标分开存储，且每个元素最多只取k个下标。
4. 统计m个不相同的元素每个元素出现次数之和（超出k的按k统计）
5. 筛选之后的数组元素不会出现k个相同的元素，所以不用担心相同的元素被染为统一种颜色，又由于每种颜色染色的元素数量相等，所以m必须要能够偶被k整除，那么我们将m调整为m - (m mod k) 即可，然后对k中颜色轮流使用图染即可。

---

## 8.29

信息学奥赛每日一题
距离CSP-J/S第一轮还剩17天
距离CSP-J/S第二轮还剩52天

题目难度：CF1400
题目类型：构造；数据结构；贪心

给定n个正整数，每个正整数不超过给定的数字x。
你需要把这n个数字分成m个部分，使得任意两个部分各自的数字和的差不超过x。

原题链接: https://codeforces.com/contest/1515/problem/C

本题我们考虑贪心策略，由于给定的每个数字都不会超过x，所以我们完全可以把n个数字分成m个满足题目要求的部分。
我们考虑一下贪心策略，我们一开始设定m个部分为空，和为0，那么每次我们选择这m个部分中当前元素和最小的那个，将一个元素划分给它。这样我们最后m个部分中最大的那个与最小的那个的差一定不超过x

我们来证明以下贪心策略：
由于我们每次选择一个和最小的部分，将一个不超过x的数字划分给他，那么这部完成之后，它和之前m个部分中和最大的那个的差一定是小于等于x的，我们此次操作并不会导致某两个部分的数字和之差超过x。

---

## 8.28

信息学奥赛每日一题
距离CSP-J/S第一轮还剩18天
距离CSP-J/S第二轮还剩53天

题目难度：CF1400
题目类型：构造；贪心

给你一个长度为n数字，以及q个询问，每个询问或是增加一个数字x，或是减少一个数字x（保证减少的数字存在）
在每次查询的增加或删除后，你需要回答，在剩下的数字中能够找到8个数字作为一个正方形的边长和一个矩形的边长。

原题链接: https://codeforces.com/problemset/problem/1393/B

统计每个数字出现的次数，然后我们要统计每个数字出现次数整除2的和sum2, 每个数字出现次数整除sum4

这样如果满足条件sum4>=1且sum2>=2我们就能构造出一个正方形和矩形。
sum4>=1保证我们能够有四个相同的数字构造一个正方形。
sum2>=4保证除了4个相同的数字构成正方形之外，有两个至少出现2次的数字构成一个矩形。

---

## 8.27

信息学奥赛每日一题
距离CSP-J/S第一轮还剩19天
距离CSP-J/S第二轮还剩54天

题目难度：CF1400
题目类型：构造；动态规划；贪心

给定一个正整数n，你需要使用最少的只包含0和1的十进制数(quasibinary)来组成n。

原题链接: https://codeforces.com/contest/538/problem/B

采用贪心策略，每次选择一个尽可能大的quasibinary数，并从n中减去，那么这个数字满足以下条件：
对于每个当前的数字n的每个数位如果不为0,那么我们构造的这个quasibinary数对应的数位也需要不为0,这样我们就能够以尽可能少的数字来组成n。

---

## 8.26

信息学奥赛每日一题
距离CSP-J/S第一轮还剩20天
距离CSP-J/S第二轮还剩55天

题目难度：CF1400
题目类型：构造；数论；贪心

给定一个长度为n且全部元素为合数的数组，你需要使用不超过m(m<=11)种颜色对其进行染色并使得数组满足以下条件。

1. 1到m种颜色，每种颜色至少被使用一次。
2. 每个元素都需要被染色且只能染一种颜色。
3. 任意两个相同颜色的元素的最大公约数大于1。

原题链接: https://codeforces.com/problemset/problem/1332/B

由于数组元素的大小不超过1000,而1000以内可以数字可以被整除的素数不超过11个，我们可以考虑使用这11个素数把数组元素进行分类。
每个元素被分到能够整除它的最小的素数那一组，这样整个数组会被分为不超过11组，每组元素的最大公约数都是大于1,满足题目要求。

---

## 8.25

信息学奥赛每日一题
距离CSP-J/S第一轮还剩21天
距离CSP-J/S第二轮还剩56天

题目难度：CF1400
题目类型：构造；数学

给定正整数N和S，你可以构造一个长度为N且和为S的数组，使得0到S中存在K，使得这个数组无法构成一个具有和为K的子序列。

原题链接: https://codeforces.com/problemset/problem/1355/D

推导一下我们可以发现，若干S >= 2N 我们可以构造一个最小值大于等于2的数组，这样我们另k为1，则无法构造和为K的子序列。

---

## 8.24

信息学奥赛每日一题
距离CSP-J/S第一轮还剩22天
距离CSP-J/S第二轮还剩57天

题目难度：CF1400
题目类型：构造；贪心；位运算

给你一个长度为n的数组a，我们另S为数组a所有元素的和。你需要构造一个长度为n的数组b，并满足以下要求：
1. 数组b中任意相邻的元素(b[i], b[i+1]) 要能够满足b[i]整除b[i+1]或者b[i+1]整除b[i]
2. 数组a和数组b中的每个元素差之和的两倍不超过S 。

原题链接: https://codeforces.com/problemset/problem/1463/B

讲下思路，这种题目不要被题目带偏，正确理解题目的意思，分析出题人的意图：
1. 要求中提到的相邻元素可以整除，那么我们考虑相邻的元素中只有有一个是1那么是不是就满足这个条件了呢？
2. 顺着上面这个思路，相邻的两个元素b[i], b[i+1]我们假设b[i]为1,那么对于b[i+1]我们肯定想要差尽可能的小，那么另b[i+1]=a[i]即可。
3. 那么对于上面这种方法我们有两种构造方法，一种是让所有偶数位的元素为1,奇数位为与数组a中元素相同的值，另外一种则是反过来。

ok，有了上面的推论，我们来看下这样作是否真的可行？

我们另数组a的和为S，偶数位上的和为even，奇数位上的和为odd，那么even+odd=S
当even <= odd 时， 显然 even * 2 <= S，
当even > odd 时，显然 odd * 2 < S
好的，很明显我们的推论是正确的，也就是说在两种构造方法中选一个即可。

---

## 8.23

信息学奥赛每日一题
距离CSP-J/S第一轮还剩23天
距离CSP-J/S第二轮还剩58天

题目难度：CF1400
题目类型：构造；贪心；实现

使用n个0和m个1构造满足以下要求的序列：
1.不可以出现两个相邻的0；
2.不可以出现连续的3个1
若无法构造满足条件的序列输出-1.

原题链接: https://codeforces.com/problemset/problem/401/C


由于不能有相邻的两个0出现在一块，这意味着我们所有的0都要隔开，那么也就是所有的n个0需要至少n-1的0隔开。
那么我们可以考虑以下策略：
1.首先在n个0中间的塞n-1个1，每两个0中间放一个；
2.对于多余的1我们可以考虑再两个0中间再多放一个1；
3.若完成2之后还剩余有1,那么把剩余的1分别放在整个序列的开头和结尾。

以上分析我们不难发现n和m需要满足以下关系
1. n - 1 <= m
2. (n + 1) * 2 >= m

---

## 8.22

信息学奥赛每日一题
距离CSP-J/S第一轮还剩24天
距离CSP-J/S第二轮还剩59天

题目难度：CF1400
题目类型：构造；数据结构；贪心

给你一个长度为n的数组，每次操作你可以选择两个值不同的元素，并删除他们两个。
输出执行上述操作任意次，数组中最少还剩下多少元素。

原题链接: https://codeforces.com/problemset/problem/1506/D

首先把每个元素的出现次数统计下来；
采用以下贪心策略：每次选择剩下的出现次数最多的两个元素，让他们两个的个数分别-1。
执行上述策略操作，最终我们剩下的元素数量就是最优解。

---

## 8.21

信息学奥赛每日一题
距离CSP-J/S第一轮还剩25天
距离CSP-J/S第二轮还剩60天

题目难度：CF1400
题目类型：构造；数据结构；贪心；实现

给你两个n的排列a和b，你可以对他们进行左移和右移。你需要使两个排列在操作后，对于相同的下标处相等的元素最多。
正式的: i = j, a[i] = b[j]


原题链接: https://codeforces.com/problemset/problem/1365/C

考虑排列a中每个数字x和在列表b中的x上的距离。我们选取这样距离出现最多的，也就是我们最后能使两个排列相同下标元素相等最多一种移动方法。

---

## 8.20

信息学奥赛每日一题
距离CSP-J/S第一轮还剩26天
距离CSP-J/S第二轮还剩61天

题目难度：CF1300
题目类型：构造；位运算；贪心；字符串

给你一个二进制字符串，你可以执行k次以下操作，每次操作可以选择一个二进制位，使除了这个二进制位以外的其他二进制位反转。
你需要再执行k次这样的操作后使得整个二进制字符串的字典序最大。


原题链接: https://codeforces.com/problemset/problem/1659/B

二进制反转问题，每个二进制位最多被反转一次。
我们考虑如何执行上述操作使得结果更优。
我们这里考虑操作对每一个二进制位影响。
对于每个二进制位 i 当：
1. k为偶数，bit i 为 0，那么需要对i执行一次操作。
2. k为奇数，bit i 为 1，那么需要对i执行一次操作。
其他情况下不需要操作i。 
我们从右到左按照上述策略执行操作，如果中途用完k次操作停止即可，如果没有用完，我们把剩下的操作次数给到最后一个数字即可。

---

## 8.19

信息学奥赛每日一题
距离CSP-J/S第一轮还剩27天
距离CSP-J/S第二轮还剩62天

题目难度：CF1300
题目类型：构造；字符串

给你一个字符串，你需要对其进行重排，使得字符串中回文字串的数量最多。


原题链接: https://codeforces.com/problemset/problem/1063/A


直觉上我们让所有相同的字符放在一块就行。

下面我们来证明这个结论：
对于一个回文字符串，他的结尾的字符和开头的字符一定是一样的，那么对于一个在字符串中出现了x次的字符c,我们最多有x(x+1)/2 回文字符串的开头和结尾以c构成，而如果我们另x个字符拼接在一起，显然他们的回文字串的数量也为x(x+1)/2，所以我们只需要对原来的字符串排序，让所有相同的字符排在一起即可。

---

## 8.18

信息学奥赛每日一题
距离CSP-J/S第一轮还剩28天
距离CSP-J/S第二轮还剩63天

题目难度：CF1300
题目类型：构造；动态规划；贪心

给定n个参赛者的体温，n位选手需要在一个特殊的环境中进行战斗，比赛环境一共有两种状态：
状态0：体温更低的选手获胜；状态1：体温更高的选手获胜。
x位选手参加比赛，总共将有x-1场对局，前x-1场对局的温度使用给定的字符串中的前x-1个字符表示。
当场上剩余选手数量不止一个时，任选两个参赛者进行战斗，胜利的选手将有机会继续参加接下来的比赛，
失败者被淘汰。
对于2到n中的每个x，你需要回答以下问题：如果所有温度之不超过x的选手都参加比赛，那么有多少玩家有机会获胜。


原题链接: https://codeforces.com/problemset/problem/1774/C

对于例子“001” 这里作出进一步解释：
当x=2时，只有1和2两位选手，第一场比赛状态为0,体温低的选手获胜，所以只有选手1能够获胜。
当x=3时，有1,2,3三位选手，我们单独考虑每个选手是否能够获胜，对于选手1,由于前两场比赛状态都是0,所以其毫无疑问可以获胜，对于选手2和3,我们不难发现，总会被选手1打败，所以无法获胜。
当x=4时，有1,2,3,4四位选手，对于选手1,由于在第三场战斗时环境状态为1,所以无论如何选手1都会被任意一个温度比他高的选手击败，无法获胜。对于选手2,我们可以这样安排比赛：第一轮1vs3, 第二轮1vs4, 第三轮1vs2，最后选手2击败选手1,获得胜利。对于选手3,我们可以这样安排比赛：：第一轮1vs2, 第二轮1vs4, 第三轮2vs3，最后选手3击败选手2获得胜利。对于选手3,我们可以这样安排比赛：第一轮1vs2, 第二轮2vs3, 第三轮3vs4，最后选手4击败选手3获得胜利。

通过以上对样例1的深度分析，我们可以再使用此方法分析样例2，可以初步得出以下结论：
对于x个选手的最后k轮状态比赛，那么将会有x-k位选手有机会获胜。
我们假设最后k轮比赛的状态都为1,那么意味着最后k轮比赛都是温度更高的选手赢，那么最后剩下的那位选手温度一定高于k。而对于温度高于k的选手都是有机会获胜的。我们可以这样安排比赛，对于选手i(k < i <=x)，前x-k轮比赛，让其余x-k-1位温度大于k的选手互相战斗，在倒数第k轮的前一轮比赛我们安排任意一位体温在1到k之间的选手j和其参加比赛，由于倒数第k轮的状态是1,那么其前一场比赛的状态肯定为0,那么选手j获胜，对于后面的k轮比赛，选手i轻松获胜。
反之对于最后k轮比赛状态为0,情况也一样。


---

## 8.17

信息学奥赛每日一题
距离CSP-J/S第一轮还剩29天
距离CSP-J/S第二轮还剩64天

题目难度：CF1300
题目类型：构造；

构造一个含有a个0,b个1且有x个下标i(1<=i<n) 满足s[i] != s[i+1] 的二进制字符串，题目保证总是能够构造成功。


原题链接: https://codeforces.com/problemset/problem/912/B


此题需要分类讨论:

1. 对于a>=b且x为奇数的情况，我们另c=min(b, x / 2)。我们首先使用对"01"字符串构造前半部分，然后构造a-c个"0"再构造b-c个"1"即可。
2. 对于a>=b且x为偶数的情况，我们另c=min(b, x / 2)。我们首先使用对"01"字符串构造前半部分，然后构造b-c个"1"再构造a-c个"0"即可。
3. 对于a<b 且x为奇数的情况，我们另c=min(a, x / 2)。我们首先使用对"10"字符串构造前半部分，然后构造b-c个"1"再构造a-c个"0"即可。
4. 对于a<b 且x为偶数的情况，我们另c=min(a, x / 2)。我们首先使用对"10"字符串构造前半部分，然后构造a-c个"0"再构造b-c个"1"即可。

---

## 8.16

信息学奥赛每日一题
距离CSP-J/S第一轮还剩30天
距离CSP-J/S第二轮还剩65天

题目难度：CF1300
题目类型：构造；位运算；数论

给你1到n一共n个数字，你最多可以从中选出k个数字，求选出的数字最大的异或和的值。


原题链接: https://codeforces.com/problemset/problem/912/B

此题考察位运算的基础知识：
对于k==1的情况，结果最大肯定就是n本身；
对于k>1的情况，我们可以先看一个例子，比如n==22的情况
22的二进制表示为10110，这时候我们不难看出异或和最或不会超过31（二进制为11111）
那这时候我们找出数字10（二进制为1001）与n进行异或运算，即可得到31。
另n的最高二进制位上的1的位置为p，那么显然对于任何数字n我们都可以找到一个小于n的数字m使得n和m的异或值
为2^(p+1)-1且我们无法获得比其更大的数字。

---

## 8.15

信息学奥赛每日一题
距离CSP-J/S第一轮还剩31天
距离CSP-J/S第二轮还剩66天

题目难度：CF1300
题目类型：构造；图论

对于一个具有n个顶点，m条边的没有重边和自环的无向图，求出这个图最少会有多少个孤立的点，以及最多会有多少个孤立的点。
一个点如果没有和任何顶点相连，则称为是孤立点。


原题链接: https://codeforces.com/problemset/problem/1065/B

此题考察图论的基本知识；
我们假设一开始所有的点都是孤立的，
如果想要尽可能少地构造孤立点，我们的思路是用最少的边去减少孤立的点，那么对于每条边，显然我们可以减少两个孤立的点，那么最少的孤立点的数量就是max(0, n - m * 2)，
如果想要尽可能多地构造孤立点，我们思路是用有限的点去使用更多的边，对于一个没有自环的图，n个点最多可以有n*(n-1)/2条边，我们可以求这样的一个最小数字k，使得k*(k-1)*2是大于等于m即可。那么最多孤立点的数量就是n-k。

---

## 8.14

信息学奥赛每日一题
距离CSP-J/S第一轮还剩32天
距离CSP-J/S第二轮还剩67天

题目难度：CF1300
题目类型：构造；贪心

给你一个n*m方阵，其中白色部分用0表示，黑色部分用1表示，你可以对一个一开始全部为白色的方阵执行以下操作：
选择一个矩形区域，把他图成左上角为白色的国际象棋色。
你最多可以执行n*m次操作来完成作图，如果无法作图，输出-1。

原题链接: https://codeforces.com/problemset/problem/1647/C

首先如果对于一个左上角为黑色的图画，我们是无法完成的。
否则，对于任意的图画，我们考虑以下方式去完成作图：
首先任何国际象棋绘图的矩形都可以由以下两种绘制方法组成：2x1的上白下黑和1x2的左白右黑。
那么我们可以考虑按照从下到上，从右到左的方法绘制，这样除了一行中的第一个图块我们需要使用2x1的上白下黑的绘制方法，
其他的我们都使用1x2的左白右黑的方式绘制，那么由于我们的绘制顺序，这么做不会影响后续绘制的结果。

---

## 8.13

信息学奥赛每日一题
距离CSP-J/S第一轮还剩33天
距离CSP-J/S第二轮还剩68天

题目难度：CF1300
题目类型：构造；数学

给你一个大小为n的排列a，你需要判断对大小为n的初始排列[1, 2, 3, 4, ..., n] 执行n次以下操作，能否得到这个排列a
对于第i次操作你可以对排列的前i个元素，执行循环右移的操作。
你需要将n次操作右移次数的总和最小化。
如果无法对初始排列执行操作得到排列a，输出-1。

原题链接: https://codeforces.com/problemset/problem/1650/D

对于本题，显然我们总是能够对初始排列执行操作从而得到任何排列。
我们可以反向思考问题，对于第i次操作是无法影响i+1及以后的元素的，
所以，我们可以考虑第i次操作使初始排列中的第i位元素归位即可。
那么对于第i次操作，对排列a的前i个元素执行左移，直到初始排列的i归位，这样我们就能够还原出初始排列的第i个元素，而且这样的操作次数无法再被减少。

---

## 8.12

信息学奥赛每日一题
距离CSP-J/S第一轮还剩34天
距离CSP-J/S第二轮还剩69天

题目难度：CF1300
题目类型：构造；贪心；动态规划


给你一个长度为n且只包含-1和1的数组，你需要把这个数组拆分成k个子数组，并满足以下要求：
1. 对于一个数组[a1, a2, a3, a4]其交替和为 (a1 - a2 + a3 - a4),比如对于数组[1, -1, 1, 1] 其交替和为(1) - (-1) + (1) - (1) = 2
2. 所有k个部分的交替和的和为0.

你需要给出满足以上条件的分割方案，如果无法分割满足条件的k个字数组，则输出-1。

原题链接: https://codeforces.com/contest/1753/problem/A1

由于数组中只有-1和1，我们不难发现，分割求交替和是无法更改其交替和奇偶性的，所以如果原数组长度为奇数，则无法构造这样的分割。
那么对于数组长度为偶数的情况，我们考虑两个连续的元素，a[i] 与 a[i+1]，
我们考虑：1.a[i]=a[i+1]那么我们让这个两个元素分割为一个子数组求交替和，其结果为0；
2.a[i] != a[i+1] 那么我们让这两个元素分割为两个不同的子数组，它们在最后的求和中表现为a[i] = a[i+1]结果为0

所以我们考虑以下构造方法：
对于相邻的两个元素，如果相等，将其分割为一个子数组，否则，分割为两个子数组，这样最终对于所有子数组交替和求和的结果就恒定为0了。

---

## 8.11

信息学奥赛每日一题
距离CSP-J/S第一轮还剩35天
距离CSP-J/S第二轮还剩70天

题目难度：CF1300
题目类型：构造；贪心；数学

给你一个正整数n，你需要对这个数字n进行拆分成多个包裹，每个包裹包含的数字可以不同，
比如6可以拆分成大小为1,2,3的三个包裹；使用这些包裹能够拼凑出任意1到n的数字；
你需要拆分出的包裹数量最少。

原题链接: https://codeforces.com/problemset/problem/1037/A

对于任意一个数字都可以被的2整数次幂拼凑出来。
因为对于一个数字，我们从二进制的层面来看，比如6=110,这种形式，
那么其实6可以表示为6=4+2，对于二进制数字6(110)我们可以以这种形式来表示它:
110(6)=100+10，对于110101(53)=10000+10000+100+1，从十进制上来看就是
6=4+2,53=32+16+4+1。

那么回到我们的题目，我们可以取一个正整数，使得2^(k+1)-1 <= n
我们令2^(k+1)-1=m那么对于1到m中的数字，我们就都可以使用这k+1个数字来表示,
我们令剩下的数字(n-m)=z， 那么对于m+1到n中的数字x，我们可以使用前k+1个数字来构成x-z，
然后再加上z，即可构造完成。
综上所述，我们可以把数字n按照2的次幂拆分成k+1分，如果还有剩余就再单独拆分出一个数字；
那么这样我们就可以把n拆分出最少的数量来满足题目的要求。

---

## 8.10

信息学奥赛每日一题
距离CSP-J/S第一轮还剩36天
距离CSP-J/S第二轮还剩71天

题目难度：CF1300
题目类型：构造；位运算

给你一个数组c，你需要查看是否存在两个不同的子序列a和b，使得f(a)=f(b)，
其中f(x)表示为序列x中所有元素的按位或的值。

原题链接: https://codeforces.com/problemset/problem/1775/B

这道题目对于熟悉位运算的同学应该还是比较简单的。找到两个按位或结果相同的子序列，
我们可以先考虑子序列a和b只差了一个元素，而如果这个元素所有的二进制位在其他元素的按位或中已经都出现了，
那么很显然把他加入到其他元素所构成的自序列中，显然不会影响序列按位或的结果。

这样我们只需要先统计数组中所有元素的每个二进制位出现的次数，然后再检查每个数字，
如果这个元素的所有二进制数字在所有元素二进制位的统计结果中不止出现一次，那么就说明我们可以构造这样的两个自序列，
子序列a包含原数组的所有元素，另一个子序列包含除了该元素以外的所有元素，这样就能使得f(a)=f(b)

---

## 8.9

信息学奥赛每日一题
距离CSP-J/S第一轮还剩37天
距离CSP-J/S第二轮还剩72天

题目难度：CF1300
题目类型：构造；贪心；数学


给你一个大小为n的排列，你需要对其执行n次操作，第i次操作可以选择一个1-n中的位置，
使排列中这个位置及其之后的元素的值都增加i，你需要使在执行n次操作后，使整个数组的逆序对数量最少。


原题链接: https://codeforces.com/problemset/problem/1746/C


其实在n次操作后，我们总是可以使数组中没有逆序对，也就是让数组变为非递减。
由于我们的操作是后缀性质的，每个操作会影响这个数字及其之后的数字，而且我们一开始数组是一个
1到n的排列，所以，我们可以考虑这样操作：
对于排列中数字x，我们另第x次操作在其一开始所在下标之后的那个位置，
这样我们就可以保证，其之后没有比它小的数字了。
比如排列[1, 3, 2, 5, 4]， 我们让第3次操作，把其后面的元素都增加3，那么就能够保证，
其后面的所有的元素都比3大，让第5次操作，把其后面的元素都增加5,那么后面的数字自然都会比5大。
这样我们便消除了所有逆序对。对于原排列中的最后一个元素，我们任意选择一个位置操作就行，因为它后面没有没有由它产生的逆序对。

---

## 8.8

信息学奥赛每日一题
距离CSP-J/S第一轮还剩38天
距离CSP-J/S第二轮还剩73天

题目难度：CF1300
题目类型：构造；数论

给定整数n，你需要构造一个下标从2开始，到n结束的数组，使得其满足以下条件：
对于任意一对下标(i, j)， 如果i和j互质，那么ai != aj
你需要在满足上述条件的基础上使得整个数组的最大值尽可能的小。

原题链接: https://codeforces.com/contest/1174/problem/C

这道题目，数学直觉好些的同学，看完题目应该直接就能想到构造方法了。
那么由于对于下标互质的元素，需要值不相等，那么对于2到n中所有的质数，
我们都需要给不同的值，然后对于这些质数的倍数也就是和数，赋值给其质因子相同的值就行。
那么这样构造出来数组的最大元素值就是2-n中质数的数量。

---

## 8.7

信息学奥赛每日一题
距离CSP-J/S第一轮还剩39天
距离CSP-J/S第二轮还剩74天

题目难度：CF1300
题目类型：构造；排序；贪心

给定一个包含n个数字的数组a，你需要构造两个长度为n的排列p和q，
使得对于任意的1 <= i <= n 满足 max(pi, qi) = ai，否则说明p和q不存在

原题链接: https://codeforces.com/problemset/problem/1768/C

可以考虑以下构造方法，
首先构造数组中值较大的元素对应位置的pi和qi，同时使用一个数组记录该元素在排列中有没有使用过，优先放入排列p中，如果该数字在排列p中已经使用过，则放入排列q中，如果排列q也已经使用了该数字，那么说明无法构造p和q。
完成放置之后，对于两个排列剩下的部分，按照从大到小的顺序依次去放入，最后按照题目要求去检测p和q就行。

---

## 8.6
信息学奥赛每日一题
​距离CSP-J/S第一轮还剩40天
​距离CSP-J/S第二轮还剩75天
​
题目难度：CF1300
题目类型：构造；排序

​给定一个包含n个数字的数组a，你可以对其执行以下操作
选择两个下标l，r，如果al+ar是奇数将ar赋值为al，否则将al赋值为ar
你可以执行上述操作最多n次，将数组a变为一个不下降数组。(详情见题面)

原题链接: https://codeforces.com/problemset/problem/1733/C

由于操作要求分奇偶性，那我们可以先对奇数元素和偶数元素分开考虑：
不难发现，对于奇数和偶数相加的和都是偶数，而奇偶相加为奇数，
令奇数数量为odd，偶数数量为even，那么我们可以先执行操作将所有奇数或偶数变成所对应的最后一个奇数或者偶数。
然后由于奇偶相加的特性是向后传递，所以如果数组中第一个元素是奇数，那么我们执行odd-1次操作将所有奇数变成数组中的最后一个奇数，
然后利用这第一个元素，执行even次操作，将所有偶数变成和奇数一样的数字，那么最后就可以把数组的所有元素变为原数组中最后一个奇数的值，
总共的操作次数为odd+even-1=n-1,满足题目要求；反之如果第一个元素为偶数也是类似的操作。

---

## 8.5
信息学奥赛每日一题
​距离CSP-J/S第一轮还剩41天
​距离CSP-J/S第二轮还剩76天
​
题目分数：CF1300
题目类型：构造；数学

​给定数字n，判断能不能使用1到2n的数字构造n个数对，使得每组数对的和都互不相等，而且数值是连续的。(详情见题面)

原题链接: https://codeforces.com/problemset/problem/1788/C

直觉上n是偶数一定不行(可通过等差数列求和列等式证明)，可以先凑了一下n=5的情况，观察一下，把整个数列分成三段，首段和尾段去拼凑，中间一段再分成两段拼凑。

---
















