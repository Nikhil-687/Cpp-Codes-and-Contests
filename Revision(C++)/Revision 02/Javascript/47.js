let favoriteTea = []
let teas = ['green tea', 'black tea', 'chai', 'oolong tea'];
for(let i = 0;teas[i] !== 'chai';i++){
    if(teas[i] !== 'chai'){
        favoriteTea.push(teas[i]);
    }
}
let otherTeas = []
let nonskippedTeas = []
for(let i = 0;i < teas.length;i++){
    if(teas[i] === 'chai'){

    }
    else{
        nonskippedTeas.push(teas[i]);
    }
}


for(i of teas){
    if(i == 'chai'){break;}
    otherTeas.push(i);
}

let otherNonskippedTeas = []
for(i of teas){
    if(i == 'chai'){}
    else otherNonskippedTeas.push(i);
}


let populate = {
    greenTea : 2000,
    blackTea : 400,
    redTea : 10000,
}
let newPopulate = {}
for(i in populate){
    if(i !== 'redTea'){
        newPopulate[i] = populate[i];
    }
}
let popularTeas = {}

for(i in populate){
    if(populate[i] < 500){}
    else popularTeas[i] = populate[i];
}

let z = 0;
let prevTeas = []
teas.forEach(element => {
    if(element === 'chai' || z === 1){
        z = 1;
    }
    else prevTeas.push(element);
});

let nonChaiTeas = []
teas.forEach(element =>{
    if(element  === 'chai'){}
    else nonChaiTeas.push(element);
})

let k = 0;
nonChiaSerialisedTeas = []
for(let i = 0;i < teas.length;i++){
    if(teas[i] === 'chai'){k++;}
    else {
        nonChiaSerialisedTeas[i-k] = String(i-k+1) + "] " + teas[i] ;
    }
}


console.log(favoriteTea);
console.log(nonskippedTeas);
console.log(otherTeas);
console.log(otherNonskippedTeas);

console.log(newPopulate);
console.log(popularTeas);
console.log(prevTeas);
console.log(nonChaiTeas);
console.log(nonChiaSerialisedTeas);
