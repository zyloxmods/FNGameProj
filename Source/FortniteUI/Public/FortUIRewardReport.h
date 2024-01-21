#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortUIRewardReport.generated.h"

class UFortLocalPlayer;

UCLASS(Blueprintable, NotPlaceable)
class UFortUIRewardReport : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortLocalPlayer* LocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RewardDisplayLevel;
    
public:
    UFortUIRewardReport();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRewardedChestIndex() const;
    
};

