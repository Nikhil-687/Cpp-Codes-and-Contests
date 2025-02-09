function makeTea(TypeofTea){
    return "making " + TypeofTea;
}
function orderTea(teaType){
    function confirmOrder(){
        console.log(`order confirmed for a ${teaType}`);
    }
    confirmOrder();
    return `making ${teaType}`;
}
const calculateTotal = (price, quantity) =>{
    return price * quantity;
}
let totalCost = calculateTotal(52,32);
function processTeaOrder( TeaFunction ){
    return TeaFunction("grey Tea");
}
function createTeaMaker(){
    return makeTea;
}




orderTea("Green Tea");
let teaOrder = makeTea("Green Tea");
console.log(teaOrder);
console.log(totalCost);

console.log(processTeaOrder((TypeofTea) => {
    return "making " + TypeofTea;
}));
console.log(createTeaMaker("Hi"));