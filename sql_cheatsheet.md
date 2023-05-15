SQL database commands:

**SELECT**: Retrieve data from a table.
```sql
SELECT column1, column2 FROM table_name;
```

**DISTINCT**: Select unique values from a column.
```sql
SELECT DISTINCT column_name FROM table_name;
```

**WHERE**: Filter rows based on a condition.
```sql
SELECT column1, column2 FROM table_name WHERE condition;
```

**AND/OR**: Combine multiple conditions in a WHERE clause.
```sql
SELECT column1, column2 FROM table_name WHERE condition1 AND condition2;
```

**ORDER BY**: Sort the result set.
```sql
SELECT column1, column2 FROM table_name ORDER BY column1 ASC;
```

**LIMIT**: Limit the number of rows returned.
```sql
SELECT column1, column2 FROM table_name LIMIT 10;
```

**INSERT INTO**: Insert new rows into a table.
```sql
INSERT INTO table_name (column1, column2) VALUES (value1, value2);
```

**UPDATE**: Modify existing data in a table.
```sql
UPDATE table_name SET column1 = value1 WHERE condition;
```

**DELETE**: Delete rows from a table.
```sql
DELETE FROM table_name WHERE condition;
```

**CREATE TABLE**: Create a new table.
```sql
CREATE TABLE table_name (
   column1 datatype,
   column2 datatype,
    ...
  );
```

**ALTER TABLE**: Modify an existing table.
```sql
ALTER TABLE table_name ADD column_name datatype;
```

**DROP TABLE**: Delete a table.
```sql
DROP TABLE table_name;
```

**JOIN**: Combine rows from multiple tables based on a related column.
```sql
SELECT column1, column2 FROM table1 JOIN table2 ON table1.column = table2.column;
```

**GROUP BY**: Group rows based on a column.
```sql
SELECT column1, COUNT(column2) FROM table_name GROUP BY column1;
```

**HAVING**: Filter groups based on a condition.
```sql
SELECT column1, COUNT(column2) FROM table_name GROUP BY column1 HAVING COUNT(column2) > 5;
```

**NULL**: Represents a missing or unknown value.
```sql
SELECT column1 FROM table_name WHERE column2 IS NULL;
```

**INDEX**: Create an index for faster data retrieval.
```sql
CREATE INDEX index_name ON table_name (column_name);
```