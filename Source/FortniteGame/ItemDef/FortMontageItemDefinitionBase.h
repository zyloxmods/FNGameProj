#pragma once

#include "CoreMinimal.h"
#include "../Data/FortEmoteMapping.h"
#include "../Athena/ItemDef/AthenaCosmeticItemDefinition.h"
#include "GameplayTags.h"
#include "../Data/MontageItemAccessData.h"
#include "../Variants/SectionNameAndWeight.h"
#include "../Data/MontageVisibilityData.h"
#include "FortMontageItemDefinitionBase.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortMontageItemDefinitionBase : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAnimMontage> Animation;                                       

	UPROPERTY(EditAnywhere, meta = (AssetBundles = "AvatarDisplay"))
	TSoftObjectPtr<UAnimMontage> AnimationFemaleOverride;                         

	UPROPERTY(EditAnywhere, meta = (AssetBundles = "AvatarDisplay"))
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

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("Emote", GetFName());
	}
};