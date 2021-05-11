// Fill out your copyright notice in the Description page of Project Settings.


#include "TankGameModeBase.h"

void ATankGameModeBase::BeginPlay()
{
	// Get references and game win/lose conditions.

	// Call HandleGakeStart() to initialise the start countdown, turret activation, pawn check etc.
}

void ATankGameModeBase::ActorDied(AActor* DeadActor)
{
	// Check what type of Actor died. If Turret, tally score. If Player -> go to lose condition.
}

void ATankGameModeBase::HandleGameStart()
{
	// Initialise the start countdown, turret activation, pawn check etc.
	// Call Blueprint version GameStart().
}

void ATankGameModeBase::HandleGameOver(bool PlayerWon)
{
	// See if the player has destoyed all turrets, show win result.
	// else if turret destroyed play, show lose result.
	// Call Blueprint version GameOver(bool).
}

