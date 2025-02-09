let hold = document.getElementById('changeTextButton');
hold.addEventListener('click', function (){
    
    // let para = document.getElementById('myParagraph').textContent = "Nikhil Here";
    // A good thing to obeseve here para is not containg the element but only text "Nikhil Here" and
    // for this reasong para.textcontent give undefined;
    let para = document.getElementById('myParagraph');
    // para.textContent = "Paragraph changed";
    document.getElementById('myParagraph').textContent = "paragraph changed";
    console.log(para.textContent);
})