#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortUIFeedback.h"
#include "FortUIFeedbackBlueprintOnly.h"
#include "FortUIFeedbackBank.generated.h"

UCLASS(Blueprintable)
class UFortUIFeedbackBank : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFortUIFeedback> FeedbackEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAthenaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFortUIFeedbackBlueprintOnly> BankDefinedFeedbackEvents;
    
public:
    UFortUIFeedbackBank();
};

