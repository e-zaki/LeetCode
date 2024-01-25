/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let myObj = {
    count: init,
    increment: function() {
      return ++this.count;
    },
    decrement: function() {
      return --this.count;
    },
    reset: function() {
      this.count = init;
      return this.count;
    }
    };
    return myObj;
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */