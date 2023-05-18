function fetchData(){
    fetch('https://data.covid19india.org/v4/min/data.min.json').then(response =>{
        return response.json();
    })
    .then(data => {
        console.log(data.UP);
    })
    .catch(error =>{
        console.log(error);
    })
}
fetchData();