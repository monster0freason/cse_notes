//      topic: creating custom modules in nodejs

function average(arr){
    let sum=0;
    arr.forEach(element => {
        sum+=element;
    });
    return sum/arr.length;
}

// #148.1 in nodejs we can mention which function or classes we want to export . using module.exports we can export any functions or classes.

//module.exports = average;

// #148.2 we can make an object (module.exports) if we want to export multiple functions.
module.exports={
    avg:average,
    name:"kabir",
    repo:"github"
}



