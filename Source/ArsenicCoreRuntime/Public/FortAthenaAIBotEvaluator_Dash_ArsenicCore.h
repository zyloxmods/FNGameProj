#pragma once
#include "CoreMinimal.h"
#include "EFortBuildingType.h"
#include "FortAthenaAIBotEvaluator.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "FortAthenaAIBotEvaluator_Dash_ArsenicCore.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortAthenaAIBotEvaluator_Dash_ArsenicCore : public UFortAthenaAIBotEvaluator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DashExecutionStatusName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetActorName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponTriggerMeleeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinimumTimeAfterPreviousDashToAttemptNewDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaximumTimeAfterPreviousDashToAttemptNewDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EFortBuildingType::Type>> DashableBuildingTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DashAbilityCooldownTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DashDistanceMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAcceptableMoveDirFacingDotProductValue;
    
public:
};

