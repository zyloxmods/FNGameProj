#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Animation/PreviewCollectionInterface.h"
#include "GameplayTagContainer.h"
#include "FortAttributeInitializationKey.h"
#include "FortWorkerType.h"
#include "GameplayEffectApplicationInfo.h"
#include "HeroItem.h"
#include "Templates/SubclassOf.h"
#include "FortHeroType.generated.h"

class AFortPlayerPawn;
class UAnimMontage;
class UFortFeedbackBank;
class UFortHeroGameplayDefinition;
class UFortHeroSpecialization;
class UFortMontageLookupTable;
class UFrontendAnimInstance;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortHeroType : public UFortWorkerType/*, public IPreviewCollectionInterface*/ {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceShowHeadAccessory: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceShowBackpack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortHeroSpecialization>> Specializations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortMontageLookupTable> DefaultMontageLookupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortMontageLookupTable> OverrideMontageLookupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayEffectApplicationInfo> CombinedStatGEs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHeroItem> HeroItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredGPTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortFeedbackBank> MaleOverrideFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortFeedbackBank> FemaleOverrideFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortPlayerPawn> OverridePawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortHeroGameplayDefinition* HeroGameplayDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFrontendAnimInstance> FrontEndAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> FrontendAnimMontageIdleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontEndBackPreviewRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SubType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAttributeInitializationKey AttributeInitKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle LegacyStatHandle;
    
public:
    UFortHeroType();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSubType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortFeedbackBank* GetMaleOverrideFeedback(bool bOnlyIfLoaded) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortHeroGameplayDefinition* GetHeroGameplayDefinition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetFrontendAnimMontageIdleOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UFrontendAnimInstance> GetFrontendAnimClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortFeedbackBank* GetFemaleOverrideFeedback(bool bOnlyIfLoaded) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

