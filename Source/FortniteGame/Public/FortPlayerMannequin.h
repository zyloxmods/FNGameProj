// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FortHeroType.h"
#include "FortKismetLibrary.h"
#include "Animation/SkeletalMeshActor.h"
#include "FortPlayerMannequin.generated.h"



USTRUCT(Blueprintable)
struct FMorphValuePair
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName                                              MorphName;                                          //The Morph Name

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              MorphValue;                                        //The Morph Value
};

/**
 * 
 */

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayerMannequin : public ASkeletalMeshActor
{
	GENERATED_BODY()

public:

	//The Mannequin Character Parts this is prob C++
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ColorSwatches")
		class UCustomCharacterPart*                        CharacterParts;

	//Character Parts List
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "CharacterParts")
		TArray<class UCustomCharacterPart*>                CharacterPartList;

	//The Hero aka the HID(HeroItemDefinition)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "CharacterParts")
		class UFortHeroType*                               CurrentFortHeroType;

	//The Weapon Skeletal Mesh
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Weapon")
		class USkeletalMesh*                               WeaponSkeletalMesh;  

	//The Weapon Attach Socket Name
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Weapon")
		FName                                              WeaponAttachSocket;    

	//Morphs
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MorphTargets")
		TArray<struct FMorphValuePair>                     MorphTargets;                                             

	//BattleRoyale Character Outfit
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Athena")
		class UAthenaCharacterItemDefinition*              AthenaCharacter;

	//BattleRoyale Backbling
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Athena")
	class UAthenaBackpackItemDefinition*               AthenaBackBling;

	//Bounds of the Mannequin
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MannequinBoundsScale;

	//Should the Mannequin be Visible?
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bIsMannequinVisible;

	//Cast Hidden Shadow?
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bMannequinCastsHiddenShadow;


	//Merged Mesh params
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FSkeletalMeshMergeParams                           MeshMergeParams;


	///TArray<struct FMcpVariantChannelInfo>              OverrideVariants;                                         //CID Skin Variant
	///class UCustomColorSwatch*                          CharacterPartColorSwatches;                               //Character Swatch for the Character
	///class UCustomColorSwatch*                          ColorSwatchesForCharacterParts;                           //Swatches for multiple Character Parts
	///class UCustomColorComponent*                       AccessoryColorSwatchHandler;                              //Accessory Color Swatch
	///class UCustomColorSwatch*                          ColorSwatches;                                            //Color Swatches

	//IsInitiazlied
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Others")
	bool                                               bInitialized;  

	//ShouldLimitTick
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Others")
	bool                                               bLimitTick;   

	//ShouldAutoRegisterWithBudgetAllocator?
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Others")
	bool                                               bAutoRegisterWithBudgetAllocator;                         


	//class UFortCustomizationAssetLoader*               CustomizationAssetLoader;                               //Put this if you have a preset

};
