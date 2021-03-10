<?php

    $hooks_array = array();

    function add_process(string $where, string $f) : void{
        global $hooks_array;
        if(is_callable($f)){
            if(isset($hooks_array[$where])){
                $hooks_array[$where][count($hooks_array[$where])] = $f;
            }else{
                $hooks_array[$where] = array($f);
            }
        }
    }

    function do_process(string $where) : void
    {
        global $hooks_array;
        if(isset($hooks_array[$where])){
            for ($i=0; $i < count($hooks_array[$where]) ; $i++) {
                if(is_callable($hooks_array[$where][$i])){
                    $hooks_array[$where][$i]();
                }
            }
        }
    }

    include 'functions.php';

?>
