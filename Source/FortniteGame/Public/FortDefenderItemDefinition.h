#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFortDefenderSubtype.h"
#include "FortAttributeInitializationKey.h"
#include "FortCharacterType.h"
#include "GameplayEffectApplicationInfo.h"
#include "FortDefenderItemDefinition.generated.h"

class AFortAIPawn;

UCLASS(Blueprintable, MinimalAPI)
class UFortDefenderItemDefinition : public UFortCharacterType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayEffectApplicationInfo> CombinedStatGEs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AppearanceOverrideName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAttributeInitializationKey AttributeInitKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortAIPawn> PawnClass;
    
public:
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("Defender", GetFName());
    }
    UFortDefenderItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetDefenderSubtypeTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortDefenderSubtype GetDefenderSubtype() const;
    
};

