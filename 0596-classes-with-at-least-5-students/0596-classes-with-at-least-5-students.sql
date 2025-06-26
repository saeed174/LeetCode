/* Write your T-SQL query statement below */
select class from
(
select class , count(class) as num
from Courses
group by class
) as collect
where num >= 5