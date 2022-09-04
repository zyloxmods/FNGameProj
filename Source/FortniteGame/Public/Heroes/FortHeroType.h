

#pragma once

#include "CoreMinimal.h"
#include "Heroes/FortWorkerType.h"
#include "GameplayTags.h"
#include "Animation/FortMontageLookupTable.h"
#include "Heroes/FortHeroSpecialization.h"
#include "FortHeroType.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FFortAttributeInitializationKey
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FName AttributeInitCategory;

	UPROPERTY(EditAnywhere)
		FName AttributeInitSubCategory;
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortHeroType : public UFortWorkerType
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
		bool bForceShowHeadAccessory;

	UPROPERTY(EditAnywhere)
		bool bForceShowBackpack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite , meta = (AssetBundles = "ItemDetails"))
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

	//UPROPERTY(EditAnywhere)
		//UAthenaBackpackItemDefinition* HeroCosmeticBackblingDefinition;;

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

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("Hero", GetFName());
	}
};
