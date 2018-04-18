// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Vela_ProtoGameMode.h"
#include "Vela_ProtoCharacter.h"

AVela_ProtoGameMode::AVela_ProtoGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AVela_ProtoCharacter::StaticClass();	
}
