/* Write your T-SQL query statement below */
select distinct id,
        (select sum(revenue) from Department d2 where month = 'Jan' and d1.id = d2.id) as Jan_Revenue,
        (select sum(revenue) from Department d2 where month = 'Feb' and d1.id = d2.id) as Feb_Revenue,
        (select sum(revenue) from Department d2 where month = 'Mar' and d1.id = d2.id) as Mar_Revenue,
        (select sum(revenue) from Department d2 where month = 'Apr' and d1.id = d2.id) as Apr_Revenue,
        (select sum(revenue) from Department d2 where month = 'May' and d1.id = d2.id) as May_Revenue,
        (select sum(revenue) from Department d2 where month = 'Jun' and d1.id = d2.id) as Jun_Revenue,
        (select sum(revenue) from Department d2 where month = 'Jul' and d1.id = d2.id) as Jul_Revenue,
        (select sum(revenue) from Department d2 where month = 'Aug' and d1.id = d2.id) as Aug_Revenue,
        (select sum(revenue) from Department d2 where month = 'Sep' and d1.id = d2.id) as Sep_Revenue,
        (select sum(revenue) from Department d2 where month = 'Oct' and d1.id = d2.id) as Oct_Revenue,
        (select sum(revenue) from Department d2 where month = 'Nov' and d1.id = d2.id) as Nov_Revenue,
        (select sum(revenue) from Department d2 where month = 'Dec' and d1.id = d2.id) as Dec_Revenue
from Department d1;