#pragma once
#include "CoreMinimal.h"
#include "EFortEventRepeat.h"
#include "FortEventConditional.h"
#include "Templates/SubclassOf.h"
#include "FortStatEvent.generated.h"

class AFortClientAnnouncement;
class AFortPlayerController;
class UObject;
class UStat;

USTRUCT(BlueprintType)
struct FFortStatEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortEventRepeat::Type> RepeatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StatsToMonitor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortEventConditional> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortClientAnnouncement> AnnouncementToDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* NotificationParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStat* AssociatedStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* FPC;
    
    FORTNITEGAME_API FFortStatEvent();
};

