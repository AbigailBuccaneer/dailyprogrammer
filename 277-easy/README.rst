========================================================
[2016-07-25] Challenge #277 [Easy] Simplifying fractions
========================================================
Description
-----------
A fraction exists of a numerator (top part) and a denominator (bottom part) as you probably all know.
Simplifying (or reducing) fractions means to make the fraction as simple as possible. Meaning that the denominator is a close to 1 as possible.
This can be done by dividing the numerator and denominator by their greatest common divisor.

Formal Inputs & Outputs
-----------------------
Input description
~~~~~~~~~~~~~~~~~
You will be given a list with 2 numbers seperated by a space. The first is the numerator, the second the denominator.
Output description
~~~~~~~~~~~~~~~~~~
The most simplified numbers

Notes/Hints
-----------
Most languages have by default this kind of functionality, but if you want to challenge yourself, you should go back to the basic theory and implement it yourself.

Bonus
=====

Instead of using numbers, we could also use letters.
For instance::

    ab   a
    __ = _
    cb   c
And if you know that x = cb, then you would have this::

    ab   a
    __ = _
    x    c
and of course::

    a   1
    _ = _
    a   1

    aa   a
    __ = _
    a    1
The input will be first a number saying how many equations there are. And after the equations, you have the fractions.
The equations are a letter and a value seperated by a space. An equation can have another equation in it.

output:
a c
a c
c a
c 1
1 ab
Finally

Have a good challenge idea?
Consider submitting it to /r/dailyprogrammer_ideas
