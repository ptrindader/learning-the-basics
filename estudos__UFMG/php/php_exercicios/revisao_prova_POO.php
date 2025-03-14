<?php

abstract class Operator{
    protected $operando1;
    protected $operando2;

    public function __construct($op1, $op2){
        $this->operando1 = $op1;
        $this->operando2 = $op2;
    }

    abstract function run();
};

class Soma extends Operator{
    public function run(){
        return $this->operando1 + $this->operando2;
    }
}

class Sub extends Operator{
    public function run(){
        return $this->operando1 - $this->operando2;
    }
}

class Mult extends Operator{
    public function run(){
        return $this->operando1 * $this->operando2;
    }
}

class Div extends Operator{
    public function run(){
        if($this->operando2 == 0){
            throw new Exception("Erro: divisão por zero!");
        }
        else{
            return $this->operando1 / $this->operando2;
        }
    }
}

//Testes

$opSoma = new Soma(5, 10);
echo $opSoma->run();

echo "\n";

$opSub = new Sub(5, 10);
echo $opSub->run();

echo "\n";

$opMult = new Mult(5,10);
echo $opMult->run();

echo "\n";

$opDiv = new Div(10, 5);
echo $opDiv->run();

echo "\n";

try{
    $opDiv = new Div(10, 0);
    echo $opDiv->run();
}

catch(Exception $e){
    echo $e->getMessage();
}
