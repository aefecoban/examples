class human{
    constructor(){
        this.allHuman = [];
        this.lastArray = [];
    }

    add(getName, getSurname, getAge){
        var aPerson = {
            name : getName,
            surname : getSurname,
            age : getAge
        }

        this.allHuman.push(aPerson);
    }

    findAndGet(searchName){

        var all = this.returnAll();

        var newArray = [];

        var size = all.length;

        var found = 0;

        for(var i = 0; i < size; i++){
            if(all[i].name == searchName){
                newArray.push(all[i]);
                found++;
            }
        }

        console.log(found + " adet kayıt bulundu.");
        console.log(newArray);

        this.lastArray = newArray;

    }

    returnLastArray(){
        return this.lastArray;
    }

    returnAll(){
        return this.allHuman;
    }

    getAlltoConsole(){
        console.log(this.allHuman);
    }
}
