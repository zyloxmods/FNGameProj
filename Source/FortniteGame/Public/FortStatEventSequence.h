#pragma once
#include "CoreMinimal.h"
#include "EFortEventRepeat.h"
#include "FortEventConditional.h"
#include "FortStatEvent.h"
#include "FortStatEventSequence.generated.h"

class AFortPlayerController;
class UStat;

USTRUCT(BlueprintType)
struct FFortStatEventSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortEventRepeat::Type> RepeatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortStatEvent> EventSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStat* AssociatedStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* FPC;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StatsToMonitor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortEventConditional> Conditions;
    
public:
    FORTNITEGAME_API FFortStatEventSequence();
};

