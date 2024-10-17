/* Write your T-SQL query statement below */
select  l1.num as ConsecutiveNums
from logs l1
inner join logs l2 on l1.id=l2.id 
-- where l2.id=l1.id+1
inner join logs l3 on l2.id=l3.id
where l1.num=(select l2.num from logs l2 where l2.id=l1.id+1)  and l2.num=(select l3.num from logs l3 where l3.id=l2.id+2)
-- where l3.id=l2.id+1
group by l1.num;
