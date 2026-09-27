/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let val = init;
    const originalValue = init;
    return{
        increment : function(init){
           return ++val;
        },
        decrement : function(init){
           return --val;
        },
        reset : function(){
            val = originalValue;
            return originalValue;

        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */