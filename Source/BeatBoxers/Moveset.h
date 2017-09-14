// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BeatBoxersStructs.h"
#include "Moveset.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UMoveset : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BEATBOXERS_API IMoveset
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	/** Saves a reference to the fighterstate so it can push requests to start new windows. */
	void RegisterFighterState(class UObject& FighterState);

	/** Call to execute whatever move, or move in current combo, comes next according to the given input. */
	void ReceiveInputToken(EInputToken Token);

	/** Receives notifications from FighterState when its current window has finished and if it was interrupted or not. */
	void OnWindowFinished(bool WasInterrupted);
};