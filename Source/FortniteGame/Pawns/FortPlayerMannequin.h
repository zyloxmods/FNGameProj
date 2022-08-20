// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Hero/FortHeroType.h"
#include "../Data/FortKismetLibrary.h"
#include "../CharacterParts/CustomCharacterPart.h"
#include "../Athena/ItemDef/AthenaBackpackItemDefinition.h"
#include "../Athena/ItemDef/AthenaCharacterItemDefinition.h" 
#include "../Enum/EFortCustomPartType.h"
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

UCLASS(BlueprintType)
class AFortPlayerMannequin : public ASkeletalMeshActor
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		UFortHeroType* CurrentFortHeroType;

	UPROPERTY(EditAnywhere)
		UAthenaCharacterItemDefinition* AthenaCharacter;

	UPROPERTY(EditAnywhere)
		UAthenaBackpackItemDefinition* AthenaBackBling;

	UPROPERTY(EditAnywhere)
		UCustomCharacterPart* CharacterParts[0x8];

	//UPROPERTY(EditAnywhere)
		//FLightingChannels MannequinLightingChannels;

	UPROPERTY(EditAnywhere)
		float MannequinBoundsScale;

	UPROPERTY(EditAnywhere)
		bool bIsMannequinVisible;

	UPROPERTY(EditAnywhere)
		bool bMannequinCastsHiddenShadow;

	UPROPERTY(EditAnywhere)
		UCustomCharacterPart* CharacterPartList[0x7];

	//UPROPERTY(EditAnywhere)
		//TArray<FMcpVariantChannelInfo> OverrideVariants;
	/*
	UPROPERTY(EditAnywhere)
		UCustomColorSwatch* CharacterPartColorSwatches[0x8];

	UPROPERTY(EditAnywhere)
		UCustomColorSwatch* ColorSwatchesForCharacterParts[0x7];

	UPROPERTY(EditAnywhere)
		UCustomColorComponent* AccessoryColorSwatchHandler[0x7];

	UPROPERTY(EditAnywhere)
		UCustomColorSwatch* ColorSwatches[0x2];
		*/
	UPROPERTY(EditAnywhere)
		USkeletalMesh* WeaponSkeletalMesh;

	UPROPERTY(EditAnywhere)
		FName WeaponAttachSocket;

	UPROPERTY(EditAnywhere)
		TArray<FMorphValuePair> MorphTargets;

	UPROPERTY(EditAnywhere)
		bool bInitialized;

	UPROPERTY(EditAnywhere)
		bool bLimitTick;

	UPROPERTY(EditAnywhere)
		bool bAutoRegisterWithBudgetAllocator;

	//UPROPERTY(EditAnywhere)
		//UFortCustomizationAssetLoader* CustomizationAssetLoader;
	/*
	UFUNCTION(Blueprintable, BlueprintCallable)
		void UpdateMorphTargets();

	UFUNCTION(Blueprintable, BlueprintCallable)
		void ToggleGenderBP();

	UFUNCTION(Blueprintable, BlueprintCallable)
		bool SetWeaponSkeletalMesh(USkeletalMesh* SkeletalMesh);

	UFUNCTION(Blueprintable, BlueprintCallable)
		void SetSkeletalMesh(USkeletalMesh* SkeletalMesh);

	UFUNCTION(Blueprintable, BlueprintCallable)
		bool SetPart(EFortCustomPartType Part, UCustomCharacterPart* PartAsset);

	UFUNCTION(Blueprintable, BlueprintCallable)
		void SetMannequinLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2);

	UFUNCTION(Blueprintable, BlueprintCallable)
		void SetHeroType(UFortHeroType* NewHeroType);

	UFUNCTION(Blueprintable, BlueprintCallable)
		void SetAthenaCharacterDefAndVariants(UAthenaCharacterItemDefinition* NewAthenaCharacter, TArray<FMcpVariantChannelInfo> InOverrideVariants);

	UFUNCTION(Blueprintable, BlueprintCallable)
		void SetAthenaBackpackDefAndVariants(UAthenaBackpackItemDefinition* NewAthenaBackpack, TArray<FMcpVariantChannelInfo> InOverrideVariants);

	UFUNCTION(Blueprintable, BlueprintCallable)
		void ResetAthenaCharacterDefAndVariants(UAthenaCharacterItemDefinition* NewAthenaCharacter, TArray<FMcpVariantChannelInfo> InOverrideVariants);
	/*
	UFUNCTION(Blueprintable, BlueprintCallable)
		bool RemovePart(EFortCustomPartType Part);

	UFUNCTION(Blueprintable, BlueprintCallable)
		void OnVariantChanged(FGameplayTag VariantChannel, FGameplayTag OldVariantTag, FGameplayTag NewVariantTag);

	UFUNCTION(Blueprintable, BlueprintCallable)
		void OnPartChanged(UCustomCharacterPart* OldPart, UCustomCharacterPart* NewPart, EFortCustomPartType PartType);

	UFUNCTION(Blueprintable, BlueprintCallable)
		USkeletalMeshComponent* GetPartSkeletalMeshComponent(EFortCustomPartType Part);

	UFUNCTION(Blueprintable, BlueprintCallable)
		EFortCustomGender GetGender();

	UFUNCTION(Blueprintable, BlueprintCallable)
		void GetAllPartSkeletalMeshComponents(TArray<USkeletalMeshComponent*> SkeletalMeshComponents);

	UFUNCTION(Blueprintable, BlueprintCallable)
		FGameplayTagContainer GatherMetaTags(UAthenaCosmeticItemDefinition* CosmeticItem);

	UFUNCTION(Blueprintable, BlueprintCallable)
		bool CyclePartBP(EFortCustomPartType Part, bool bNextPart);
		*/
};
