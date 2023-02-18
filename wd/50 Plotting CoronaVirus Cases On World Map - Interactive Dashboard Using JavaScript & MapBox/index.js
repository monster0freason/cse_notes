

function updatemap(){

    fetch("/data.json")
        .then(response => response.json())
        .then(rsp => {
            console.log(rsp.Sheet1);
             rsp.Sheet1.forEach(element =>{
                let latitude=element.Lat;
                let longitude=element.Long;

                

        })
    })

}

updatemap();

