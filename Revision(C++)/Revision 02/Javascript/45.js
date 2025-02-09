let sum = 0;
let i = 1;
while(i <= 5){
    sum += i;
    i++;
}
let countdown = []
while(--i){
    countdown.push(i);
}

let c = 'stop';
let teaTypes = []
// do {
//     c = prompt("Enter your favourite tea(type stop to finish)");
//     if(c !== 'Stop'){
//         teaTypes.push(c);
//     }
// } while (c !== 'Stop');
i = 1;
sum = 0;
let results = []
do {
    sum += i;
    results.push(sum);
    i++;
} while (i <= 3);


let multipliedResults = []
for(let i = 0;i < results.length;i++){
    multipliedResults.push(results[i]*2);
}

console.log(sum);
console.log(results);
console.log(multipliedResults);
console.log(countdown);



let cities = ['mumbai', 'delhi', 'banguluru', 'jabalpur'];
let newCities = []
for(let i = 0;i < cities.length;i++){
    console.log(cities[i]);
    newCities.push(cities[i]);
}
console.log(newCities);