<?php

    function echoHeader()
    {
        echo "HEADER";
    }

    add_process("header", "echoHeader");

?>
