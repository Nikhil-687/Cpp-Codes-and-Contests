let today = new Date();
console.log(today.getDate());

let a = '2a2';
console.log(Number(a));

console.log(typeof(typeof(4)));

let myFlavour = [];
let teaFlavours = ['green tea', 'black tea', 'red tea'];
let firstTea = teaFlavours[0];
let favoriteTea = teaFlavours[2];
teaFlavours[2] = 'white tea';
teaFlavours[3] = 'Jasmine tea';
teaFlavours.push('Berline tea');
teaFlavours[teaFlavours.length] = 'mumbai tea';
let removedtea = teaFlavours.pop();
myFlavour.push(teaFlavours[0]);
myFlavour.push(teaFlavours[1]);
myFlavour.push(teaFlavours[2]);
myFlavour.push(teaFlavours[3]);
myFlavour.push(teaFlavours[4]);
myFlavour = [...myFlavour, ...teaFlavours]; 

console.log(firstTea);
console.log(favoriteTea);
console.log(teaFlavours[2]);
console.log(teaFlavours[3]);
console.log(removedtea);
console.log(teaFlavours);
console.log(myFlavour);

myFlavour.sort()