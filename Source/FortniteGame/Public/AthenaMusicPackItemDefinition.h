// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortRarity.h"
#include "GameplayTags.h"
#include "AthenaCosmeticItemDefinition.h"
#include "AthenaMusicPackItemDefinition.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API UAthenaMusicPackItemDefinition : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<USoundBase> FrontEndLobbyMusic;                                

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D> CoverArtImage;                                     

	UPROPERTY(EditAnywhere)
	bool bIsDefaultMusicPack;                             

	UPROPERTY(EditAnywhere)
	float MusicPreviewStartTime;                           
};