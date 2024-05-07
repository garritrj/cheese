document.addEventListener("DOMContentLoaded", function() {
    // Get the input element for search
    var searchInput = document.querySelector(".search-bar");

    // Get the select elements for sorting and searching
    var sortBySelect = document.getElementById("sortBy");
    var searchBySelect = document.getElementById("searchBy");

    // Add event listener for input on the search bar
    searchInput.addEventListener("input", function() {
        searchCheeses();
    });

    // Add event listener for change on sortBy select
    sortBySelect.addEventListener("change", function() {
        searchCheeses();
    });

    // Add event listener for change on searchBy select
    searchBySelect.addEventListener("change", function() {
        searchCheeses();
    });

    // Function to search and sort cheeses based on selected options
    function searchCheeses() {
        // Get the value entered by the user for search
        var searchValue = searchInput.value.toLowerCase();

        // Get the selected option for sorting
        var sortByValue = sortBySelect.value;

        // Get the selected option for searching
        var searchByValue = searchBySelect.value;

        // Get all the cheese cards
        var cheeseCards = document.querySelectorAll(".cheese-card");

        // Loop through each cheese card and display or hide based on search criteria
        cheeseCards.forEach(function(card) {
            var cheeseName = card.querySelector("h2").textContent.toLowerCase();
            var country = card.querySelector("p:nth-of-type(2)").textContent.toLowerCase();

            var nameMatch = (searchByValue === "cheeseName" && cheeseName.includes(searchValue));
            var countryMatch = (searchByValue === "countryOfOrigin" && country.includes(searchValue));

            if ((searchValue === "" || nameMatch || countryMatch)) {
                card.style.display = "block";
            } else {
                card.style.display = "none";
            }
        });

        // If sorting is needed, you can handle it here
        // Sorting based on PHP query is already implemented, so no need to sort again
    }
});
