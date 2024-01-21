// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once


#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"

#include "Heroes/FortHeroType.h"
#include "Heroes/FortHeroSpecialization.h"
#include "Customization/CustomCharacterPart.h"

#include "Components/SkeletalMeshComponent.h"
#include "Engine/SkeletalMesh.h"

#include "FortniteGame/FortniteGame.h"

#include "FortPlayerMannequin.generated.h"

UCLASS()
class FORTNITEGAME_API AFortPlayerMannequin : public ASkeletalMeshActor
{
	GENERATED_BODY()

	/** Begin FortPlayerMannequin Implementation *//*
	virtual void OnConstruction(const FTransform& Transform) override;
	void SetPartsFromHeroSpecialization(UFortHeroSpecialization* HeroSpecialization);
	void ResetParts(); */
	/** End FortPlayerMannequin Implementation */

public:
	/*
	UPROPERTY(EditAnywhere, Category = "Weapon")
		class USkeletalMesh* WeaponSkeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weapon")
		FName WeaponAttachSocket = "RightHand";

	UPROPERTY()
		 UCustomCharacterPart* CharacterParts[0x7];

	UPROPERTY(EditAnywhere, Category = "Character Parts")
		 UCustomCharacterPart* CharacterPartList[EFortCustomPartType::NumTypes];

	UPROPERTY(EditAnywhere, Category = "Character Parts", DisplayName = "Fort Hero Type")
		 UFortHeroType* CurrentFortHeroType;
		*/
};
