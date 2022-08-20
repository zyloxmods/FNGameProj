// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CustomCharacterPart.h"
#include "CustomAccessoryAttachmentData.h"
#include "CustomAccessoryColorSwatch.h"
#include "CustomCharacterAccessoryData.generated.h"


UCLASS()
class FORTNITEGAME_API UCustomCharacterAccessoryData : public UCustomCharacterPartData
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	 FName AttachSocketName; 

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector AttachOffset; 
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	 UCustomAccessoryAttachmentData* AttachmentOverrideData; 

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bUseClothCollisionFromOtherParts; 

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bCollideWithOtherPartsCloth; 

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSubclassOf<UAnimInstance> AnimClass;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage> FrontEndAnimClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSubclassOf<UAnimInstance>  MannequinAnimClass;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UCustomAccessoryColorSwatch> AccessoryColors;

};
