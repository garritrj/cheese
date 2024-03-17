--@block --create data table
CREATE TABLE cheeses(
    id INT PRIMARY KEY AUTO_INCREMENT,
    cheeseName VARCHAR(255) NOT NULL,
    price DOUBLE(4, 2),
    countryOfOrigin VARCHAR(255),
    imageAddress TEXT
);

--@block --add single row to table
INSERT INTO cheeses (cheeseName, price, countryOfOrigin, imageAddress)
VALUES (
    'Swiss Cheese',
    12.20,
    'Switzerland',
    'google.com'
);

--@block --add multiple rows to table
INSERT INTO cheeses (cheeseName, price, countryOfOrigin, imageAddress)
VALUES
    ('Swiss Cheese', 12.20, 'Switzerland', 'google.com'),
    ('Cheddar Cheese', 14.60, 'England', 'yahoo.com');

--@block --display entire table
SELECT * FROM cheeses;

--@block --display specific rows
SELECT * FROM cheeses WHERE cheeseName = 'Swiss Cheese';

--@block --display specific attributes
SELECT cheeseName, price FROM cheeses;

--@block --delete specific row
DELETE FROM cheeses WHERE cheeseName = 'Swiss Cheese';

--@block --delete all rows
DELETE FROM cheeses;

--@block --delete table
DROP TABLE cheeses;