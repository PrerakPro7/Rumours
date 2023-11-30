<h1 align="center">Rumours</h1>
<div align="center">time limit per test:1 second</div>
<div align="center">memory limit per test: 256 megabytes</div>
<div align="center">input: standard input</div>
<div align="center">output: standard output</div>

*Rumours spread very fast. Today's gossip is tomorrow's headline.*

Mr. X, a criminal, has recently become quite popular and everyone's favorite in the city of Kanpur. However, you are aware of his crimes and want to expose him in the public. However, for that purpose, you need *exactly* **n** people to know about his illegal acts.

So, you decide to spread a rumour about his offences. In order to do so, you will tell the news and an integer **k** to one person. Next day, that one person, then, will spread this news to other **k** people and pass on this integer as well, and again next day, each of these **k** people will spread this news to another **k** people, and thus cycle continues.

You want to expose Mr. X as soon as possible. However, you don't want to spread the news within one day(that may grow suspicion on you).

Find the minimum number of days you will require to spread the news to *exactly* **n** people. In addition to this, print the value of **k** chosen by you.

**Input:**

The first line contains a single integer t
 (1≤t≤10<sup>4</sup>), denoting the number of test cases.

The first line in each test case contains a single integer n(1≤n≤10<sup>18</sup>).


**Output:**

For each test case, print two integers.

The first integer represents the minimum number of days required to spread the news to exactly n people.

The second integer represents the value of k, corresponding to minimum number of days.