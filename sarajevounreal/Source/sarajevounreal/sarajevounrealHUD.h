// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "sarajevounrealHUD.generated.h"

UCLASS()
class AsarajevounrealHUD : public AHUD
{
	GENERATED_BODY()

public:
	AsarajevounrealHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

