#pragma once
#include "CoreMinimal.h"
#include "EPegasusTimelineCategories.h"
#include "PegasusTimelineEventHit.h"
#include "PegasusTimelineEvent.generated.h"

USTRUCT(BlueprintType)
struct FPegasusTimelineEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PGS_TagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PGS_IsScalarValueRelevant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PGS_ScalarValueDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPegasusTimelineCategories PGS_Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPegasusTimelineEventHit> EventHits;
    
    FORTNITEGAME_API FPegasusTimelineEvent();
};

