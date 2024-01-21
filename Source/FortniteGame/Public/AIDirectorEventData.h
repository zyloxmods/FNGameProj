#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "EFortAIDirectorEvent.h"
#include "EFortAIDirectorEventContribution.h"
#include "EFortAIDirectorEventParticipant.h"
#include "AIDirectorEventData.generated.h"

USTRUCT(BlueprintType)
struct FAIDirectorEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAIDirectorEvent Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle DataMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle CoolDownRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAIDirectorEventContribution ContributionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAIDirectorEventParticipant OwnerParticipantType;
    
    FORTNITEGAME_API FAIDirectorEventData();
};

