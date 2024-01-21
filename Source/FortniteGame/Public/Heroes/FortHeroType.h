

#pragma once

#include "CoreMinimal.h"
#include "Heroes/FortWorkerType.h"
#include "GameplayTags.h"
#include "Abilities/FortAbilitySet.h"
#include "Animation/FortMontageLookupTable.h"
#include "Athena/Items/AthenaBackpackItemDefinition.h"
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

USTRUCT(BlueprintType)
struct FGameplayEffectApplicationInfo
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere)
	TSoftClassPtr<UObject> GameplayEffect;                                 

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	float Level;                                                   
};

USTRUCT(BlueprintType)
struct FFortFeedbackHandle
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere)
	class UFortFeedbackBank* FeedbackBank;

	UPROPERTY(EditAnywhere)
	FName EventName;

	UPROPERTY(EditAnywhere)
	bool bReadOnly = false;

	UPROPERTY(EditAnywhere)
	bool bBankDefined = false;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	TEnumAsByte<EFortFeedbackBroadcastFilter> BroadcastFilterOverride;                                  

};

USTRUCT(BlueprintType)
struct FFortFeedbackResponse
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	 FFortFeedbackHandle Handle;                                                

	UPROPERTY(EditAnywhere)
	TEnumAsByte<EFortFeedbackContext> Context;                                                 
};

USTRUCT(BlueprintType)
struct FFortFeedbackLine
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<USoundBase> Audio; 

	UPROPERTY(EditAnywhere)
	 TSoftObjectPtr<UAnimSequence> AnimSequence;

	UPROPERTY(EditAnywhere)
	 TSoftObjectPtr<UAnimMontage> AnimMontage;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<EFortFeedbackAddressee> Addressee;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<EFortFeedbackContext> Context;

	UPROPERTY(EditAnywhere)
	TArray<FFortFeedbackResponse> ResponseEvents;

	UPROPERTY(EditAnywhere)
	bool bInterruptCurrentLine = false;

	UPROPERTY(EditAnywhere)
	bool bCanBeInterrupted = false;

	UPROPERTY(EditAnywhere)
	bool bCanQue = false;                                                

};


USTRUCT(BlueprintType)
struct FFortFeedbackAction
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere)
	FFortFeedbackHandle Handle;

	UPROPERTY(EditAnywhere)
	TArray<FFortFeedbackLine> Lines;                        
	                                             
};

USTRUCT(BlueprintType)
struct FFortFeedbackActionBankDefined : public FFortFeedbackAction
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float MinReplayTime;
	
	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float MinReplayTimeForSpeaker;                               
	                                             
};


UCLASS(BlueprintType)
class UFortFeedbackBank : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
	TArray<FFortFeedbackActionBankDefined> BankDefinedFeedbackEvents;

	UPROPERTY(EditAnywhere)
	TArray<FFortFeedbackAction> FeedbackEvents;                                           
};

USTRUCT(BlueprintType)
struct FFortHeroGameplayPiece
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UFortAbilityKit> GrantedAbilityKit;

	UPROPERTY(EditAnywhere)
	 FGameplayTagQuery RequiredCommanderTagQuery;
	
	UPROPERTY(EditAnywhere)
	 FText CommanderRequirementsText;

	UPROPERTY(EditAnywhere)
	bool bUseGlobalDefaultMinima = false;                                

	UPROPERTY(EditAnywhere)
	EFortItemTier MinimumHeroTier;                                        

	UPROPERTY(EditAnywhere)
	int  MinimumHeroLevel = 0;                                         

	UPROPERTY(EditAnywhere)
	EFortRarity MinimumHeroRarity;                                       
};

UCLASS(BlueprintType)
class UFortHeroClassGameplayDefinition : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<UObject> OverridePawnClass;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer                       HeroClassTags;                                            // 0x0058(0x0020) (Edit, DisableEditOnInstance)

	UPROPERTY(EditAnywhere)
	 FDataTableRowHandle                         LegacyStatHandle;                                         // 0x0078(0x0010) (Edit, DisableEditOnInstance)

	UPROPERTY(EditAnywhere)
	TArray<TSoftObjectPtr<UFortAbilityKit>> ClassAbilityKits;

};

USTRUCT(BlueprintType)
struct FFortHeroTierAbilityKit
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UFortAbilityKit> GrantedAbilityKit;
	
	UPROPERTY(EditAnywhere)
	EFortRarity  MinimumHeroRarity;                                        

};


UCLASS(BlueprintType)
class FORTNITEGAME_API UFortHeroGameplayDefinition : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	 UFortHeroClassGameplayDefinition*            HeroClassGameplayDefinition;                             

	UPROPERTY(EditAnywhere)
	 FGameplayTagContainer                       HeroBaseStatlineTags;                                    

	UPROPERTY(EditAnywhere)
	 FGameplayTagContainer                       HeroTags;                                               

	UPROPERTY(EditAnywhere)
	TArray<FFortHeroTierAbilityKit>             TierAbilityKits;                                       

	UPROPERTY(EditAnywhere)
	 FFortHeroGameplayPiece                      HeroPerk;                                               

	UPROPERTY(EditAnywhere)
	 FFortHeroGameplayPiece                      CommanderPerk;                                           
	
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
	
	UPROPERTY(EditAnywhere)
	float FrontEndBackPreviewRotationOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite , meta = (AssetBundles = "ItemDetails"))
		TArray<TSoftObjectPtr<UFortHeroSpecialization>> Specializations;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortMontageLookupTable> DefaultMontageLookupTable;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortMontageLookupTable> OverrideMontageLookupTable;
	
	UPROPERTY(EditAnywhere)
	TArray<FGameplayEffectApplicationInfo> CombinedStatGEs;
	
	UPROPERTY(EditAnywhere)
		FGameplayTagContainer RequiredGPTags;
	
	UPROPERTY(EditAnywhere)
	    TSoftObjectPtr<UFortFeedbackBank> MaleOverrideFeedback;
	
	UPROPERTY(EditAnywhere)
	    TSoftObjectPtr<UFortFeedbackBank> FemaleOverrideFeedback;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSoftClassPtr<UObject> OverridePawnClass;
	
	UPROPERTY(EditAnywhere)
	UFortHeroGameplayDefinition* HeroGameplayDefinition;
	
	UPROPERTY(EditAnywhere)
	    UAthenaCharacterItemDefinition* HeroCosmeticOutfitDefinition;

	UPROPERTY(EditAnywhere)
		UAthenaBackpackItemDefinition* HeroCosmeticBackblingDefinition;;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSoftClassPtr<UObject> FrontEndAnimClass;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage> FrontendAnimMontageIdleOverride;
	
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
	
	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("Hero", GetFName());
	}
};
