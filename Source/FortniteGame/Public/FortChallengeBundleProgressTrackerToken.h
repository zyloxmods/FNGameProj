#pragma once
#include "CoreMinimal.h"
#include "EItemProfileType.h"
#include "FortAccountItemDefinition.h"
#include "FortChallengeBundleProgressTrackerToken.generated.h"

UCLASS(Blueprintable)
class UFortChallengeBundleProgressTrackerToken : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemProfileType ProfileType;
    
public:
    UFortChallengeBundleProgressTrackerToken(const FObjectInitializer& ObjectInitializer);
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("ChallengeBundleCompletionToken", GetFName());
    }
};

