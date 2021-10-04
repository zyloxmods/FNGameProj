// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortWorkerType.h"
#include "GameplayTags.h"
#include "FortMontageLookupTable.h"
#include "FortHeroSpecialization.h"
#include "AthenaCharacterItemDefinition.h"
#include "AthenaBackpackItemDefinition.h"
#include "FFortAttributeInitializationKey.h"
#include "FortHeroType.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortHeroType : public UFortWorkerType
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
	bool bForceShowHeadAccessory;

	UPROPERTY(EditAnywhere)
	bool bForceShowBackpack;

	UPROPERTY(EditAnywhere)
	TArray<TSoftObjectPtr<UFortHeroSpecialization>> Specializations;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UFortMontageLookupTable> DefaultMontageLookupTable;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UFortMontageLookupTable> OverrideMontageLookupTable;
	/*
	UPROPERTY(EditAnywhere)
	TArray<FGameplayEffectApplicationInfo> CombinedStatGEs;
	*/
	UPROPERTY(EditAnywhere)
	FGameplayTagContainer RequiredGPTags;
	/*
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UFortFeedbackBank> MaleOverrideFeedback; 

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UFortFeedbackBank> FemaleOverrideFeedback;
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSoftClassPtr<APawn> OverridePawnClass;
	/*
	UPROPERTY(EditAnywhere)
	UFortHeroGameplayDefinition* HeroGameplayDefinition; 
	*/
	UPROPERTY(EditAnywhere)
		class UAthenaCharacterItemDefinition* HeroCosmeticOutfitDefinition;

	UPROPERTY(EditAnywhere)
		UAthenaBackpackItemDefinition* HeroCosmeticBackblingDefinition;;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSoftClassPtr<UAnimInstance> FrontEndAnimClass;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAnimMontage> FrontendAnimMontageIdleOverride; 

	UPROPERTY(EditAnywhere)
	float FrontEndBackPreviewRotationOffset; 

	UPROPERTY(EditAnywhere)
	FText Subtype;
	
	UPROPERTY(EditAnywhere)
	FFortAttributeInitializationKey AttributeInitKey;
	
	UPROPERTY(EditAnywhere)
	FDataTableRowHandle LegacyStatHandle;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAnimMontage> ItemPreviewMontage_Male;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAnimMontage> ItemPreviewMontage_Female;
	/*
	UPROPERTY(EditAnywhere)
	FText GetSubType();
	
	UPROPERTY(EditAnywhere)
	UFortHeroGameplayDefinition* GetHeroGameplayDefinition();
	
	UPROPERTY(EditAnywhere)
	UAnimMontage* GetFrontendAnimMontageIdleOverride();
	
	UPROPERTY(EditAnywhere)
	UFrontendAnimInstance* GetFrontendAnimClass();
	*/
};