#pragma once
#include "CoreMinimal.h"
#include "PreviewUnlockRewardData.h"
#include "PreviewUnlockData.generated.h"

USTRUCT(BlueprintType)
struct FPreviewUnlockData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreviewUnlockRewardData InstantRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreviewUnlockRewardData EarnedRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChapterNumberText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SeasonNumberText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SummaryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPaysForSelf;
    
    FORTNITEUI_API FPreviewUnlockData();
};

