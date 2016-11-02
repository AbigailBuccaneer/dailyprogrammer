===================================================
[2016-10-31] Challenge #290 [Easy] Kaprekar Numbers
===================================================
Description
-----------
In mathematics, a `Kaprekar number`_ for a given base is a non-negative integer, the representation of whose square in that base can be split into two parts that add up to the original number again.
For instance, 45 is a Kaprekar number, because :math:`45^2 = 2025` and :math:`20+25 = 45`.
The Kaprekar numbers are named after D. R. Kaprekar.
I was introduced to this after the recent `Kaprekar constant challenge`_.
For the main challenge we'll only focus on base 10 numbers.
For a bonus, see if you can make it work in arbitrary bases.

.. _`Kaprekar number`: https://en.wikipedia.org/wiki/Kaprekar_number
.. _`Kaprekar constant challenge`: https://www.reddit.com/r/dailyprogrammer/comments/56tbds/20161010_challenge_287_easy_kaprekars_routine/

Input Description
-----------------
Your program will receive two integers per line telling you the start and end of the range to scan, inclusively. Example::

    1 50
Output Description
------------------
Your program should emit the Kaprekar numbers in that range. From our example::

    1 9 45
