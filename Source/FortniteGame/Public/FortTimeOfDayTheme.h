#pragma once
#include "CoreMinimal.h"
#include "FortTimeOfDayTheme.generated.h"

class AFortTimeOfDayManager;
class UFortTimeOfDayCollection;

USTRUCT(BlueprintType)
struct FFortTimeOfDayTheme {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortTimeOfDayCollection*> TimeOfDayCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AFortTimeOfDayManager>> AdditionalTimeOfDayManagers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AFortTimeOfDayManager>> ProhibitedTimeOfDayManagers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AFortTimeOfDayManager>> ValidTimeOfDayManagers;
    
public:
    FORTNITEGAME_API FFortTimeOfDayTheme();
};

