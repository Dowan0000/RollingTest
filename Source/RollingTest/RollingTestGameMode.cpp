// Copyright Epic Games, Inc. All Rights Reserved.

#include "RollingTestGameMode.h"
#include "RollingTestBall.h"

ARollingTestGameMode::ARollingTestGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = ARollingTestBall::StaticClass();
}
