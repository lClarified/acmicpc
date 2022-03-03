#include <iostream>   
#include <stdio.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <string.h>
#include <time.h>
#include <functional>
#include <queue>
#include <list>
#include <set>

#pragma warning(disable:4996)

using namespace std;

int main(void)
{
   int t;

   cin >> t;

   while (t--)
   {
      double n, a[1000], s = 0, c=0;
      

      cin >> n;

      for (int i = 0; i < n; i++)
      {
         cin >> a[i];
         s += a[i];
      }

      s /= n;

      for (int i = 0; i < n; i++)
      {
         if (a[i]>s)
            c++;
      }

      printf("%.3lf%%\n", c / n*100);

   }

   return 0;
}