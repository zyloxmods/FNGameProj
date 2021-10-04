#pragma once

#include "CoreMinimal.h"
#include "FFortEmoteMapping.h"
#include "AthenaCosmeticItemDefinition.h"
#include "GameplayTags.h"
#include "FMontageItemAccessData.h"
#include "FSectionNameAndWeight.h"
#include "FMontageVisibilityData.h"
#include "FortMontageItemDefinitionBase.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortMontageItemDefinitionBase : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAnimMontage> Animation;                                       

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAnimMontage> AnimationFemaleOverride;                         

	UPROPERTY(EditAnywhere)
	TArray<FFortEmoteMapping> AnimationOverrides;                               

	UPROPERTY(EditAnywhere)
	int PreviewLoops;

	UPROPERTY(EditAnywhere)
	float PreviewLength;

	UPROPERTY(EditAnywhere)
	bool bIncludeAudioWithAnimDuration;

	UPROPERTY(EditAnywhere)
	float EmoteCooldownSecs;

	UPROPERTY(EditAnywhere)
	bool bMontageContainsFacialAnimation;

	UPROPERTY(EditAnywhere)
	bool bPlayRandomSection;

	UPROPERTY(EditAnywhere)
	TArray<FSectionNameAndWeight> PlayRandomSectionByName;      

	UPROPERTY(EditAnywhere)
	bool  bSwitchToHarvestingToolOnUse;      

	UPROPERTY(EditAnywhere)
	bool bHolsterWeapon;             

	UPROPERTY(EditAnywhere)
	bool bHolsterWeaponIfDualWieldPickaxe;                  
	
	UPROPERTY(EditAnywhere)
	TArray<FMontageItemAccessData> AccessData;         
	
	UPROPERTY(EditAnywhere)
	TArray<FMontageVisibilityData> VisibilityData;      
	
	UPROPERTY(EditAnywhere)
	FGameplayTagContainer EmoteWheelExclusiveTags;                          

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAthenaCosmeticItemDefinition> RequiredEmoteParent;    

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer TagsWhichIndicateEmoteParent;               

};