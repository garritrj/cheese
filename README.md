[BIG LONG TUTORIAL]

Install Nessecary Software:
1. Download and install MySQL from this website "https://dev.mysql.com/downloads/installer/"
2. For CHOOSING A SETUP TYPE, select SEVER ONLY
3. When you get to the ACCOUNTS AND ROLES step of the setup you !MUST! ADD A USER or you will not be able to connect to the database with Visual Studio (the name and password doesn't really matter, I use 'local' for a username and 'curdcatalog' for a, both root and account, password)
4. Once the installation has finished, open Visual Studio and download the following extensions, SQLTools MySQL/MariaDB/TiDB ("https://marketplace.visualstudio.com/items?itemName=mtxr.sqltools-driver-mysql") and SQLTools ("https://marketplace.visualstudio.com/items?itemName=mtxr.sqltools")

Import Database:
(If you have a previous version of the database, you should probably drop it before importing the new one, simply open MYSQL 8.0 COMMAND LINE CLIENT and type the command "DROP DATABASE curd_catalog;")
1. After downloading curdCatalog.sql from the repo, place the file inside the bin folder of your MySQL installation (if you installed MySQL to the default location, the path should be something like "C:\Program Files\MySQL\MySQL Server 8.0\bin")
2. Open MYSQL 8.0 COMMAND LINE CLIENT and type in the following commands, "CREATE DATABASE curd_catalog;", "USE curd_catalog;", "SOURCE C:\Program Files\MySQL\MySQL Server 8.0\bin\curdCatalog.sql" (!THE FINAL COMMAND SHOULD NOT HAVE A SEMICOLON!)

Interface with MySQL using Visual Studio:
1. Once MySQL has been set up and the database has been imported, connect to the server through Visual Studio (This video provides a good tutorial on how to do so "https://youtu.be/Cz3WcZLRaWc?si=5owljyy1-EhFgLxj" [6:13 - 6:46])
2. !UNDER CONSTRUCTION! [This next section will explain how to interact with the server using JavaScript, I plan on having it done hopefully by Wednesday, but here is a video that talks about it in the meantime "https://youtu.be/_g8ljkh9JNY?si=WAO-oh4VcA5h7FH0"]
3. ...

Exporting Database:
1. Open WINDOWS COMMAND PROMPT as !ADMINISTATOR!
2. Navigate to your MySQL bin folder using cd commands (if you installed MySQL to the default location, it should be something like "cd C:\Program Files\MySQL\MySQL Server 8.0\bin")
3. Type in the command "mysqldump -u [username] -p curd_catalog > curdCatalog.sql" (if you set your username to 'local' the command should be "mysqldump -u local -p curd_catalog > curdCatalog.sql")
4. The SQL file should now be located in the MySQL installation bin folder with the name 'curdCatalog.sql'
