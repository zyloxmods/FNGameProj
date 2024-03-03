#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortFeedbackAction.h"
#include "FortFeedbackActionBankDefined.h"
#include "FortFeedbackBank.generated.h"

UCLASS(Blueprintable)
class UFortFeedbackBank : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortFeedbackActionBankDefined> BankDefinedFeedbackEvents;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FFortFeedbackAction> FeedbackEvents;
    
public:
    UFortFeedbackBank();

    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("FortFeedbackBank", GetFName());
    }
};

