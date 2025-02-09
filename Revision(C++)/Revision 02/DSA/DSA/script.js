document.addEventListener('DOMContentLoaded', () => {

    function alignsillI(i){
        // let i = 9;
        let va = `skill-${i}`;
        let font = ((20-i)/((i%7)-4))/5 + 3;
        document.getElementById(`${va}`).style.padding = `${document.getElementById(`${va}`).getBoundingClientRect().width/50}vw`;
        document.getElementById(`${va}`).style.fontSize = `${font}vw`;
        let primaryColor = `#${i%8}d${i%6}${i%9}0${10- i%10}${10-i%5}${10-i%6}`;
        document.getElementById(`${va}`).style.color = `${primaryColor}`;
        let secondryColor = `#${i%9}4${10- i%5}e${i%5}${i%9}${9-i%6}${10-i%5}`;
        document.getElementById(`${va}`).style.position = 'absolute';
        document.getElementById(`${va}`).style.left = `${((i)*932)%78/*((document.getElementById(`${va}`).getBoundingClientRect().width/5))*/}vw`;
        document.getElementById(`${va}`).style.top = `${((i)*9)%(50)}vw`;
        document.getElementById(`${va}`).style.background = `transparent`;
        document.getElementById(`${va}`).style.opacity = `1`;
        
        // if(i%5 === 0){
        //     let primaryColor = `#${i%8}d${i%6}${i%9}0${10- i%10}${10-i%6}${9-i%6}`;
        //     document.getElementById(`${va}`).style.backgroundColor = `${primaryColor}`;
        // }
        if(i%5 === 0){
            let primaryColor = `#${i%8}d${i%6}${i%9}0${10- i%8}${10-i%6}${9-i%6}`;
            // document.getElementById(`${va}`).style.backgroundColor = `${primaryColor}`;
        }
        // document.getElementById(`${va}`).style.color = `#${i%10}d${i%3}${i%7}0${i%10}aa`;
    }  
    for(let i = 1;i <= 40;i++){
        alignsillI(i);
    }
        
})