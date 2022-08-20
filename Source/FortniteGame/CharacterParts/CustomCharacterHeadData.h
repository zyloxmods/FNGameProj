// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomSkinColorSwatch.h"
#include "CustomHairColorSwatch.h"
#include "CustomCharacterBodyPartData.h"
#include "CustomCharacterHeadData.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API UCustomCharacterHeadData : public UCustomCharacterBodyPartData
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditAnywhere)
	TAssetPtr<UCustomSkinColorSwatch> SkinColorSwatch; 

	UPROPERTY(EditAnywhere)
	TAssetPtr<UCustomHairColorSwatch>            HairColorSwatch;             
	
	UPROPERTY(EditAnywhere)
	TArray<FName>                               CapMorphTargets;        

	UPROPERTY(EditAnywhere)
	TArray<FName>                               HelmetMorphTargets;      

	UPROPERTY(EditAnywhere)
	TArray<FName>                               MaskMorphTargets;    

	UPROPERTY(EditAnywhere)
	TArray<FName>                               HatMorphTargets;                                     
};
