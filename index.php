<?php

session_start();

    //Criação da rota dbs relacionacional 
$rotas_permitidas = require_once __DIR__ . '/../inc/rotas.php'

$rotas = $_GET ['rota'] ?? 'home';
