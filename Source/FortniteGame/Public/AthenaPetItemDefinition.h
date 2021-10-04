// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AthenaCosmeticItemDefinition.h"
#include "EAthenaPetAttachRule.h"
#include "FortPetStimuliBank.h"
#include "FortTaggedSoundBank.h"
#include "AthenaPetItemDefinition.generated.h"

UCLASS()
class FORTNITEGAME_API UAthenaPetItemDefinition : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditAnywhere)
	EAthenaPetAttachRule  PetAttachRule;                                    
	
	UPROPERTY(EditAnywhere)
	FVector PetAttachOffset;                                 

	UPROPERTY(EditAnywhere)
    FName PetAttachSocket;                                   
	
	UPROPERTY(EditAnywhere)
	TArray<UFortPetStimuliBank*> StimuliBanks;                                      
	
	UPROPERTY(EditAnywhere)
		FSoftClassPath PetPrefabClass;                                    
	
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UFortTaggedSoundBank> PetSoundBank;
	
};
