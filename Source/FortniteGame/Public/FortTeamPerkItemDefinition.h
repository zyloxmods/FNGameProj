#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortProfileItemDefinition.h"
#include "FortTeamPerkLoadoutCondition.h"
#include "FortTeamPerkItemDefinition.generated.h"

class UFortAbilityKit;

UCLASS(Blueprintable, MinimalAPI)
class UFortTeamPerkItemDefinition : public UFortProfileItemDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAbilityKit> GrantedAbilityKit;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProgressiveBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery RequiredCommanderTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CommanderRequirementsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTeamPerkLoadoutCondition> TeamPerkLoadoutConditions;
    
public:
    UFortTeamPerkItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasProgressiveBonus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAbilityKit* GetAbilityKitBP() const;
    
};

