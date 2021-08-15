SELECT DISTINCT name from (
	SELECT name from cats 
	UNION 
	SELECT name from dogs);
