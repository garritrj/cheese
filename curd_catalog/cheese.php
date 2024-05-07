<?php

// Database connection parameters
$servername = "localhost";
$username = "root";
$password = "7Tdaboss7";
$database = "curd_catalog";

// Create connection
$conn = mysqli_connect($servername, $username, $password, $database);

// Check connection
if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}

// Query to get cheese details
$sql = "SELECT * FROM cheeses WHERE name = '" . $_GET['cheese'] . "'";
$result = mysqli_query($conn, $sql);

// Check if any results were returned
if (mysqli_num_rows($result) > 0) {
    // Fetch and display data
    $row = mysqli_fetch_assoc($result);
    echo json_encode($row); // Return data as JSON
} else {
    echo "No results found";
}

// Close connection
mysqli_close($conn);

?>
