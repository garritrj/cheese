<?php
$username = "root";
$password = "7Tdaboss7";
$database = "curd_catalog";
$mysqli = new mysqli("localhost", $username, $password, $database);

// Check connection
if ($mysqli->connect_error) {
    die("Connection failed: " . $mysqli->connect_error);
}

$sortBy = isset($_GET['sortBy']) ? $_GET['sortBy'] : '';
$searchBy = isset($_GET['searchBy']) ? $_GET['searchBy'] : '';
$searchTerm = isset($_GET['searchTerm']) ? $_GET['searchTerm'] : '';

$query = "SELECT * FROM cheeses";

// Modify the query based on sorting and searching parameters
if ($searchTerm != '') {
    $query .= " WHERE $searchBy LIKE '%$searchTerm%'";
}

if ($sortBy != '') {
    $query .= " ORDER BY $sortBy";
}

$result = $mysqli->query($query);

if ($result) {
    if ($result->num_rows === 0) {
        echo "<div>No cheeses found</div>";
    } else {
        // Output each cheese as a card
        while ($row = $result->fetch_assoc()) {
            echo '<div class="cheese-card">';
            echo '<div class="cheese-image"><img src="' . $row["imageAddress"] . '" alt="' . $row["cheeseName"] . '"></div>';
            echo '<div class="cheese-details">';
            echo '<h2>' . $row["cheeseName"] . '</h2>';
            echo '<p><strong>Country:</strong> ' . $row["countryOfOrigin"] . '</p>';
            echo '<p><strong>Region:</strong> ' . $row["region"] . '</p>';
            echo '<p><strong>Type:</strong> ' . $row["cheeseType"] . '</p>';
            // Add more details as needed
            echo '</div>';
            echo '</div>';
        }
    }

    $result->free();
} else {
    echo "<div>Error: " . $mysqli->error . "</div>";
}

$mysqli->close();
?>
