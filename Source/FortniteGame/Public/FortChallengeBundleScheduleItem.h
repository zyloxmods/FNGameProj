#pragma once
#include "CoreMinimal.h"
#include "FortAccountItem.h"
#include "FortChallengeBundleScheduleItem.generated.h"

class UFortChallengeBundleScheduleDefinition;

UCLASS(Blueprintable, Transient)
class UFortChallengeBundleScheduleItem : public UFortAccountItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Granted_Bundles;
    
public:
    UFortChallengeBundleScheduleItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortChallengeBundleScheduleDefinition* GetScheduleDefinitionBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercentageComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAchievedCount(int32& OutTotalAchievedCount, int32& OutTotalRequiredCount) const;
    
};

