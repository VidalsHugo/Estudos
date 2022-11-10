const all = 500;
const amostra = 20;

let number = all / amostra;
console.log(number)

let initial = 5;
let qtd =0;

for(let i=0;i<amostra;i++){
    console.log(initial)
    initial +=number;
    qtd+=1;
}

console.log(qtd)