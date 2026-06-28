// for (var i = 0; i < 3; i++) {
//     (function(j) {
//         setTimeout(() => {
//             console.log(j);
//         }, 100);
//     })(i);
// }


// for(let i = 0;i < 5;i++){
//     setTimeout(() => {
//         console.log(i+1)
//     }, (i+1)*1000);
// }

// for(var i = 0;i < 5;i++){
//     (function (j) {
//         setTimeout(() => {
//             console.log(j+1)
//         }, (j+1) * 1000);
//     })(i);
// }

const p1 = Promise.resolve(1);
const p2 = Promise.resolve(2);
const p3 = Promise.resolve(3);

const result =  Promise.allSettled([
    Promise.resolve(1),
    Promise.reject("error")
]);

console.log(result);